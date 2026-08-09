from __future__ import annotations
import platform
import sys
from copy import copy
from typing import Any, ClassVar
from pystrector.utils import get_bytes_value, set_bytes_value
from struct import unpack, pack


ANONYMOUS_VAR_PREFIX: str = "anonymous_var"
ANONYMOUS_VAR_ID: int = 1

# architectures whose ABI makes plain "char" unsigned. Apple platforms
# are signed on every architecture they ship, including arm64, so they
# are checked before the machine name
UNSIGNED_CHAR_MACHINES: frozenset[str] = frozenset({
    'aarch64', 'aarch64_be', 'arm64', 'arm64e', 'armv6l', 'armv7l',
    'armv8l', 'loongarch64', 'ppc', 'ppc64', 'ppc64le', 'powerpc',
    'powerpc64', 'powerpc64le', 'riscv32', 'riscv64', 's390', 's390x',
})


def char_is_signed() -> bool:
    """Report whether plain C "char" is signed on this platform.

    C leaves the signedness of a bare "char" to the implementation, and
    it is a third type distinct from both "signed char" and "unsigned
    char". Getting it wrong makes every char field with the top bit set
    read as a negative number.
    """
    if sys.platform == 'darwin':
        return True

    return platform.machine() not in UNSIGNED_CHAR_MACHINES


def get_anonymous_var_name() -> str:
    global ANONYMOUS_VAR_ID
    ANONYMOUS_VAR_ID += 1

    return f"{ANONYMOUS_VAR_PREFIX}_{ANONYMOUS_VAR_ID - 1}"


def align(offset: int, alignment: int) -> int:
    """Round offset up to the nearest multiple of alignment."""
    return (offset + alignment - 1) // alignment * alignment


