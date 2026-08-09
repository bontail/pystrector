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
            b'    int x __attribute__((deprecated("use y")));\n'
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


class TestExpressionsSizeof(unittest.TestCase):

    def test_sizeof_a_string_literal_counts_the_trailing_nul(self):
        """CPython sizes interned strings as uint8_t _data[sizeof("x")]."""
        from pycparser import c_parser

        ast = c_parser.CParser().parse(
            'struct holder { char buffer[sizeof("abc")]; };'
        )
        prototype = parse_one_struct(ast)

        self.assertEqual(prototype.fields[0].type, '[4]char')


def parse_one_struct(ast):
    """Run the generator over ast and return the single prototype."""
    from pystrector.code_generator.generate_code import (
        CoreDataTypePrototype, handle_node,
    )
    for node in ast:
        handle_node(node)

    return CoreDataTypePrototype.registered_prototypes[-1]


class TestNameMangling(unittest.TestCase):

    def test_only_names_python_would_mangle_are_renamed(self):
        from pystrector.code_generator.generate_code import mangle_c_name

        # Python rewrites "__sig" to "_Owner__sig" inside a class body
        self.assertEqual(mangle_c_name('__sig'), '_sig')
        self.assertEqual(mangle_c_name('___sig'), '_sig')
        # dunders and single underscores are left alone: collapsing them
        # is what used to merge two distinct fields into one
        self.assertEqual(mangle_c_name('__loop__'), '__loop__')
        self.assertEqual(mangle_c_name('_py__loop_'), '_py__loop_')
        self.assertEqual(mangle_c_name('_py___loop__'), '_py___loop__')
        self.assertEqual(mangle_c_name('ob_refcnt'), 'ob_refcnt')

    def test_two_fields_that_would_share_a_name_are_an_error(self):
        """One of them would be dropped, shifting every field behind it."""
        from pycparser import c_parser

        ast = c_parser.CParser().parse(
            'struct clash { int __x; int _x; };'
        )
        with self.assertRaises(ValueError):
            parse_one_struct(ast)

    def test_two_structs_that_would_share_a_name_are_an_error(self):
        from pycparser import c_parser
        from pystrector.code_generator.generate_code import (
            CoreDataTypePrototype,
        )

        CoreDataTypePrototype.registered_prototypes.clear()
        CoreDataTypePrototype.prototypes_by_name.clear()
        ast = c_parser.CParser().parse(
            'struct __twin { int a; };'
            'struct _twin { int a; int b; };'
        )
        with self.assertRaises(ValueError):
            parse_one_struct(ast)


class TestDependencyOrder(unittest.TestCase):

    def test_an_embedded_struct_is_written_before_its_user(self):
        from pycparser import c_parser
        from pystrector.code_generator.generate_code import (
            CoreDataTypePrototype, handle_node, order_by_dependency,
        )

        CoreDataTypePrototype.registered_prototypes.clear()
        CoreDataTypePrototype.prototypes_by_name.clear()
        # "outer" is declared first and embeds "inner", which the
        # concatenated headers only define afterwards
        ast = c_parser.CParser().parse(
            'struct inner;'
            'struct outer { struct inner *link; struct inner inner; };'
            'struct inner { int a; };'
        )
        for node in ast:
            handle_node(node)

        ordered = [
            prototype.name for prototype in order_by_dependency(
                CoreDataTypePrototype.registered_prototypes
            )
        ]

        self.assertLess(ordered.index('inner'), ordered.index('outer'))

    def test_a_pointer_does_not_order_anything(self):
        """It is resolved when it is dereferenced, not when declared."""
        from pystrector.code_generator.generate_code import (
            embedded_dependency,
        )

        self.assertEqual(embedded_dependency('*_object'), 'Pointer')
        self.assertEqual(embedded_dependency('[8]*_object'), 'Pointer')
        self.assertEqual(embedded_dependency('[8]_object'), '_object')
        self.assertEqual(embedded_dependency('_object'), '_object')


