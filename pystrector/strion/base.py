from .meta import StrionMeta
from enum import StrEnum
from typing import Any
from pystrector.exceptions import NullArgsLimitException
from pystrector.null_type import NullValue


class StrionTypes(StrEnum):
    """
    (Str)uct + Un(ion) Types.
    """
    STRUCT = "struct"
    UNION = "union"


class StrionBase(metaclass=StrionMeta):
    """
    (Str)uct + Un(ion) Base.

    Required parent class for Strion classes.
    """

    memory_address: int
    type: StrionTypes

    def __init__(self, python_object: Any = NullValue, memory_address: int = NullValue) -> None:
        if python_object is NullValue and memory_address is NullValue:
            raise NullArgsLimitException("Null arguments limit exceeded")
        self.memory_address = memory_address
        if self.memory_address is NullValue:
            self.memory_address = id(python_object)

    def __repr__(self) -> str:
        return f"StrIon {self.strion.__name__} object (memory address {self.hex_address}) (python {hex(id(self))})"

    @property
    def strion(self) -> StrionMeta:
        """ Alias for type hints """
        return self.__class__

    @property
    def field_names(self) -> list[str]:
        return self.strion.field_names

    @property
    def hex_address(self) -> str:
        return hex(self.memory_address)

    def get_fields_info(self) -> str:
        s = ""
        for field_name in self.field_names:
            s += "\t" + str(getattr(self, field_name)) + "\n"
        return s[:-1]

