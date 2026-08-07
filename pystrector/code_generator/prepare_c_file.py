import io
from typing import Callable
from pystrector.code_generator.stream_handler import \
    IntervalSequenceFilter, SequenceEqualsFilter, StreamHandler


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

    without_markers.seek(0)
    with open(new_filename, mode='wb') as new_file:
        new_file.write(start_code)
        code_handler.handle_file(without_markers, new_file)
