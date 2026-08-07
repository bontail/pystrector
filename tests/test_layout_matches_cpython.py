"""Check the generated layouts against the interpreter running them.

These sizes are not arbitrary constants: every one of them is derived
from something CPython itself reports, so the test keeps working when
the file is regenerated for another patch release.
"""
import sys
import unittest

from pystrector import Binder
from pystrector.base_datatypes import BitField
from pystrector.core_datatypes import (
    PyASCIIObject, PyComplexObject, PyDictObject, PyFloatObject,
    PyListObject, PySetObject, _object,
)

# every GC tracked object is preceded by a PyGC_Head of two pointers
GC_HEAD_SIZE = 16


class TestObjectHeader(unittest.TestCase):

    def test_object_header_is_a_refcount_and_a_type_pointer(self):
        self.assertEqual(_object.size, 16)


class TestSizesAgainstGetsizeof(unittest.TestCase):
    """sys.getsizeof is CPython's own answer, so it is the reference."""

    def test_untracked_objects_are_exactly_their_struct(self):
        self.assertEqual(PyFloatObject.size, sys.getsizeof(1.0))
        self.assertEqual(PyComplexObject.size, sys.getsizeof(1j))

    def test_gc_tracked_objects_add_a_gc_head(self):
        self.assertEqual(
            PyListObject.size + GC_HEAD_SIZE, sys.getsizeof([])
        )
        self.assertEqual(
            PyDictObject.size + GC_HEAD_SIZE, sys.getsizeof({})
        )
        self.assertEqual(
            PySetObject.size + GC_HEAD_SIZE, sys.getsizeof(set())
        )

    def test_a_compact_ascii_string_is_its_header_plus_its_bytes(self):
        # getsizeof counts the trailing NUL that CPython appends
        for text in ('', 'a', 'hello'):
            with self.subTest(text=text):
                self.assertEqual(
                    PyASCIIObject.size + len(text) + 1, sys.getsizeof(text)
                )


class TestBitFieldsInGeneratedCode(unittest.TestCase):
    """PyASCIIObject.state is a run of bit fields; it must stay one."""

    def test_state_is_generated_as_bit_fields(self):
        state = PyASCIIObject.__dict__['state']
        bit_fields = [
            name for name in state.__class__.fields
            if isinstance(state.__class__.__dict__[name], BitField)
        ]
        self.assertEqual(bit_fields, state.__class__.fields)

    def test_the_whole_state_fits_in_one_unsigned_int(self):
        self.assertEqual(PyASCIIObject.__dict__['state'].__class__.size, 4)

    def test_state_of_a_real_string_reads_back_correctly(self):
        ascii_object = Binder().bind('hello')._base._base
        state = ascii_object.state

        self.assertEqual(ascii_object.length.pretty_value, 5)
        # a plain ASCII literal is compact, ascii, and 1 byte per char
        self.assertEqual(state.compact.pretty_value, 1)
        self.assertEqual(state.ascii.pretty_value, 1)
        self.assertEqual(state.kind.pretty_value, 1)

    def test_kind_reflects_the_widest_character(self):
        binder = Binder()
        for text, kind in (('hello', 1), ('привет', 2), ('\U0001F600', 4)):
            with self.subTest(text=text):
                ascii_object = binder.bind(text)._base._base
                self.assertEqual(
                    ascii_object.state.kind.pretty_value, kind
                )


class TestArrayBounds(unittest.TestCase):

    def test_only_trailing_arrays_may_have_a_zero_bound(self):
        """An unresolved constant used to silently become length 0.

        A zero bound is legitimate only for a C flexible array member,
        which is always the last field of its struct. Anywhere else it
        means a bound the generator failed to resolve, and every field
        behind it sits at the wrong offset.
        """
        from pystrector import core_datatypes
        from pystrector.base_datatypes import Array, DataTypeMeta

        empty = []
        for name, datatype in DataTypeMeta.registry.items():
            if not hasattr(core_datatypes, name):
                continue
            for field_name in datatype.fields[:-1]:
                field = datatype.__dict__[field_name]
                if isinstance(field, Array) and field._pystr_length == 0:
                    empty.append(f"{name}.{field_name}")

        self.assertEqual(empty, [])

    def test_bounds_that_come_from_enum_constants_are_resolved(self):
        from pystrector.core_datatypes import _is

        # both used to resolve to 0, shifting the rest of _is
        self.assertEqual(_is.__dict__['func_watchers']._pystr_length, 8)
        self.assertEqual(
            _is.__dict__['monitoring_tool_names']._pystr_length, 8
        )


if __name__ == '__main__':
    unittest.main()
