import io
import os
import tempfile
import unittest

from pystrector.code_generator.prepare_c_file import prepare_c_file
from pystrector.code_generator.stream_handler import (
    IntervalSequenceFilter, SequenceEqualsFilter, StreamHandler,
)


def run_handler(source: bytes, *filters) -> bytes:
    handler = StreamHandler()
    handler.set_filters(*filters)
    output = io.BytesIO()
    handler.handle_file(io.BytesIO(source), output)

    return output.getvalue()


class TestStreamHandler(unittest.TestCase):

    def test_interval_filter_drops_preprocessor_lines(self):
        source = b'#define A 1\nint a;\n#include <x.h>\nint b;\n'
        self.assertEqual(
            run_handler(source, IntervalSequenceFilter(b'#', b'\n')),
            b'int a;\nint b;\n',
        )

    def test_interval_filter_drops_block_comments(self):
        source = b'int a; /* a * b / c */ int b;'
        self.assertEqual(
            run_handler(source, IntervalSequenceFilter(b'/*', b'*/')),
            b'int a;  int b;',
        )

    def test_sequence_equals_filter_drops_exact_matches(self):
        source = b'int __extension__ a;'
        self.assertEqual(
            run_handler(source, SequenceEqualsFilter(b'__extension__')),
            b'int  a;',
        )

    def test_filters_compose(self):
        source = b'#line 1\n__extension__ int a;\n'
        self.assertEqual(
            run_handler(
                source,
                IntervalSequenceFilter(b'#', b'\n'),
                SequenceEqualsFilter(b'__extension__'),
            ),
            b' int a;\n',
        )

    def test_multibyte_start_is_not_matched_across_a_false_start(self):
        source = b'a //* b */ c'
        self.assertEqual(
            run_handler(source, IntervalSequenceFilter(b'/*', b'*/')),
            b'a / c',
        )

    def test_interval_filter_honours_end_condition(self):
        from pystrector.code_generator.prepare_c_file import (
            get_bracket_counter_func,
        )
        source = b'int x __attribute__((aligned(4))); int y;'
        self.assertEqual(
            run_handler(
                source,
                IntervalSequenceFilter(
                    b'__attribute__', b')', get_bracket_counter_func()
                ),
            ),
            b'int x ; int y;',
        )

    def test_source_without_matches_is_unchanged(self):
        source = b'struct s { int a; };'
        self.assertEqual(
            run_handler(source, IntervalSequenceFilter(b'#', b'\n')),
            source,
        )


class TestPrepareCFile(unittest.TestCase):

    def test_prepared_file_is_parsable_c(self):
        source = (
            b'# 1 "some.h"\n'
            b'__extension__ struct point {\n'
            b'    int x __attribute__((aligned(4)));\n'
            b'    int y;\n'
            b'};\n'
        )
        directory = tempfile.mkdtemp()
        source_path = os.path.join(directory, 'source.c')
        prepared_path = os.path.join(directory, 'prepared.c')
        with open(source_path, 'wb') as file:
            file.write(source)

        try:
            prepare_c_file(source_path, prepared_path)
            with open(prepared_path, 'rb') as file:
                prepared = file.read()
        finally:
            for path in (source_path, prepared_path):
                if os.path.exists(path):
                    os.remove(path)
            os.rmdir(directory)

        self.assertNotIn(b'__attribute__', prepared)
        self.assertNotIn(b'__extension__', prepared)
        self.assertNotIn(b'# 1 "some.h"', prepared)
        self.assertIn(b'struct point', prepared)
        # the stub typedefs the generator relies on
        self.assertIn(b'typedef void _builtin_va_list;'.replace(
            b'_builtin', b'__builtin'), prepared)


class TestGeneratedCodeProvenance(unittest.TestCase):

    def test_generated_file_records_its_platform(self):
        from pystrector import core_datatypes
        self.assertEqual(len(core_datatypes.GENERATED_ON), 2)
        self.assertEqual(core_datatypes.GENERATED_FOR_CPYTHON, (3, 12))


if __name__ == '__main__':
    unittest.main()