class TestCExpressionSemantics(unittest.TestCase):
    """Python spells some C operators the same way and means another."""

    def evaluate(self, expression: str) -> int:
        from pycparser import c_parser
        from pystrector.code_generator.generate_code import (
            eval_c_expr, get_expr_from_binary_op,
        )
        ast = c_parser.CParser().parse(
            f'struct holder {{ char buffer[{expression}]; }};'
        )
        dim = ast.ext[0].type.decls[0].type.dim

        return eval_c_expr(get_expr_from_binary_op(dim))

    def test_division_truncates_toward_zero(self):
        """C rounds -7/2 to -3; Python's "//" rounds it to -4."""
        self.assertEqual(self.evaluate('-7 / 2'), -3)
        self.assertEqual(self.evaluate('7 / 2'), 3)

    def test_remainder_follows_the_division(self):
        self.assertEqual(self.evaluate('-7 % 2'), -1)
        self.assertEqual(self.evaluate('7 % 2'), 1)

    def test_logical_operators_yield_an_int(self):
        """"&&" is not Python syntax, and "and" returns an operand."""
        self.assertEqual(self.evaluate('2 && 3'), 1)
        self.assertEqual(self.evaluate('0 || 5'), 1)
        self.assertEqual(self.evaluate('!0'), 1)
        self.assertEqual(self.evaluate('!7'), 0)

    def test_an_untranslatable_operator_is_a_clear_error(self):
        from pycparser.c_ast import BinaryOp, Constant
        from pystrector.code_generator.generate_code import (
            UnsupportedCConstruct, get_expr_from_binary_op,
        )

        one = Constant(type='int', value='1')
        with self.assertRaises(UnsupportedCConstruct):
            get_expr_from_binary_op(BinaryOp(op=',', left=one, right=one))

    def test_an_unknown_sizeof_names_the_type(self):
        from pycparser import c_parser
        from pystrector.code_generator.generate_code import (
            UnsupportedCConstruct,
        )

        ast = c_parser.CParser().parse(
            'struct holder { char buffer[sizeof(struct other)]; };'
        )
        with self.assertRaises(UnsupportedCConstruct) as caught:
            parse_one_struct(ast)

        self.assertIn('sizeof', str(caught.exception))


class TestLayoutAttributes(unittest.TestCase):
    """__attribute__ is dropped unread, so layout ones must be refused."""

    def check(self, source: bytes) -> None:
        from pystrector.code_generator.prepare_c_file import (
            check_layout_attributes,
        )
        check_layout_attributes(source)

    def assert_refused(self, source: bytes) -> None:
        from pystrector.code_generator.prepare_c_file import (
            LayoutAttributeError,
        )
        with self.assertRaises(LayoutAttributeError):
            self.check(source)

    def test_a_packed_struct_is_refused(self):
        self.assert_refused(
            b'struct __attribute__((packed)) foo { int a; char b; };'
        )

    def test_an_alignment_after_the_body_is_refused(self):
        self.assert_refused(
            b'struct foo { int a; } __attribute__((__aligned__(16)));'
        )

    def test_a_nested_struct_is_refused_too(self):
        self.assert_refused(
            b'struct foo { struct { int x; }'
            b' __attribute__((packed)) inner; };'
        )

    def test_an_attribute_outside_a_struct_is_allowed(self):
        """The system headers are full of those, and none moves a field."""
        self.check(b'void f(void) __attribute__((aligned(8)));')
        self.check(b'extern int a __attribute__((mode(SI)));')

    def test_a_field_named_like_an_attribute_is_allowed(self):
        self.check(b'struct foo { int mode; int packed; int aligned; };')

    def test_a_harmless_attribute_is_allowed(self):
        self.check(
            b'struct foo { int a; } __attribute__((deprecated("x")));'
        )

    def test_the_bundled_headers_of_this_run_are_clean(self):
        """prepare_c_file() runs the check; it must not fire on real C."""
        source = (b'#line 1 "x.h"\n'
                  b'struct _object { long ob_refcnt; };\n')
        with tempfile.TemporaryDirectory() as directory:
            in_path = os.path.join(directory, 'in.c')
            out_path = os.path.join(directory, 'out.c')
            with open(in_path, 'wb') as file:
                file.write(source)
            prepare_c_file(in_path, out_path)

            self.assertTrue(os.path.exists(out_path))


class TestGeneratedCodeProvenance(unittest.TestCase):

    def test_generated_file_records_its_platform(self):
        from pystrector import core_datatypes
        self.assertEqual(len(core_datatypes.GENERATED_ON), 2)
        self.assertEqual(core_datatypes.GENERATED_FOR_CPYTHON, (3, 12))

    def test_generated_file_records_its_patch_release(self):
        """Without it _platform.check_micro_version() is dead code."""
        from pystrector import core_datatypes
        self.assertEqual(len(core_datatypes.GENERATED_FOR_CPYTHON_FULL), 3)
        self.assertEqual(
            core_datatypes.GENERATED_FOR_CPYTHON_FULL[:2],
            core_datatypes.GENERATED_FOR_CPYTHON,
        )


if __name__ == '__main__':
    unittest.main()