class DataTypeMeta(type):
    typedefs: ClassVar[dict[str, str]] = {}
    registry: ClassVar[dict[str, DataTypeMeta]] = {}
    additional_names: tuple[str, ...]
    # "size" is the public name and may be shadowed by a struct field of
    # the same name; "_pystr_size" is what the library itself relies on
    size: int
    _pystr_size: int

    @classmethod
    def create_typedef(cls, typedef: str, datatype: str):
        """Save typedef for datatype.

        For example:
            create_typedef('PyObject', '_object')
        """
        # both names are kept exactly as they appear in C: the table is
        # looked up with the names the parser produced
        cls.typedefs[typedef] = datatype

    @classmethod
    def is_typedef(cls, datatype: str) -> bool:
        return datatype in cls.typedefs.keys()

    @classmethod
    def get_typedef_class(cls, typedef: str) -> str:
        """Get datatype of typedef.

        For example:
            if at first call create_typedef('int32', 'Int') and
             create_typedef('i32', 'int32')
            then get_typedef_class('i32') will be 'Int'
        """
        while cls.typedefs.get(typedef) is not None:
            typedef = cls.typedefs[typedef]

        return typedef

    @property
    def fields(self) -> list[str]:
        """Return list with names of fields that are descriptors."""
        fields = []
        cls_vars = self.__dict__.items()
        for cls_var_name, cls_var_value in cls_vars:
            if isinstance(cls_var_value.__class__, DataTypeMeta):
                fields.append(cls_var_name)

        return fields

    @property
    def is_composite_type(self) -> bool:
        return len(self.fields) > 0

    def build_layout(cls, is_union: bool) -> None:
        """Assign field offsets and the total size with C layout rules.

        Offsets are tracked in bits so that bit fields can share a
        storage unit with their neighbours, the way the System V AMD64
        and AAPCS64 ABIs lay them out.
        """
        offset_bits = 0
        alignment = 1
        for field_name in cls.fields:
            datatype_obj: DataType = cls.__dict__[field_name]
            field_alignment = datatype_obj._pystr_alignment
            alignment = max(alignment, field_alignment)

            if isinstance(datatype_obj, BitField):
                offset_bits = cls._place_bit_field(
                    datatype_obj, offset_bits, is_union
                )
            elif is_union:
                datatype_obj.set_offset(0)
                offset_bits = max(offset_bits, datatype_obj._pystr_size * 8)
            else:
                offset_bits = align(offset_bits, field_alignment * 8)
                datatype_obj.set_offset(offset_bits // 8)
                offset_bits += datatype_obj._pystr_size * 8

        cls._pystr_size = align(align(offset_bits, 8) // 8, alignment)
        if "size" not in cls.fields:
            # public alias; skipped when the struct itself has a "size"
            # field, whose descriptor must not be overwritten
            cls.size = cls._pystr_size

    @staticmethod
    def _place_bit_field(field: BitField, offset_bits: int,
                         is_union: bool) -> int:
        """Place one bit field and return the next free bit offset."""
        unit_bits = field._pystr_size * 8

        if field._pystr_bit_width == 0:
            # ``unsigned int :0`` allocates nothing; it only pushes the
            # next field to the start of a fresh storage unit
            field.set_offset(0)
            field.set_bit_shift(0)
            return offset_bits if is_union else align(offset_bits, unit_bits)

        start = 0 if is_union else offset_bits
        end = start + field._pystr_bit_width
        if start // unit_bits != (end - 1) // unit_bits:
            # the field would straddle a storage unit; the ABI moves it
            # to the next one instead of splitting it
            start = align(start, unit_bits)
            end = start + field._pystr_bit_width

        unit_index = start // unit_bits
        field.set_offset(unit_index * field._pystr_size)
        field.set_bit_shift(start - unit_index * unit_bits)

        return max(offset_bits, end) if is_union else end

    def __getitem__(self, item: int) -> Array:
        if not isinstance(item, int):
            raise TypeError("Length must be an integer")

        return Array(datatype=self(), length=item)

    def __new__(cls, name: str, bases: tuple, attrs: dict, is_union=False) \
            -> DataTypeMeta:
        instance = super().__new__(cls, name, bases, attrs)
        declared_size = attrs.get("size")
        if isinstance(declared_size, int):
            # scalar datatype declaring its width, e.g. "size = 4"
            instance._pystr_size = declared_size

        if instance.is_composite_type:
            instance.build_layout(is_union)

        if hasattr(instance, "additional_names"):
            for additional_name in instance.additional_names:
                cls.create_typedef(additional_name, name)

        cls.registry[name] = instance

        return instance

    def __str__(cls) -> str:
        return f"DataType {cls.__name__} ({hex(id(cls))})"


class DataType(metaclass=DataTypeMeta):
    # instance attributes use the "_pystr_" prefix to avoid clashing with
    # generated struct fields (CPython structs have fields named "size",
    # "address", "fields", etc.)
    #
    # the same applies to the machinery the library uses on itself: every
    # internal read goes through "_pystr_size" / "_pystr_address", never
    # through the public "size" / "address", because those two can be
    # shadowed by a field descriptor of the same name. "arena_object" has
    # a field named "address" and would otherwise recurse forever.
    additional_names: ClassVar[tuple[str, ...]]
    size: int
    _pystr_size: int = 0
    _pystr_ptr: int
    _pystr_offset: int
    _pystr_field_name: str
    # strong reference to the bound Python object: keeps it alive so the
    # memory this wrapper points to is not freed by the GC
    _pystr_keepalive: Any

    def __getattr__(self, item: str) -> DataType:
        for field_name in self.__class__.fields:
            if (field_name.startswith(ANONYMOUS_VAR_PREFIX) and
                    item in self.__class__.__dict__[
                        field_name].__class__.fields):
                return getattr(getattr(self, field_name), item)

        raise AttributeError(item)

    def __setattr__(self, key: str, value: Any) -> None:
        if not key.startswith("_pystr_") and key not in self.__class__.fields:
            # mirror __getattr__: allow writing to fields of anonymous
            # members directly
            for field_name in self.__class__.fields:
                if (field_name.startswith(ANONYMOUS_VAR_PREFIX) and
                        key in self.__class__.__dict__[
                            field_name].__class__.fields):
                    setattr(getattr(self, field_name), key, value)
                    return None

        return super().__setattr__(key, value)

    def __repr__(self) -> str:
        return f"{self.__class__.__name__} ({self._pystr_address})"

    def __init__(self, ptr: int = 0) -> None:
        self._pystr_ptr = ptr
        self._pystr_offset = 0
        self._pystr_keepalive = None

    @property
    def _pystr_alignment(self) -> int:
        """C alignment: max of field alignments for composite, else size."""
        cls = self.__class__
        if cls.is_composite_type:
            return max(
                cls.__dict__[field_name]._pystr_alignment
                for field_name in cls.fields
            )

        # incomplete types (void, functions) have no width; 1 keeps
        # align() well defined
        return self._pystr_size or 1

    def __set_name__(self, owner: Any, name: str) -> None:
        if self._pystr_ptr != 0:
            raise TypeError("Don't use 'ptr' for Descriptor objects")

        self._pystr_field_name = name

    def _bound_instance(self, instance: DataType | None,
                        owner: DataTypeMeta) -> DataType:
        """Return instance, rejecting a field read on the class itself."""
        if instance is None:
            raise AttributeError(
                f"{owner.__name__}.{self._pystr_field_name} describes a"
                f" field of the struct; read it on a bound object, or use"
                f" {owner.__name__}.__dict__"
                f"[{self._pystr_field_name!r}] for the layout itself"
            )

        return instance

    def __get__(self, instance: DataType | None, owner: DataTypeMeta) \
            -> DataType:
        instance = self._bound_instance(instance, owner)
        new_instance = self.__class__(ptr=instance._pystr_address)
        new_instance.set_offset(self._pystr_offset)
        new_instance._pystr_keepalive = instance._pystr_keepalive

        return new_instance

    def __set__(self, instance: DataType, value: Any) -> None:
        if not isinstance(value, DataType):
            raise TypeError(
                f"Value must be an instance of DataType, not {type(value)}"
            )

        # any datatype of the same width is accepted: the assignment is a
        # raw byte copy, so e.g. Int -> UnsignedInt is well defined
        if value._pystr_size != self._pystr_size:
            raise TypeError(
                f"Value must be {self._pystr_size} bytes wide, but"
                f" {value.__class__.__name__} is {value._pystr_size}"
            )

        obj = getattr(instance, self._pystr_field_name)
        obj.bytes_value = value.bytes_value

    def __getitem__(self, item: int) -> DataType:
        raise TypeError(
            f"{self.__class__.__name__} doesn't support __getitem__"
        )

    def __pos__(self) -> DataType:
        raise TypeError(
            f"{self.__class__.__name__} doesn't support __pos__"
        )

    def __add__(self, other) -> DataType:
        raise TypeError(
            f"{self.__class__.__name__} doesn't support __add__"
        )

    def set_offset(self, offset: int) -> None:
        self._pystr_offset = offset

    def set_ptr(self, ptr: int) -> None:
        self._pystr_ptr = ptr

    @property
    def _pystr_address(self) -> int:
        return self._pystr_ptr + self._pystr_offset

    @property
    def address(self) -> int:
        """Public alias of _pystr_address.

        Shadowed on structs that declare a field named "address".
        """
        return self._pystr_address

    @property
    def bytes_value(self):
        return get_bytes_value(
            self._pystr_address, self._pystr_size
        )

    @bytes_value.setter
    def bytes_value(self, bytes_value: bytearray) -> None:
        if not isinstance(bytes_value, bytearray):
            raise TypeError(
                f"Value must be bytearray, not {type(bytes_value)}"
            )

        if len(bytes_value) != self._pystr_size:
            raise ValueError(
                f"Value must be exactly {self._pystr_size} bytes long,"
                f" got {len(bytes_value)}"
            )

        set_bytes_value(self._pystr_address, bytes_value)

    @property
    def pretty_value(self) -> Any:
        return self.convert_from_bytes(self.bytes_value)

    @pretty_value.setter
    def pretty_value(self, value: Any) -> None:
        self.bytes_value = self.convert_to_bytes(value)

    def convert_from_bytes(self, bytes_value: bytearray) -> Any:
        return bytes_value

    def convert_to_bytes(self, value: Any) -> bytearray:
        return bytearray(value)

    def cast_to(self, datatype: DataTypeMeta) -> DataType:
        instance = datatype(ptr=self._pystr_address)
        instance._pystr_keepalive = self._pystr_keepalive

        return instance

    def cast(self):
        from pystrector.core_datatypes import _object
        if not isinstance(self, _object):
            raise TypeError("Autocast work only with _object")

        from pystrector import Binder
        Binder.ensure_binds()
        type_address = self.ob_type.ptr_for_unpacking
        klass = Binder.type_address_to_cls.get(type_address)
        if klass is None:
            raise TypeError(
                f"pystrector doesn't know the type at {hex(type_address)};"
                f" use cast_to() with an explicit datatype"
            )

        instance = Binder.cls_to_datatype[klass](ptr=self._pystr_address)
        instance._pystr_keepalive = self._pystr_keepalive

        return instance


class BitField(DataType):
    """A C bit field: some bits inside the storage unit of its type.

    ``_pystr_offset`` points at the storage unit rather than at the
    field, and ``_pystr_bit_shift`` says where inside that unit the
    value starts. Bits are counted from the least significant one,
    which is what little endian targets do.
    """
    _pystr_datatype: DataType
    _pystr_bit_width: int
    _pystr_bit_shift: int

    def __init__(self, datatype: DataType, bit_width: int,
                 ptr: int = 0) -> None:
        super().__init__(ptr=ptr)
        self._pystr_datatype = datatype
        self._pystr_bit_width = bit_width
        self._pystr_bit_shift = 0
        # the storage unit is as wide as the declared type: reads and
        # writes go through it, never through the bit field alone
        self._pystr_size = datatype._pystr_size

    def __get__(self, instance: DataType | None, owner: DataTypeMeta) \
            -> BitField:
        instance = self._bound_instance(instance, owner)
        new_instance = self.__class__(
            ptr=instance._pystr_address, datatype=self._pystr_datatype,
            bit_width=self._pystr_bit_width,
        )
        new_instance.set_offset(self._pystr_offset)
        new_instance.set_bit_shift(self._pystr_bit_shift)
        new_instance._pystr_keepalive = instance._pystr_keepalive

        return new_instance

    def set_bit_shift(self, bit_shift: int) -> None:
        self._pystr_bit_shift = bit_shift

    def __set__(self, instance: DataType, value: Any) -> None:
        # a raw byte copy would overwrite the neighbours sharing the unit
        raise TypeError(
            f"Assign to {self._pystr_field_name}.pretty_value: a bit field"
            f" shares its storage unit with other fields"
        )

    @property
    def _pystr_signed(self) -> bool:
        return getattr(self._pystr_datatype, "signed", False)

    @property
    def pretty_value(self) -> int:
        unit = int.from_bytes(self.bytes_value, byteorder='little',
                              signed=False)
        value = (unit >> self._pystr_bit_shift) & (
            (1 << self._pystr_bit_width) - 1
        )
        if self._pystr_signed and value >> (self._pystr_bit_width - 1):
            # the top bit of a signed bit field is its sign bit
            value -= 1 << self._pystr_bit_width

        return value

    @pretty_value.setter
    def pretty_value(self, value: int) -> None:
        if not isinstance(value, int):
            raise TypeError(f"Value must be an int, not {type(value)}")

        mask = (1 << self._pystr_bit_width) - 1
        if not self._pystr_signed and not 0 <= value <= mask:
            raise ValueError(
                f"Value must fit in {self._pystr_bit_width} unsigned bits"
            )
        if self._pystr_signed and not (
                -(1 << (self._pystr_bit_width - 1)) <= value
                < 1 << (self._pystr_bit_width - 1)):
            raise ValueError(
                f"Value must fit in {self._pystr_bit_width} signed bits"
            )

        unit = int.from_bytes(self.bytes_value, byteorder='little',
                              signed=False)
        unit &= ~(mask << self._pystr_bit_shift)
        unit |= (value & mask) << self._pystr_bit_shift
        self.bytes_value = bytearray(
            unit.to_bytes(self._pystr_size, byteorder='little', signed=False)
        )

    def convert_from_bytes(self, bytes_value: bytearray) -> Any:
        raise TypeError(
            "BitField reads the whole storage unit; use pretty_value"
        )

    def convert_to_bytes(self, value: Any) -> bytearray:
        raise TypeError(
            "BitField writes the whole storage unit; use pretty_value"
        )


class Pointer(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('*',)
    size = 8
    _pystr_datatype: str | DataType
    _pystr_arr_index: int

    def __init__(self, datatype: str | DataType, ptr: int = 0) -> None:
        super().__init__(ptr=ptr)
        self._pystr_datatype = datatype
        self._pystr_arr_index = 0

    def __get__(self, instance: DataType | None, owner: DataTypeMeta) \
            -> Pointer:
        instance = self._bound_instance(instance, owner)
        new_instance = self.__class__(
            ptr=instance._pystr_address, datatype=self._pystr_datatype
        )
        new_instance.set_offset(self._pystr_offset)
        new_instance._pystr_keepalive = instance._pystr_keepalive

        return new_instance

    def __add__(self, item: int) -> Pointer:
        if not isinstance(item, int):
            raise TypeError(
                f"Item must be an int, not {type(item)}"
            )

        new_instance = self.__class__(ptr=self._pystr_address,
                                      datatype=self._pystr_datatype)
        new_instance.set_arr_index(self._pystr_arr_index + item)
        new_instance._pystr_keepalive = self._pystr_keepalive

        return new_instance

    @property
    def ptr_for_unpacking(self) -> int:
        return int.from_bytes(
            get_bytes_value(self._pystr_address, self._pystr_size),
            byteorder='little',
            signed=False
        )

    def __pos__(self) -> DataType:
        instance: DataType
        if isinstance(self._pystr_datatype, DataType):
            # copy so that two dereferences don't share (and overwrite)
            # one instance
            instance = copy(self._pystr_datatype)
            instance.set_offset(0)
        else:
            datatype_cls = DataTypeMeta.registry.get(self._pystr_datatype)
            if datatype_cls is None:
                raise TypeError(
                    f"Unknown datatype {self._pystr_datatype!r}"
                )
            instance = datatype_cls()

        if instance._pystr_size == 0:
            raise TypeError(
                f"Can't dereference a pointer to the incomplete type"
                f" {instance.__class__.__name__}; cast it first"
            )

        target = self.ptr_for_unpacking
        if target == 0:
            # reading through a NULL pointer is the common way to end up
            # in unmapped memory, and there it takes the interpreter down
            # with a segfault rather than an exception. It costs one
            # comparison to say so instead
            raise ValueError(
                f"Can't dereference a NULL pointer to"
                f" {instance.__class__.__name__}"
            )

        index_offset = self._pystr_arr_index * instance._pystr_size
        instance.set_ptr(target + index_offset)
        instance._pystr_keepalive = self._pystr_keepalive

        return instance

    def __getitem__(self, item: int) -> DataType:
        if not isinstance(item, int):
            raise TypeError(f"Item must be int, not {type(item)}")

        return +(self + item)

    def __setitem__(self, key: int, value: DataType) -> None:
        if not isinstance(key, int):
            raise TypeError(f"Item must be int, not {type(key)}")

        from pystrector.core_datatypes import _object
        target = self[key]
        if isinstance(target, _object):
            target = target.cast()
        if isinstance(value, _object):
            value = value.cast()
        target.bytes_value = value.bytes_value

        return None

    def set_arr_index(self, index: int) -> None:
        self._pystr_arr_index = index

    def convert_from_bytes(self, bytes_value: bytearray) -> int:
        raise TypeError("Pointer doesn't support pretty_value")

    def convert_to_bytes(self, integer_value: int) -> bytearray:
        raise TypeError("Pointer doesn't support pretty_value")


class Array(Pointer):
    additional_names: ClassVar[tuple[str, ...]] = ('[]',)
    _pystr_length: int
    size: int

    def __init__(self, datatype: DataType, length: int = 1, ptr: int = 0) \
            -> None:
        super().__init__(datatype, ptr)
        self._pystr_length = length
        self._pystr_size = self.size = datatype._pystr_size * length

    def __get__(self, instance: DataType | None, owner: DataTypeMeta) \
            -> Array:
        instance = self._bound_instance(instance, owner)
        assert isinstance(self._pystr_datatype, DataType)
        new_instance = self.__class__(
            ptr=instance._pystr_address, datatype=self._pystr_datatype,
            length=self._pystr_length
        )
        new_instance.set_offset(self._pystr_offset)
        new_instance._pystr_keepalive = instance._pystr_keepalive

        return new_instance

    def __add__(self, item: int) -> Array:
        if not isinstance(item, int):
            raise TypeError(
                f"Item must be an int, not {type(item)}"
            )

        assert isinstance(self._pystr_datatype, DataType)
        new_instance = self.__class__(
            ptr=self._pystr_address, datatype=self._pystr_datatype,
            length=self._pystr_length
        )
        new_instance.set_arr_index(self._pystr_arr_index + item)
        new_instance._pystr_keepalive = self._pystr_keepalive

        return new_instance

    @property
    def _pystr_alignment(self) -> int:
        assert isinstance(self._pystr_datatype, DataType)
        return self._pystr_datatype._pystr_alignment

    @property
    def ptr_for_unpacking(self) -> int:
        return self._pystr_address


class BaseNumber(DataType):
    signed = True

    def convert_from_bytes(self, bytes_value: bytearray) -> int:
        return int.from_bytes(bytes_value, byteorder='little',
                              signed=self.signed)

    def convert_to_bytes(self, integer_value: int) -> bytearray:
        return bytearray(
            integer_value.to_bytes(
                self._pystr_size, byteorder='little', signed=self.signed
            )
        )


class BaseSignedNumber(BaseNumber):
    signed = True


class BaseUnsignedNumber(BaseNumber):
    signed = False


class Bool(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('bool', '_Bool')
    size = 1

    def convert_from_bytes(self, bytes_value: bytearray) -> bool:
        return any(bytes_value)

    def convert_to_bytes(self, bool_value: bool) -> bytearray:
        return bytearray(
            int(bool_value).to_bytes(self._pystr_size, 'little')
        )


class Byte(BaseSignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'byte', 'signed char', 'signed byte',
    )
    size = 1


class UnsignedByte(BaseUnsignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned char', 'unsigned byte'
    )
    size = 1


# plain "char" is resolved on the platform the layouts are generated on,
# so the generated file names Byte or UnsignedByte outright and nothing
# depends on this at run time. _platform warns when a file generated
# elsewhere is used on a platform that would have chosen the other one
DataTypeMeta.create_typedef(
    'char', (Byte if char_is_signed() else UnsignedByte).__name__
)


class Short(BaseSignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'short', 'short int', 'signed short', 'signed short int',
    )
    size = 2


class UnsignedShort(BaseUnsignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned short', 'unsigned short int')
    size = 2


class Int(BaseSignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'int', 'signed', 'signed int')
    size = 4


class UnsignedInt(BaseUnsignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = ('unsigned int', 'unsigned')
    size = 4


class LongLong(BaseSignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'long long', 'long', 'long int', 'signed long', 'signed long int',
        'long long int', 'signed long long', 'signed long long int',
    )
    size = 8


class UnsignedLongLong(BaseUnsignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned long long', 'unsigned long', 'unsigned long int',
        'unsigned long long int', 'long unsigned int',
    )
    size = 8


class Float(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('float',)
    size = 4

    def convert_from_bytes(self, bytes_value: bytearray) -> float:
        return unpack('f', bytes_value)[0]

    def convert_to_bytes(self, float_value: float) -> bytearray:
        return bytearray(pack('f', float_value))


class Double(Float):
    additional_names: ClassVar[tuple[str, ...]] = ('double',)
    size = 8

    def convert_from_bytes(self, bytes_value: bytearray) -> float:
        return unpack('d', bytes_value)[0]

    def convert_to_bytes(self, float_value: float) -> bytearray:
        return bytearray(pack('d', float_value))


class Void(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('void',)
    # incomplete type: it has no storage of its own
    size = 0

    def convert_from_bytes(self, bytes_value: bytearray) -> Any:
        raise TypeError("Void doesn't support pretty_value")

    def convert_to_bytes(self, integer_value: Any) -> bytearray:
        raise TypeError("Void doesn't support pretty_value")


class Func(DataType):
    additional_names = ('func',)
    # incomplete type: it has no storage of its own
    size = 0

    def convert_from_bytes(self, bytes_value: bytearray) -> Any:
        raise TypeError("Func doesn't support pretty_value")

    def convert_to_bytes(self, integer_value: Any) -> bytearray:
        raise TypeError("Func doesn't support pretty_value")
