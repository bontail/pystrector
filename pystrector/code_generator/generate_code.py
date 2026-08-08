from __future__ import annotations
import argparse
import os
import platform
import sys
from typing import ClassVar, assert_never
from pycparser import parse_file  # noqa
from dataclasses import dataclass
from pycparser.c_ast import Decl, Typedef, PtrDecl, Struct, \
    ArrayDecl, TypeDecl, IdentifierType, Union, FuncDecl, Enum, Node, \
    BinaryOp, Constant, UnaryOp, TernaryOp, Typename, ID
from pystrector.base_datatypes import DataTypeMeta, Void, Int, Func, Array, \
    Pointer, UnsignedInt, LongLong, UnsignedLongLong, Byte, Bool, \
    UnsignedByte, Short, UnsignedShort, Float, Double, DataType, BitField, \
    get_anonymous_var_name
from pystrector.code_generator.prepare_c_file import prepare_c_file

ANONYMOUS_STRUCT_ID = 1

SIZES = {
    "__int32_t": "4",
    "double": "8",
}

# enumerator name -> value, filled in as enums are parsed. Array bounds
# in the CPython headers are often enum constants (FUNC_MAX_WATCHERS,
# PY_MONITORING_TOOL_IDS, ...), and resolving them to 0 would silently
# shift every field that follows the array.
ENUM_CONSTANTS: dict[str, int] = {}


def mangle_c_name(name: str) -> str:
    """Make a C identifier usable as a Python name.

    Only names Python would mangle itself are touched: an identifier
    with two leading underscores and fewer than two trailing ones turns
    into "_ClassName__name" when it is assigned inside a class body,
    which hides it behind a name nobody can guess. Dropping the extra
    underscores keeps it reachable.

    Everything else is kept verbatim. Collapsing every "__" - which is
    what this used to do - is not injective: two distinct identifiers of
    _Py_global_strings.identifiers both became "_py_loop", so one of the
    two fields was silently dropped from the class body and every field
    behind it moved. Callers now raise on a collision instead.
    """
    if name.startswith("__") and not name.endswith("__"):
        return "_" + name.lstrip("_")

    return name


def register_enum(node: Enum) -> None:
    """Record the value of every enumerator of node."""
    if node.values is None:
        return

    next_value = 0
    for enumerator in node.values.enumerators:
        if enumerator.value is not None:
            next_value = int(eval(get_expr_from_binary_op(enumerator.value)))
        ENUM_CONSTANTS[enumerator.name] = next_value
        next_value += 1


def get_anonymous_struct_name() -> str:
    global ANONYMOUS_STRUCT_ID
    ANONYMOUS_STRUCT_ID += 1

    return f"anonymous_{ANONYMOUS_STRUCT_ID - 1}"


def get_expr_from_binary_op(node: Node) -> str:
    """Return str expression which parsed from node."""
    if isinstance(node, Constant):
        return node.value

    elif isinstance(node, UnaryOp):
        if node.op == 'sizeof':
            exp = get_expr_from_binary_op(node.expr)
            size = SIZES.get(exp)
            if size is None and exp.startswith("\""):
                # sizeof a string literal counts the trailing NUL, so it
                # is one more than the length. CPython declares the
                # payload of every interned string as
                # uint8_t _data[sizeof("name")]; dropping the NUL made
                # those structs a byte short
                size = f"{len(exp) - 2 + 1}"
            if size is None:
                raise ValueError("Invalid code")
            return f'({size})'
        return f'({node.op + get_expr_from_binary_op(node.expr)})'

    elif isinstance(node, BinaryOp):
        op = "//" if node.op == "/" else node.op
        return f'({get_expr_from_binary_op(node.left) +
                   op +
                   get_expr_from_binary_op(node.right)})'

    elif isinstance(node, TernaryOp):
        cond = eval(get_expr_from_binary_op(node.cond))
        if cond:
            return get_expr_from_binary_op(node.iftrue)
        else:
            return get_expr_from_binary_op(node.iffalse)

    elif node is None:
        return '0'

    elif isinstance(node, Typename):
        return get_type(node.type, node)

    elif isinstance(node, ID):
        value = ENUM_CONSTANTS.get(node.name)
        if value is None:
            raise ValueError(
                f"unknown constant {node.name!r} in an expression; it must"
                f" be resolved, guessing a value would shift struct fields"
            )
        return f'({value})'

    else:
        assert_never(node)


