import re
from collections.abc import Callable
import yaml
from pystrector.exceptions import UnknownTypeFoundException, BadSyntaxInCException
from enum import Enum
from typing import Any, Type
from pystrector.null_type import NullValue
from pystrector.strion import (StrionMeta, StrionBase, StrionTypes, StrionFieldDescriptor, StrionFieldObject,
                               DataTypeModifier, ModifierTypes)
from pystrector.utils import get_bytes_value
import importlib.resources


class Pystrector:
    """
    Main class. (Py)thon (Str)uct Refl(ector).

    Manages Strions.
    """
    structs_dir_path: str = "./pystrector/staticfiles/c_structures/clean_structures/"
    base_types: dict[str, int] = {}
    enums: dict[str, Any] = {}
    strions: dict[str, Any] = {}
    address_to_strion_name: dict[str, Any] = {}

    def __init__(self) -> None:
        self.base_types = dict(sorted(
            self._get_base_types_dict().items(), key=lambda x: -len(x[0])  # sort by decreasing length
        ))
        self._read_c_file()
        self._update_address_to_strions()

    @staticmethod
    def _get_base_types_dict() -> dict[str, int]:
        with importlib.resources.open_text(__package__ + ".staticfiles", "c_vars_size.yaml") as file:
            return yaml.safe_load(file)

    def _read_c_file(self) -> None:
        with importlib.resources.open_text(__package__ + ".staticfiles", "clean_structures.h") as file:
            file_content = file.read()
            self._create_file_data_types(file_content)

    def _create_file_data_types(self, file_content: str) -> None:
        """ Create data types from file """
        data_types: list[tuple[str, str]] = self._get_names(
            file_content, ['enum', 'struct', 'union']
        )
        for data_type, data_type_name in data_types:
            if data_type == "enum":
                enum_body = self._get_enum_body(data_type_name, file_content)
                enum = self._create_enum(data_type_name, enum_body)
                self.enums[data_type_name] = enum
            else:
                strion_body = self._get_strion_body(data_type_name, file_content)
                strion = self._create_strion(data_type_name, strion_body, StrionTypes(data_type))
                self.strions[data_type_name] = strion

    @staticmethod
    def _get_names(file_content: str, data_types: list[str]) -> list[tuple[str, str]]:
        """ :return list of tuples [(data_type, name)]
            where
                data_type is one from the 'data_types'
                name is the name of data_type
        """
        name_pattern = r'\b(' + "|".join(data_types) + r')\s+(\w+)[\s]+{'
        names = re.findall(name_pattern, file_content)
        return names

    def _get_enum_body(self, enum_name: str, file_content: str) -> str:
        enum_body_pattern = r'\b(enum)\s+' + enum_name + r'[\s]*{[\s]*([-\w\s*\d,=]+)[\s]*}'
        return self._get_body(enum_body_pattern, file_content)[0][1]

    def _get_strion_body(self, data_type_name: str, file_content: str) -> str:
        strion_body_pattern = r'\b(struct|union)\s+' + data_type_name + r'\s+{\s*([-\w\s;\*\[\]\(\)]+)\s*}'
        return self._get_body(strion_body_pattern, file_content)[0][1]

    @staticmethod
    def _get_body(pattern: str, file_content: str) -> list[tuple[str, str]]:
        bodies: list[tuple[str, str]] = re.findall(pattern, file_content)
        if len(bodies) != 1:
            raise BadSyntaxInCException(f"Ambiguous body for patter {pattern} (len {len(bodies)})")
        return bodies

    @staticmethod
    def _create_enum(enum_name: str, raw_enum_body: str) -> Type[Enum]:
        raw_enum_fields = filter(len, map(lambda x: x.strip(), raw_enum_body.split(',')))
        python_enum_dict = {}
        for raw_enum_field in raw_enum_fields:
            enum_field_name, enum_field_value = raw_enum_field.split('=')
            enum_field_name = enum_field_name.strip()
            enum_field_value = int(enum_field_value.strip())
            python_enum_dict[enum_field_name] = enum_field_value
        return Enum(enum_name, python_enum_dict)

    def _create_strion(self, strion_name: str, raw_strion_body: str, strion_type: StrionTypes) -> StrionMeta:
        descriptors: list[StrionFieldDescriptor] = []
        raw_fields = list(filter(len, map(lambda x: x.strip(), raw_strion_body.split(";"))))
        field_offset: int = 0

        for raw_field in raw_fields:
            new_descriptor = self._create_field_descriptor(raw_field, field_offset)
            descriptors.append(new_descriptor)
            field_offset += new_descriptor.size if strion_type == StrionTypes.STRUCT else 0

        class_data: dict[str, Any] = {descriptor.name: descriptor for descriptor in descriptors}
        return StrionMeta(strion_name, (StrionBase,), class_data)

    def _create_field_descriptor(self, raw_field: str, field_offset: int) -> StrionFieldDescriptor:
        field_c_type, field_size = self._get_c_type_and_size(raw_field)
        name_start_index = raw_field.find(field_c_type) + len(field_c_type)
        while raw_field[name_start_index] == " ":
            name_start_index += 1
        modifier_type: ModifierTypes = ModifierTypes.NULL_MODIFIER
        modifier_count: int = 1
        if raw_field[name_start_index] == "*":
            modifier_type = ModifierTypes.POINTER
            name_start_index += 1
        if raw_field[name_start_index] == "*":
            modifier_type = ModifierTypes.POINTER_TO_POINTER
            name_start_index += 1
        field_name = raw_field[name_start_index:].strip()
        if value := re.findall(r'[(\d+)]', field_name):
            modifier_type = ModifierTypes.ARRAY
            modifier_count = int("".join(value))
            field_name = field_name[:field_name.find("[")]
        field_size = (8 * (modifier_type in [ModifierTypes.POINTER, ModifierTypes.POINTER_TO_POINTER])) or field_size
        field_size = (field_size * (modifier_type == ModifierTypes.ARRAY) * modifier_count) or field_size
        return StrionFieldDescriptor(
            field_name,
            field_c_type,
            DataTypeModifier(modifier_type, modifier_count),
            field_size,
            field_offset,
        )

    def _get_c_type_and_size(self, raw_field: str) -> tuple[str, int]:
        """ Get c_type and size from raw_field"""
        for base_type, size in self.base_types.items():
            if re.findall(r'^' + base_type, raw_field):
                return base_type, size

        for strion_name, strion in self.strions.items():
            if re.findall(r'^struct[ \s]*' + strion_name, raw_field) or \
                    re.findall(r'^union[ \s]*' + strion_name, raw_field):
                return strion_name, strion.strion_size

        for enum_name, enum in self.enums.items():
            if re.findall(r'^enum[ \s]*' + enum_name, raw_field):
                return enum_name, 4

        if "*" in raw_field and ("struct" in raw_field or "union" in raw_field):
            if "struct" in raw_field:
                c_types = re.findall(r'^struct[ \s]*(\w*)\b', raw_field)
            else:
                c_types = re.findall(r'^union[ \s]*(\w*)\b', raw_field)

            if c_types:
                return c_types[0], 8

        raise UnknownTypeFoundException(f"Unknown type in {raw_field}")

    def _update_address_to_strion(self, python_object: Any, name: str) -> None:
        obj = self.strions["PyObject"](python_object=python_object)
        self._set_converters_to_python(obj)
        self.address_to_strion_name[obj.ob_type.python_value.hex_address] = name

    def _update_address_to_strions(self) -> None:
        self._update_address_to_strion(int(), "PyLongObject")
        self._update_address_to_strion(float(), "PyFloatObject")
        self._update_address_to_strion(complex(), "PyComplexObject")
        self._update_address_to_strion(str(), "PyUnicodeObject")
        self._update_address_to_strion(bool(), "PyLongObject")
        self._update_address_to_strion(tuple(), "PyTupleObject")
        self._update_address_to_strion(list(), "PyListObject")
        self._update_address_to_strion(dict(), "PyDictObject")
        self._update_address_to_strion(set(), "PySetObject")
        self._update_address_to_strion(frozenset(), "PySetObject")
        self._update_address_to_strion(bytes(), "PyBytesObject")
        self._update_address_to_strion(bytearray(), "PyByteArrayObject")
        self._update_address_to_strion(memoryview(b''), "PyMemoryViewObject")
        self._update_address_to_strion(lambda: lambda: ..., "PyFunctionObject")
        self._update_address_to_strion(slice(1), "PySliceObject")

        def gen():
            while True:
                yield 1

        self._update_address_to_strion(gen, "PyGenObject")

    def bind_object(self, python_object: Any = NullValue, memory_address: int = NullValue,
                    cast_strion_name: str = NullValue) -> Any:
        """ :return Strion object which is built on the basis of the Python object sources """
        default_strion = self.strions["PyObject"]
        obj = default_strion(python_object, memory_address)
        self._set_converters_to_python(obj)

        strion_name = self.address_to_strion_name.get(obj.ob_type.python_value.hex_address, "PyObject")
        concrete_strion = self.strions[strion_name]
        if cast_strion_name is not NullValue:
            concrete_strion = self.strions[cast_strion_name]

        obj = concrete_strion(python_object, memory_address)
        self._set_converters_to_python(obj)
        return obj

    def _get_type_size(self, type_name: str) -> int:
        size = self.base_types.get(type_name, self.strions[type_name].strion_size)
        return size

    def _set_converters_to_python(self, strion_object) -> None:
        """ Set converters to all StrionFieldObjects """
        for field_name in strion_object.field_names:
            field_obj: StrionFieldObject = getattr(strion_object, field_name)
            self._set_converter_to_python(field_obj)

    def _set_converter_to_python(self, field_obj: StrionFieldObject) -> None:
        """ Set converter to StrionFieldObjects """
        converter_to_python: Callable[[StrionFieldObject], [Any]] = lambda obj: (
            get_bytes_value(obj.strion_object.memory_address + obj.field_offset, obj.field_size)
        )

        if field_obj.field_c_type in self.base_types.keys():
            if field_obj.field_modifier.type == ModifierTypes.NULL_MODIFIER:
                def converter_to_python(obj: StrionFieldObject) -> Any:
                    res = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, obj.field_size)
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.POINTER:
                def converter_to_python(obj: StrionFieldObject) -> Any:
                    address: int = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, 8)
                    res = get_bytes_value(address, self.base_types[obj.field_c_type])
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.ARRAY:
                def converter_to_python(obj: StrionFieldObject):
                    res = list(range(obj.field_modifier_count))
                    for i in range(obj.field_modifier_count):
                        res[i] = hex(get_bytes_value(
                            obj.strion_object.memory_address + obj.field_offset + obj.field_size * i,
                            obj.field_size
                        ))
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.POINTER_TO_POINTER:
                def converter_to_python(obj: StrionFieldObject):
                    start_address = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, 8)
                    res = list(range(obj.field_modifier_count))
                    for i in range(obj.field_modifier_count):
                        res[i] = hex(get_bytes_value(
                            start_address + 8 * i, self.base_types[field_obj.field_c_type]
                        ))
                    return res

        elif field_obj.field_c_type in self.strions.keys():
            strion = self.strions[field_obj.field_c_type]
            if field_obj.field_modifier.type == ModifierTypes.NULL_MODIFIER:
                def converter_to_python(obj: StrionFieldObject):
                    res = strion(memory_address=obj.strion_object.memory_address + obj.field_offset)
                    self._set_converters_to_python(res)
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.POINTER:
                def converter_to_python(obj: StrionFieldObject):
                    address: int = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, 8)
                    res = strion(memory_address=address)
                    self._set_converters_to_python(res)
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.ARRAY:
                def converter_to_python(obj: StrionFieldObject):
                    res = list(range(obj.field_modifier_count))
                    for i in range(obj.field_modifier_count):
                        res[i] = strion(
                            memory_address=obj.strion_object.memory_address + obj.field_offset + obj.field_size * i
                        )
                        self._set_converters_to_python(res[i])
                    return res

            elif field_obj.field_modifier.type == ModifierTypes.POINTER_TO_POINTER:
                def converter_to_python(obj: StrionFieldObject):
                    start_address = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, 8)
                    res = list(range(obj.field_modifier_count))
                    for i in range(obj.field_modifier_count):
                        size = self.strions[field_obj.field_c_type].strion_size
                        res[i] = strion(get_bytes_value(
                            start_address + 8 * i, size
                        ))
                        self._set_converters_to_python(res[i])
                    return res

        elif field_obj.field_c_type in self.enums.keys():
            enum = self.enums[field_obj.field_c_type]
            if field_obj.field_modifier.type == ModifierTypes.NULL_MODIFIER:
                def converter_to_python(obj: StrionFieldObject):
                    res = get_bytes_value(obj.strion_object.memory_address + obj.field_offset, 4)
                    return enum(res)
            else:
                raise ValueError("Other modifiers to enum is unimaginable")

        else:
            raise UnknownTypeFoundException(f"Unknown type {field_obj.field_c_type}")

        field_obj.converter_to_python = converter_to_python
