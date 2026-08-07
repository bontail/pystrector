from __future__ import annotations
from copy import copy
from typing import Any, ClassVar
from pystrector.utils import get_bytes_value, set_bytes_value
from struct import unpack, pack


ANONYMOUS_VAR_PREFIX: str = "anonymous_var"
ANONYMOUS_VAR_ID: int = 1


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
        typedef = typedef.replace("__", "_")
        datatype = datatype.replace("__", "_")
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

    def calculate_size(cls, is_union: bool) -> None:
        """Calculate size of composite datatype with C padding rules."""
        size = 0
        alignment = 1
        for field_name in cls.fields:
            datatype_obj: DataType = cls.__dict__[field_name]
            field_alignment = datatype_obj._pystr_alignment
            alignment = max(alignment, field_alignment)
            if is_union:
                size = max(size, datatype_obj._pystr_size)
            else:
                size = align(size, field_alignment) + datatype_obj._pystr_size

        cls._pystr_size = align(size, alignment)
        if "size" not in cls.fields:
            # public alias; skipped when the struct itself has a "size"
            # field, whose descriptor must not be overwritten
            cls.size = cls._pystr_size

    def update_offsets(cls) -> None:
        """Update offsets of composite datatype."""
        offset = 0
        for field_name in cls.fields:
            datatype_obj: DataType = cls.__dict__[field_name]
            offset = align(offset, datatype_obj._pystr_alignment)
            datatype_obj.set_offset(offset)
            offset += datatype_obj._pystr_size

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
            if not is_union:
                instance.update_offsets()
            instance.calculate_size(is_union)

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

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> DataType:
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


class Pointer(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('*',)
    size = 8
    _pystr_datatype: str | DataType
    _pystr_arr_index: int

    def __init__(self, datatype: str | DataType, ptr: int = 0) -> None:
        super().__init__(ptr=ptr)
        self._pystr_datatype = datatype
        self._pystr_arr_index = 0

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> Pointer:
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

        index_offset = self._pystr_arr_index * instance._pystr_size
        instance.set_ptr(self.ptr_for_unpacking + index_offset)
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

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> Array:
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
    additional_names: ClassVar[tuple[str, ...]] = ('bool',)
    size = 1

    def convert_from_bytes(self, bytes_value: bytearray) -> bool:
        return any(bytes_value)

    def convert_to_bytes(self, bool_value: bool) -> bytearray:
        return bytearray(
            int(bool_value).to_bytes(self._pystr_size, 'little')
        )


class Byte(BaseSignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'byte', 'char', 'signed char', 'signed byte',
    )
    size = 1


class UnsignedByte(BaseUnsignedNumber):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned char', 'unsigned byte'
    )
    size = 1


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