def get_dimensions(node: ArrayDecl) -> int:
    if not isinstance(node, ArrayDecl):
        assert_never(node)

    # eval is acceptable here: the expression comes from CPython headers
    # parsed at code-generation time, not from user input
    return int(eval(get_expr_from_binary_op(node.dim)))


def get_type(node: Node, parent_node: Node, type_prefix: str = "") -> str:
    """Get type and create CoreDataTypePrototype if it is Union or Struct."""
    if isinstance(node, IdentifierType):
        return ' '.join(node.names)

    elif isinstance(node, PtrDecl):
        return f'*{get_type(node.type, node, type_prefix)}'

    elif isinstance(node, ArrayDecl):
        return f'[{get_dimensions(node)}]{get_type(node.type, node, type_prefix)}'

    elif isinstance(node, TypeDecl):
        return get_type(node.type, node, type_prefix)

    elif isinstance(node, Struct) or isinstance(node, Union):
        prototype = CoreDataTypePrototype.from_node(node, parent_node, type_prefix)
        if prototype.fields is None:
            # struct is useless
            return Void.__name__

        return prototype.name

    elif isinstance(node, Enum):
        register_enum(node)
        return Int.__name__

    elif isinstance(node, FuncDecl):
        return Func.__name__

    else:
        assert_never(node)


def handle_node(node: Node) -> None:
    """Recursively go through the nodes."""
    if isinstance(node, Decl):
        get_type(node.type, node)
        return None

    elif isinstance(node, Typedef):
        typedef = node.name
        datatype = get_type(node.type, node)

        if typedef == datatype:
            # typedef equals datatype when a typedef is created on a structure
            # without a name so no need to create typedef
            return None

        DataTypeMeta.create_typedef(
            typedef,
            datatype,
        )
        return None

    assert_never(node)


@dataclass
class CoreDataTypePrototypeField:
    """Class representing a struct field.

    Attributes:
        name (str): Name of the field. Example: 'ob_refcnt'
        type (type): Type of the field. Example: '*long'
        bit_width (int | None): Width of the bit field, None when the
            field is an ordinary one. Example: 'unsigned int kind:3' -> 3
    """
    name: str
    type: str
    bit_width: int | None = None

    @classmethod
    def from_node(cls, node: Struct | Union, type_prefix: str) -> \
            list[CoreDataTypePrototypeField]:
        """Create CoreDataTypePrototypeField from node."""
        if node.decls is None:
            return []

        fields: list[CoreDataTypePrototypeField] = []
        seen: dict[str, str] = {}
        for decl in node.decls:
            raw_name = decl.name if decl.name else get_anonymous_var_name()
            name = mangle_c_name(raw_name)
            if name in seen:
                # a duplicate key in the class body would drop one of the
                # two fields and shift every offset behind it
                raise ValueError(
                    f"fields {seen[name]!r} and {raw_name!r} of"
                    f" {node.name or type_prefix} both map to {name!r}"
                )
            seen[name] = raw_name

            # the type is kept as C spells it - "[16]__uint32_t" - and
            # only its leaf identifier is renamed, in parse_field_type
            datatype = get_type(decl.type, decl, type_prefix)
            bit_width = None
            if decl.bitsize is not None:
                bit_width = int(eval(get_expr_from_binary_op(decl.bitsize)))
            fields.append(CoreDataTypePrototypeField(
                name=name,
                type=datatype,
                bit_width=bit_width,
            ))

        return fields

    @classmethod
    def parse_field_type(cls, field_type: str, written_class_names: set[str]) \
            -> str:
        """Parse field type and return str for Python code."""
        if field_type.startswith("*"):
            return (
                f"{Pointer.__name__}(datatype={cls.parse_field_type(
                    field_type[1:],
                    written_class_names,
                )})"
            )

        elif field_type.startswith("["):
            end_arr = field_type.index(']')
            # the element type is always an instance expression, so
            # nesting works: "[8][17]*_object" becomes an Array of
            # Arrays of Pointers
            arr_type = cls.parse_field_type(
                field_type[end_arr + 1:],
                written_class_names,
            )

            return (f"{Array.__name__}(datatype={arr_type},"
                    f" length={field_type[1:end_arr]})")

        if DataTypeMeta.is_typedef(field_type):
            field_type = cls.parse_field_type(
                DataTypeMeta.get_typedef_class(field_type),
                written_class_names,
            )
        else:
            # struct names were already renamed when the prototype was
            # created; this catches the plain identifiers
            field_type = mangle_c_name(field_type)
            if field_type in written_class_names:
                field_type += '()'
            else:
                field_type = f'"{field_type}"'

        return field_type

    def get_python_representation(self, written_class_names: set[str]) -> str:
        datatype = self.parse_field_type(self.type, written_class_names)
        if self.bit_width is not None:
            return (f"{self.name} = {BitField.__name__}("
                    f"datatype={datatype}, bit_width={self.bit_width})")

        return f"{self.name} = {datatype}"


