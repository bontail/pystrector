import io
import re
from typing import Callable
from pystrector.code_generator.stream_handler import \
    IntervalSequenceFilter, SequenceEqualsFilter, StreamHandler

# attributes that change the layout rather than just annotating it. They
# are dropped along with every other __attribute__, and dropping them is
# not harmless: the generator would lay the struct out by the default
# ABI rules and be silently wrong about every offset behind it
LAYOUT_ATTRIBUTES: tuple[bytes, ...] = (
    b'packed', b'aligned', b'mode', b'vector_size',
)


class LayoutAttributeError(ValueError):
    """A dropped __attribute__ would have changed a struct layout."""


def find_attribute_bodies(data: bytes) -> list[bytes]:
    """Return the "(...)" of every __attribute__ in data."""
    bodies = []
    marker = b'__attribute__'
    index = data.find(marker)
    while index != -1:
        cursor = index + len(marker)
        while cursor < len(data) and data[cursor:cursor + 1].isspace():
            cursor += 1

        if data[cursor:cursor + 1] == b'(':
            depth, start = 0, cursor
            while cursor < len(data):
                char = data[cursor:cursor + 1]
                if char == b'(':
                    depth += 1
                elif char == b')':
                    depth -= 1
                    if depth == 0:
                        cursor += 1
                        break
                cursor += 1
            bodies.append(data[start:cursor])

        index = data.find(marker, cursor)

    return bodies


def find_struct_declarations(data: bytes) -> list[bytes]:
    """Return the text of every "struct/union { ... } ...;" in data.

    Only these spans matter: an attribute anywhere else - on a function,
    a prototype, a local variable - leaves struct layouts alone, and the
    system headers are full of those.
    """
    declarations = []
    for match in re.finditer(rb'\b(?:struct|union)\b', data):
        keyword_at = match.start()

        # a tag and attributes may sit between the keyword and the body,
        # but nothing else does: a ";" before the "{" means this is a
        # reference to a struct rather than a definition of one
        declaration_end = data.find(b';', keyword_at)
        if declaration_end == -1:
            declaration_end = len(data)

        body_at = data.find(b'{', keyword_at, declaration_end)
        if body_at == -1:
            continue

        depth, index = 0, body_at
        while index < len(data):
            char = data[index:index + 1]
            if char == b'{':
                depth += 1
            elif char == b'}':
                depth -= 1
                if depth == 0:
                    break
            index += 1

        # everything up to the ";" as well: an attribute on the whole
        # struct is written after the closing brace
        end = data.find(b';', index)
        end = len(data) if end == -1 else end
        declarations.append(data[keyword_at:end])

    return declarations


def check_layout_attributes(data: bytes) -> None:
    """Raise when a struct carries an attribute that moves fields around.

    CPython does not use one today, so the filters below can drop every
    __attribute__ unread. If that ever changes, the generated offsets
    have to stop being trusted loudly rather than quietly.
    """
    for declaration in find_struct_declarations(data):
        for body in find_attribute_bodies(declaration):
            for attribute in LAYOUT_ATTRIBUTES:
                if attribute not in body:
                    continue

                head = declaration[:declaration.index(b'{')].decode(
                    errors='replace'
                ).strip()
                raise LayoutAttributeError(
                    f"'{head}' carries"
                    f" __attribute__{body.decode(errors='replace')}, which"
                    f" changes how it is laid out. The generator drops"
                    f" attributes and would produce wrong offsets, so it"
                    f" stops instead: teach DataTypeMeta.build_layout"
                    f" about the attribute, or keep the struct out of the"
                    f" parsed headers"
                )


def get_bracket_counter_func() -> Callable[[int], bool]:
    opened_bracket = 0

    def check_correct_amount(char: int) -> bool:
        nonlocal opened_bracket
        if char == ord('('):
            opened_bracket += 1
        elif char == ord(')'):
            opened_bracket -= 1
        return opened_bracket == 0

    return check_correct_amount


def prepare_c_file(filename: str, new_filename: str) -> None:
    # stubs for compiler built-in types pycparser has no grammar for.
    # None of them appear in a CPython struct, so the widths don't
    # matter; they only have to parse
    start_code = (b"typedef void __builtin_va_list;\n"
                  b"typedef long long __uint128_t;\n"
                  b"typedef float _Float16;\n")

    # first pass: drop the preprocessor line markers. It has to run on
    # its own, because the paths inside them would otherwise trip the
    # filters below - a marker naming "_static_assert.h" used to open
    # the static_assert filter, which then ate every declaration up to
    # the next balanced ')'
    comment_handler = StreamHandler()
    comment_handler.set_filters(IntervalSequenceFilter(b'#', b'\n'))

    # second pass: drop the compiler extensions pycparser can't read
    code_handler = StreamHandler()
    code_handler.set_filters(
        IntervalSequenceFilter(
            b'__attribute__', b')', get_bracket_counter_func(),
            word_boundary=True,
        ),
        IntervalSequenceFilter(
            b'__asm', b')', get_bracket_counter_func(), word_boundary=True,
        ),
        IntervalSequenceFilter(
            b'static_assert', b')', get_bracket_counter_func(),
            word_boundary=True,
        ),
        SequenceEqualsFilter(b'_Nonnull', word_boundary=True),
        SequenceEqualsFilter(b'__inline', word_boundary=True),
        SequenceEqualsFilter(b'__extension__', word_boundary=True),
    )

    without_markers = io.BytesIO()
    with open(filename, mode='rb') as old_file:
        comment_handler.handle_file(old_file, without_markers)

    check_layout_attributes(without_markers.getvalue())

    without_markers.seek(0)
    with open(new_filename, mode='wb') as new_file:
        new_file.write(start_code)
        code_handler.handle_file(without_markers, new_file)
