from __future__ import annotations
from typing import ClassVar
from pycparser import parse_file  # noqa
from dataclasses import dataclass
from pycparser.c_ast import Decl, Typedef, PtrDecl, Struct, \
    ArrayDecl, TypeDecl, IdentifierType, Union, FuncDecl, Enum, Node, \
    BinaryOp, Constant, UnaryOp, TernaryOp
from pystrector.base_datatypes import DataTypeMeta, Void, Int, Func, Array, \
    Pointer, UnsignedInt, LongLong, UnsignedLongLong, Byte, Bool, \
    UnsignedByte, Short, UnsignedShort, Float, Double, DataType, \
    get_anonymous_var_name
from pystrector.code_generator.prepare_c_file import prepare_c_file

ANONYMOUS_STRUCT_INDEX = 1


def get_anonymous_struct_index() -> int:
    global ANONYMOUS_STRUCT_INDEX
    ANONYMOUS_STRUCT_INDEX += 1

    return ANONYMOUS_STRUCT_INDEX - 1


def get_expr_from_binary_op(node: Node) -> str:
    """Return str expression which parsed from node."""
    if isinstance(node, Constant):
        return node.value

    elif isinstance(node, UnaryOp):
        return f'({node.op + get_expr_from_binary_op(node.expr)})'

    elif isinstance(node, BinaryOp):
        return f'({get_expr_from_binary_op(node.left) +
                   node.op +
                   get_expr_from_binary_op(node.right)})'

    elif isinstance(node, TernaryOp):
        cond = eval(get_expr_from_binary_op(node.cond))
        if cond:
            return get_expr_from_binary_op(node.iftrue)
        else:
            return get_expr_from_binary_op(node.iffalse)

    elif node is None:
        return '0'

    else:
        raise NotImplementedError()


def get_dimensions(node: ArrayDecl) -> int:
    if not isinstance(node, ArrayDecl):
        raise TypeError('Node must be an ArrayDecl')

    return int(eval(get_expr_from_binary_op(node.dim)))


def handle_node(node: Node, parent_node: Node) -> str | None:
    """Recursively go through the nodes and create typedefs and structs."""
    if isinstance(node, Decl):
        handle_node(node.type, node)

    elif isinstance(node, Typedef):
        typedef = node.name.replace("__", "_")
        datatype = handle_node(node.type, node).replace("__", "_")
        if typedef == datatype:
            # typedef equals datatype when a typedef is created on a structure
            # without a name so no need to create typedef
            return

        DataTypeMeta.create_typedef(
            typedef,
            datatype,
        )

    elif isinstance(node, IdentifierType):
        return ' '.join(node.names)

    elif isinstance(node, PtrDecl):
        return f'*{handle_node(node.type, node)}'

    elif isinstance(node, ArrayDecl):
        return f'[{get_dimensions(node)}]{handle_node(node.type, node)}'

    elif isinstance(node, TypeDecl):
        return handle_node(node.type, node)

    elif isinstance(node, Struct) or isinstance(node, Union):
        prototype = CoreDataTypePrototype.from_node(node, parent_node)
        if prototype.fields is None:
            return Void.__name__

        return prototype.name

    elif isinstance(node, Enum):
        return Int.__name__

    elif isinstance(node, FuncDecl):
        return Func.__name__

    else:
        raise NotImplementedError()