@dataclass
class CoreDataTypePrototype:
    """Class representing a struct."""
    registered_prototypes: ClassVar[list[CoreDataTypePrototype]] = []
    prototypes_by_name: ClassVar[dict[str, CoreDataTypePrototype]] = {}
    name: str
    fields: list[CoreDataTypePrototypeField]
    is_union: bool = False

    @classmethod
    def from_node(cls, node: Struct | Union | TypeDecl, parent_node: Node,
                  name_prefix: str = "") -> CoreDataTypePrototype:
        """Create CoreDataTypePrototype from node and register it."""
        name = node.name
        if name is None:
            if isinstance(parent_node, TypeDecl):
                name = name_prefix + parent_node.declname
            else:
                name = get_anonymous_struct_name()
        name = mangle_c_name(name)

        new_prototype = CoreDataTypePrototype(
            name=name,
            fields=CoreDataTypePrototypeField.from_node(node, name + "_"),
            is_union=isinstance(node, Union),
        )

        if not new_prototype.fields:
            return new_prototype

        known = cls.prototypes_by_name.get(name)
        if known is not None:
            if known != new_prototype:
                # the later class would win in the generated module and
                # describe both structs, one of them wrongly
                raise ValueError(
                    f"two different structs are both generated as"
                    f" {name!r}"
                )

            return known

        cls.prototypes_by_name[name] = new_prototype
        cls.registered_prototypes.append(new_prototype)

        return new_prototype


def embedded_dependency(field_type: str) -> str:
    """Return the name of the type a field stores inside itself.

    A pointer field only needs its target when it is dereferenced, so it
    creates no dependency; an embedded struct - or an array of them -
    has to be declared first.
    """
    while True:
        while field_type.startswith('['):
            field_type = field_type[field_type.index(']') + 1:]

        if field_type.startswith('*'):
            return Pointer.__name__

        # a typedef can resolve to a pointer of its own, as every
        # "typedef PyObject *(*binaryfunc)(...)" in CPython does
        resolved = DataTypeMeta.get_typedef_class(field_type)
        if resolved == field_type:
            return mangle_c_name(field_type)

        field_type = resolved


