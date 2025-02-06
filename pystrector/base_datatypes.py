from __future__ import annotations
from typing import Any, ClassVar
from pystrector.utils import get_bytes_value, set_bytes_value
from struct import unpack, pack
import textwrap

ANONYMOUS_VAR: str = "anonymous_var"
ANONYMOUS_VAR_INDEX: int = 1

PRIVATE_ATTRS_PREFIX: str = "_PRIVATE_ATTR_"


def get_anonymous_var_name() -> str:
    global ANONYMOUS_VAR_INDEX
    ANONYMOUS_VAR_INDEX += 1

    return f"{ANONYMOUS_VAR}_{ANONYMOUS_VAR_INDEX - 1}"


class DataTypeMeta(type):
    typedefs: ClassVar[dict[str, str]] = {}
    additional_names: tuple[str, ...]
    size: int

    @classmethod
    def create_typedef(cls, typedef: str, datatype: str):
        """Save typedef for datatype.

        For example:
            create_typedef('PyObject', '_object')
        """
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
        """Calculate size of composite datatype."""
        size = 0
        for field_name in cls.fields:
            datatype_obj: DataType = cls.__dict__[field_name]
            if is_union:
                size = max(size, datatype_obj.size)
            else:
                size += datatype_obj.size

        cls.size = size

    def update_offsets(cls) -> None:
        """Update offsets of composite datatype."""
        offset = 0
        for field_name in cls.fields:
            datatype_obj: DataType = cls.__dict__[field_name]
            datatype_obj.set_offset(offset)
            offset += datatype_obj.size

    def __getitem__(self, item: int) -> Array:
        if not isinstance(item, int):
            raise TypeError("Length must be an integer")

        return Array(datatype=self(), length=item)

    def __new__(cls, name: str, bases: tuple, attrs: dict, is_union=False) \
            -> DataTypeMeta:
        instance = super().__new__(cls, name, bases, attrs)
        if instance.is_composite_type:
            instance.calculate_size(is_union)
            if not is_union:
                instance.update_offsets()

        if hasattr(instance, "additional_names"):
            for additional_name in instance.additional_names:
                cls.create_typedef(additional_name, name)

        return instance

    def __str__(cls) -> str:
        return f"DataType {cls.__name__} ({hex(id(cls))})"


class DataType(metaclass=DataTypeMeta):
    additional_names: ClassVar[tuple[str, ...]]
    size: int
    __ptr: int
    __offset: int
    __value: bytearray

    @staticmethod
    def transform_name(cls, name: str) -> str:
        parent_classes = [cls] + list(cls.__mro__)
        for parent_cls in parent_classes:
            cls_prefix = f"_{parent_cls.__name__}__"
            if name.startswith(cls_prefix):
                name = PRIVATE_ATTRS_PREFIX + name[len(cls_prefix):]
                break
        else:
            if name.startswith("__") and not name.endswith("__"):
                name = PRIVATE_ATTRS_PREFIX + name[2:]

        return name

    def __setattr__(self, key: str, value: Any) -> None:
        key = self.transform_name(self.__class__, key)
        super().__setattr__(key, value)

    def __getattr__(self, item: str) -> Any:
        value = self.__dict__.get(
            self.transform_name(self.__class__, item),
            None,
        )
        if value is not None:
            return value

        for field_name in self.__class__.fields:
            if (field_name.startswith(ANONYMOUS_VAR) and
                    item in self.__class__.__dict__[
                        field_name].__class__.fields):
                return getattr(getattr(self, field_name), item)

        raise AttributeError(item)

    def __repr__(self) -> str:
        return f"{self.__class__.__name__} ({self.address})"

    def __init__(self, ptr: int = 0) -> None:
        self.__ptr = ptr
        self.__offset = 0

    def __set_name__(self, owner: Any, name: str) -> None:
        if self.__ptr != 0:
            raise Exception("Don't use 'ptr' for Descriptor objects")

        self.field_name = name

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> DataType:
        new_instance = self.__class__(ptr=instance.address)
        new_instance.set_offset(self.__offset)

        return new_instance

    def __set__(self, instance: DataType, value: Any) -> None:
        if not isinstance(value, self.__class__):
            raise TypeError(
                f"Value must be an instance of DataType, not {type(value)}"
            )
        obj = getattr(instance, self.field_name)
        obj.bytes_value = value.bytes_value

    def set_offset(self, offset: int) -> None:
        self.__offset = offset

    def set_ptr(self, ptr: int) -> None:
        self.__ptr = ptr

    @property
    def address(self) -> int:
        return self.__ptr + self.__offset

    @property
    def bytes_value(self):
        return get_bytes_value(
            self.__ptr + self.__offset, self.size
        )

    @bytes_value.setter
    def bytes_value(self, bytes_value: bytearray) -> None:
        if not isinstance(bytes_value, bytearray):
            raise TypeError(
                f"Value must be bytearray, not {type(bytes_value)}"
            )

        set_bytes_value(self.__ptr + self.__offset, bytes_value)

    @property
    def pretty_value(self) -> Any:
        return self.convert_from_bytes(self.bytes_value)

    @pretty_value.setter
    def pretty_value(self, value: Any) -> None:
        self.bytes_value = self.convert_to_bytes(value)

    def convert_from_bytes(self, bytes_value: bytearray) -> Any:
        return bytes_value

    def convert_to_bytes(self, bytes_value: Any) -> bytearray:
        return bytearray(bytes_value)

    def cast_to(self, datatype: DataTypeMeta) -> DataType:
        return datatype(ptr=self.address)


