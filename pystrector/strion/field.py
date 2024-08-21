from .base import StrionBase
from collections.abc import Callable
from typing import Any
from pystrector.null_type import NullValue
from dataclasses import dataclass
from enum import StrEnum
from typing import Self


class ModifierTypes(StrEnum):
    """
    Enumeration of types of modifiers.
    """
    NULL_MODIFIER = "null_modifier"
    POINTER = "pointer"
    POINTER_TO_POINTER = "pointer_to_pointer"
    ARRAY = "array"


@dataclass
class DataTypeModifier:
    type: ModifierTypes
    count: int = 1


class StrionFieldDescriptor:
    """
    (Str)uct + Un(ion) descriptor class.

    Stores field characteristics and manages StrionFieldObject.
    """
    name: str
    c_type: str
    modifier: DataTypeModifier
    size: int
    offset: int

    def __init__(self, name: str, c_type: str, modifier: DataTypeModifier, size: int, offset: int) -> None:
        self.name = name
        self.c_type = c_type
        self.modifier = modifier
        self.size = size
        self.offset = offset

    def __get__(self, obj, objtype=None) -> 'StrionFieldObject':
        value = obj.__dict__.setdefault(
            self.name, StrionFieldObject(obj, self)
        )
        return value

    def __set__(self, obj, value: int) -> None:
        obj.__dict__[self.name] = StrionFieldObject(obj, self)


class StrionFieldObject:
    """
    (Str)uct + Un(ion) field class.

    Represents a field class. For all characteristics refer to the descriptor.
    It does not store characteristics itself so as not to duplicate memory.
    """
    strion_object: Any
    descriptor: Any
    converter_to_python: Callable[[Self], [Any]]
    _python_value: Any = NullValue  # cache

    def __init__(self, strion_object: Any, descriptor: StrionFieldDescriptor) -> None:
        self.strion_object = strion_object
        self.descriptor = descriptor

    def __repr__(self) -> str:
        return f"Field object python {hex(id(self))}"

    def __str__(self) -> str:
        return (f"name: {self.field_name}, type: {self.field_c_type}, address: {self.hex_address},"
                f" value: {self.python_value}")

    def __getattr__(self, atr_name: str) -> Any:
        if isinstance(self.python_value, StrionBase):
            if hasattr(self.python_value, atr_name):
                return getattr(self.python_value, atr_name)
        raise AttributeError(f"{repr(self)} does not have attribute {atr_name}")

    @property
    def python_value(self) -> Any:
        if self._python_value is NullValue:
            self._python_value = self.converter_to_python(self)
        return self._python_value

    @property
    def int_address(self) -> int:
        return int(self.strion_object.memory_address + self.field_offset)

    @property
    def hex_address(self) -> str:
        return hex(self.int_address)

    @property
    def field_name(self) -> str:
        return self.descriptor.name

    @property
    def field_c_type(self) -> str:
        return self.descriptor.c_type

    @property
    def field_modifier(self) -> DataTypeModifier:
        return self.descriptor.modifier

    @property
    def field_size(self) -> int:
        return self.descriptor.size

    @property
    def field_offset(self) -> int:
        return self.descriptor.offset