def order_by_dependency(prototypes: list[CoreDataTypePrototype]) \
        -> list[CoreDataTypePrototype]:
    """Sort prototypes so that an embedded struct precedes its user.

    The preprocessed headers are concatenated rather than compiled, so
    a struct can be used before the line that defines it. A field whose
    type has not been declared yet is written as a plain string, which
    is not a descriptor and therefore silently drops out of the layout:
    pyruntimestate used to lose 22 of its fields that way.
    """
    ordered: list[CoreDataTypePrototype] = []
    done: set[str] = set()
    being_visited: set[str] = set()

    def visit(prototype: CoreDataTypePrototype) -> None:
        if prototype.name in done:
            return
        if prototype.name in being_visited:
            raise ValueError(f"{prototype.name} contains itself")

        being_visited.add(prototype.name)
        for field in prototype.fields:
            dependency = CoreDataTypePrototype.prototypes_by_name.get(
                embedded_dependency(field.type)
            )
            if dependency is not None:
                visit(dependency)

        being_visited.discard(prototype.name)
        done.add(prototype.name)
        ordered.append(prototype)

    for prototype in prototypes:
        visit(prototype)

    return ordered


def main(source_code_filename: str, python_code_filename: str):
    if not source_code_filename.endswith(".c"):
        raise ValueError("Source code file must be end with .c")

    if not python_code_filename.endswith(".py"):
        raise ValueError("Python code file must be end with .py")

    source_temp_filename = 'prepared_python_structures.c'
    prepare_c_file(source_code_filename, source_temp_filename)

    ast = parse_file(source_temp_filename)
    os.remove(source_temp_filename)

    for node in ast:
        if not isinstance(node, Typedef) and not isinstance(node, Decl):
            continue

        handle_node(node)

    # now we have all prototypes in CoreDataTypePrototype.registered_prototypes
    written_class_names: set[str] = {
        Array.__name__, Bool.__name__, Byte.__name__,
        UnsignedByte.__name__, Short.__name__, UnsignedShort.__name__,
        Int.__name__, UnsignedInt.__name__, LongLong.__name__,
        UnsignedLongLong.__name__, Float.__name__, Double.__name__,
        Func.__name__, Void.__name__, Pointer.__name__, DataType.__name__,
        BitField.__name__,
    }
    core_datatypes_file_header = (
        f'# Generated by pystrector/code_generator. Do not edit by hand.\n'
        f'#\n'
        f'# These layouts are specific to the platform and CPython version\n'
        f'# they were produced on; pystrector._platform checks them at\n'
        f'# import time.\n'
        f'GENERATED_ON = {(sys.platform, platform.machine())!r}\n'
        f'GENERATED_FOR_CPYTHON = {sys.version_info[:2]!r}\n'
        f'GENERATED_FOR_CPYTHON_FULL = {sys.version_info[:3]!r}\n'
        f'\n'
        f'from pystrector.base_datatypes import ('
        f'{", ".join(sorted(written_class_names))}'
        f')'
    )

    prototypes = order_by_dependency(
        CoreDataTypePrototype.registered_prototypes
    )

    with open(python_code_filename, 'w') as file:
        file.write(core_datatypes_file_header)
        for prototype in prototypes:
            file.write(
                f'\n\nclass {prototype.name}(DataType,'
                f' is_union={prototype.is_union}):\n'
            )
            for field in prototype.fields:
                dependency = embedded_dependency(field.type)
                if dependency not in written_class_names:
                    # it would be written as a string, which is not a
                    # descriptor: the field would vanish from the layout
                    raise ValueError(
                        f"{prototype.name}.{field.name} embeds"
                        f" {field.type!r}, which is not a known datatype"
                    )

                code = field.get_python_representation(written_class_names)
                file.write(
                    f'    {code}\n'
                )

            written_class_names.add(prototype.name)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Generate Python code.')
    parser.add_argument(
        'source_code_filename', type=str
    )
    parser.add_argument(
        'python_code_filename', type=str
    )
    args = parser.parse_args()

    main(args.source_code_filename, args.python_code_filename)