@dataclass
class CoreDataTypePrototypeField:
    """Class representing a struct field.

    Attributes:
        name (str): Name of the field. Example: 'ob_refcnt'
        type (type): Type of the field. Example: '*long'
    """
    name: str
    type: str

    @classmethod
    def from_node(cls, node: Struct | Union, parent_node: Node) -> \
            list[CoreDataTypePrototypeField]:
        """Create CoreDataTypePrototypeField from node."""
        if node.decls is None:
            return []

        fields: list[CoreDataTypePrototypeField] = []
        for decl in node.decls:
            name = decl.name if decl.name else get_anonymous_var_name()
            datatype = (handle_node(decl.type, parent_node).
                        replace("__", "_"))
            fields.append(CoreDataTypePrototypeField(
                name=name,
                type=datatype,
            ))

        return fields

    @classmethod
    def parse_field_type(cls, field_type: str, written_class_names: set[str]) \
            -> str:
        """Parse field type and return str for Python code."""
        if field_type.startswith("*"):
            return (
                f"Pointer(datatype={cls.parse_field_type(
                    field_type[1:],
                    written_class_names,
                )})"
            )

        if field_type.startswith("["):
            end_arr = field_type.index(']')
            arr_type = cls.parse_field_type(
                field_type[end_arr + 1:],
                written_class_names,
            )
            if field_type[end_arr + 1] == "*":
                return (f"Array(datatype={arr_type},"
                        f" length={field_type[1:end_arr]})")

            else:
                if arr_type.endswith('()'):
                    arr_type = arr_type[:-2]
                return (
                    f"{arr_type}{field_type[:end_arr + 1]}"
                )

        if DataTypeMeta.is_typedef(field_type):
            field_type = cls.parse_field_type(
                DataTypeMeta.get_typedef_class(field_type),
                written_class_names,
            )
        else:
            if field_type in written_class_names:
                field_type += '()'
            else:
                field_type = f'"{field_type}"'

        return field_type

    def get_python_representation(self, written_class_names: set[str]) -> str:
        return (f"{self.name} = "
                f"{self.parse_field_type(self.type, written_class_names)}")


@dataclass
class CoreDataTypePrototype:
    """Class representing a struct."""
    registered_prototypes: ClassVar[list[CoreDataTypePrototype]] = []
    name: str
    fields: list[CoreDataTypePrototypeField]
    is_union: bool = False

    @classmethod
    def from_node(cls, node: Struct | Union, parent_node: Node) \
            -> CoreDataTypePrototype:
        """Create CoreDataTypePrototype from node and register it."""
        name = node.name
        if name is None:
            if isinstance(parent_node, TypeDecl):
                name = parent_node.declname
            else:
                name = f"anonymous_{get_anonymous_struct_index()}"
        name = name.replace('__', '_')

        new_prototype = CoreDataTypePrototype(
            name=name,
            fields=CoreDataTypePrototypeField.from_node(node, parent_node),
            is_union=isinstance(node, Union),
        )

        if new_prototype.fields:
            cls.registered_prototypes.append(new_prototype)

        return new_prototype


def main():
    file = './staticfiles/python_structures.c'
    prepared_file = './staticfiles/prepared_python_structures.c'
    prepare_c_file(file, prepared_file)

    ast = parse_file(prepared_file)

    for node in ast:
        if not isinstance(node, Typedef) and not isinstance(node, Decl):
            continue

        handle_node(node, node)

    # now we have all prototypes in CoreDataTypePrototype.registered_prototypes
    core_datatypes_file = '../core_datatypes.py'
    written_class_names: set[str] = {
        Array.__name__, Bool.__name__, Byte.__name__,
        UnsignedByte.__name__, Short.__name__, UnsignedShort.__name__,
        Int.__name__, UnsignedInt.__name__, LongLong.__name__,
        UnsignedLongLong.__name__, Float.__name__, Double.__name__,
        Func.__name__, Void.__name__, Pointer.__name__, DataType.__name__
    }
    core_datatypes_file_imports = (
        f'from pystrector.base_datatypes import ('
        f'{", ".join(written_class_names)}'
        f')'
    )

    with open(core_datatypes_file, 'w') as file:
        file.write(core_datatypes_file_imports)
        for prototype in CoreDataTypePrototype.registered_prototypes:
            file.write(
                f'\n\nclass {prototype.name}(DataType,'
                f' is_union={prototype.is_union}):\n'
            )
            for field in prototype.fields:
                code = field.get_python_representation(written_class_names)
                file.write(
                    f'    {code}\n'
                )

            written_class_names.add(prototype.name)


if __name__ == '__main__':
    main()
