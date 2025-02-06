from typing import Callable
from stream_handler import IntervalSequenceFilter, SequenceEqualsFilter, \
    StreamHandler


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
    start_code = (b"typedef void __builtin_va_list;\n"
                  b"typedef long long __uint128_t;\n")

    comment_filter = IntervalSequenceFilter(b'#', b'\n')

    attribute_filter = IntervalSequenceFilter(
        b'__attribute__', b')', get_bracket_counter_func()
    )

    asm_filter = IntervalSequenceFilter(
        b'__asm', b')', get_bracket_counter_func()
    )

    nonnull_filter = SequenceEqualsFilter(b'_Nonnull')
    inline_filter = SequenceEqualsFilter(b'__inline')
    extension_filter = SequenceEqualsFilter(b'__extension__')

    handler = StreamHandler()
    handler.set_filters(
        comment_filter,
        attribute_filter,
        asm_filter,
        nonnull_filter,
        inline_filter,
        extension_filter,
    )

    with open(filename, mode='rb') as old_file:
        with open(new_filename, mode='wb') as new_file:
            new_file.write(start_code)
            handler.handle_file(old_file, new_file)