class Pointer(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('*',)
    size = 8
    __datatype: str | DataType
    __arr_index: int

    def __init__(self, datatype: str | DataType, ptr: int = 0) -> None:
        super().__init__(ptr=ptr)
        self.__datatype = datatype
        self.__arr_index = 0

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> Pointer:
        new_instance = self.__class__(
            ptr=instance.address, datatype=self.__datatype
        )
        new_instance.set_offset(self.__offset)

        return new_instance

    def __add__(self, item: int) -> Pointer:
        if not isinstance(item, int):
            raise Exception(f"Item must be int, not {type(item)}")

        new_instance = self.__class__(ptr=self.address,
                                      datatype=self.__datatype)
        new_instance.set_arr_index(item)

        return new_instance

    @property
    def ptr_for_unpacking(self) -> int:
        return int.from_bytes(
            get_bytes_value(self.address, self.size),
            byteorder='little',
            signed=True
        )

    def __pos__(self) -> DataType:
        instance: DataType
        if isinstance(self.__datatype, DataType):
            instance = self.__datatype
        else:
            instance = globals()[self.__datatype]()

        index_offset = self.__arr_index * instance.size
        instance.set_ptr(self.ptr_for_unpacking + index_offset)

        return instance

    def __getitem__(self, item: int) -> DataType:
        if not isinstance(item, int):
            raise Exception(f"Item must be int, not {type(item)}")

        return +(self + item)

    def set_arr_index(self, index: int) -> None:
        self.__arr_index = index


class Array(Pointer):
    additional_names: ClassVar[tuple[str, ...]] = ('[]',)
    __datatype: DataType
    size: int

    def __init__(self, datatype: DataType, length: int = 1, ptr: int = 0) \
            -> None:
        super().__init__(datatype, ptr)
        self.__length = length
        self.size = datatype.size * length

    def __get__(self, instance: DataType, owner: DataTypeMeta) -> Array:
        new_instance = self.__class__(
            ptr=instance.address, datatype=self.__datatype,
            length=self.__length
        )
        new_instance.set_offset(self.__offset)

        return new_instance

    @property
    def ptr_for_unpacking(self) -> int:
        return self.address

    def __setitem__(self, key: int, value: bytearray) -> None:
        if not isinstance(key, int):
            raise Exception(f"Key must be int, not {type(key)}")

        if not isinstance(value, bytearray):
            raise Exception(f"Value must be bytearray, not {type(value)}")

        instance = self[key]
        instance.value = value


class BaseInteger(DataType):
    signed = True

    def convert_from_bytes(self, bytes_value: bytearray) -> int:
        return int.from_bytes(bytes_value, byteorder='little',
                              signed=self.signed)

    def convert_to_bytes(self, bytes_value: int) -> bytearray:
        arr = bytearray(self.size)
        hex_value = ("0" * bool(len(hex(bytes_value)) % 2 == 1)) + hex(
            bytes_value)[2:]
        for index, byte in enumerate(reversed(textwrap.wrap(hex_value, 2))):
            arr[index] = int(byte, 16)

        return arr


class BaseSignedInteger(BaseInteger):
    signed = True


class BaseUnsignedInteger(BaseInteger):
    signed = False


class Bool(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('bool',)
    size = 1

    def convert_from_bytes(self, bytes_value: bytearray) -> bool:
        return all(map(lambda b: b == 255, bytes_value))

    def convert_to_bytes(self, bytes_value: bool) -> bytearray:
        return bytearray(int(bytes_value).to_bytes())


class Byte(BaseSignedInteger):
    additional_names: ClassVar[tuple[str, ...]] = (
        'byte', 'char', 'signed char', 'signed byte',
    )
    size = 1


class UnsignedByte(BaseUnsignedInteger):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned char', 'unsigned byte'
    )
    size = 1


class Short(Byte):
    additional_names: ClassVar[tuple[str, ...]] = (
        'short', 'signed short', 'signed short', 'signed short int',
    )
    size = 2


class UnsignedShort(UnsignedByte):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned short', 'unsigned short int')
    size = 2


class Int(Short):
    additional_names: ClassVar[tuple[str, ...]] = (
        'int', 'signed', 'signed int')
    size = 4


class UnsignedInt(UnsignedShort):
    additional_names: ClassVar[tuple[str, ...]] = ('unsigned int', 'unsigned')
    size = 4


class LongLong(Int):
    additional_names: ClassVar[tuple[str, ...]] = (
        'long long', 'long', 'long int', 'signed long', 'signed long int',
        'long long int', 'signed long long', 'signed long long int',
        'long unsigned int',
    )
    size = 8


class UnsignedLongLong(UnsignedInt):
    additional_names: ClassVar[tuple[str, ...]] = (
        'unsigned long long', 'unsigned long', 'unsigned long int',
        'unsigned long long int',
    )
    size = 8


class Float(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('float',)
    size = 4

    def convert_from_bytes(self, bytes_value: bytearray) -> float:
        return unpack('f', bytes_value)[0]

    def convert_to_bytes(self, bytes_value: float) -> bytearray:
        return bytearray(pack('f', bytes_value))


class Double(Float):
    additional_names: ClassVar[tuple[str, ...]] = ('double',)
    size = 8

    def convert_from_bytes(self, bytes_value: bytearray) -> float:
        return unpack('d', bytes_value)[0]

    def convert_to_bytes(self, bytes_value: float) -> bytearray:
        return bytearray(pack('d', bytes_value))


class Void(DataType):
    additional_names: ClassVar[tuple[str, ...]] = ('void',)

    @property
    def bytes_value(self):
        raise Exception("No value")

    @bytes_value.setter
    def bytes_value(self, value):
        raise Exception("No value")


class Func(DataType):
    additional_names = ('func',)

    @property
    def bytes_value(self):
        raise NotImplementedError("No value")

    @bytes_value.setter
    def bytes_value(self, value):
        raise Exception("No value")
