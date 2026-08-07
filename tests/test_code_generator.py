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

    def test_word_boundary_stops_a_match_inside_an_identifier(self):
        source = b'int _static_assert(x); int y;'
        self.assertEqual(
            run_handler(
                source,
                IntervalSequenceFilter(
                    b'static_assert', b')', word_boundary=True,
                ),
            ),
            source,
        )

    def test_without_word_boundary_the_match_still_happens(self):
        source = b'int _static_assert(x); int y;'
        self.assertEqual(
            run_handler(
                source, IntervalSequenceFilter(b'static_assert', b')'),
            ),
            b'int _; int y;',
        )

    def test_sequence_equals_filter_honours_word_boundary(self):
        source = b'int my__inline_thing;'
        self.assertEqual(
            run_handler(
                source, SequenceEqualsFilter(b'__inline', word_boundary=True),
            ),
            source,
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


    def test_a_line_marker_path_does_not_swallow_the_next_declaration(self):
        # a "# 1 ".../_static_assert.h"" marker used to open the
        # static_assert filter, which then ate every declaration up to
        # the next balanced ')'
        source = (
            b'# 1 "/usr/include/sys/_types/_static_assert.h" 1 3 4\n'
            b'typedef unsigned long clock_t;\n'
            b'struct point { int x; };\n'
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

        self.assertIn(b'typedef unsigned long clock_t;', prepared)
        self.assertIn(b'struct point', prepared)


class TestExpressions(unittest.TestCase):

    def test_an_unknown_constant_is_an_error(self):
        """Defaulting it to 0 would silently shift struct fields."""
        from pycparser.c_ast import ID
        from pystrector.code_generator.generate_code import (
            get_expr_from_binary_op,
        )

        with self.assertRaises(ValueError):
            get_expr_from_binary_op(ID(name='NOT_A_KNOWN_CONSTANT'))

    def test_enum_constants_are_resolved(self):
        from pycparser import c_parser
        from pystrector.code_generator import generate_code

        ast = c_parser.CParser().parse(
            'enum sizes { FIRST = 3, SECOND, THIRD = 10 };'
            'struct holder { char buffer[SECOND]; };'
        )
        for node in ast:
            generate_code.handle_node(node)

        self.assertEqual(generate_code.ENUM_CONSTANTS['FIRST'], 3)
        self.assertEqual(generate_code.ENUM_CONSTANTS['SECOND'], 4)
        self.assertEqual(generate_code.ENUM_CONSTANTS['THIRD'], 10)


class TestGeneratedCodeProvenance(unittest.TestCase):

    def test_generated_file_records_its_platform(self):
        from pystrector import core_datatypes
        self.assertEqual(len(core_datatypes.GENERATED_ON), 2)
        self.assertEqual(core_datatypes.GENERATED_FOR_CPYTHON, (3, 12))


if __name__ == '__main__':
    unittest.main()
