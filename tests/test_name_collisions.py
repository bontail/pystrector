import ctypes
import unittest

from pystrector import Binder
from pystrector.base_datatypes import DataType, Int, UnsignedInt, LongLong
from pystrector.core_datatypes import (
    _PyUnicodeWriter, PyStructSequence_Desc, arena_object,
)

binder = Binder()


class TestNameCollisions(unittest.TestCase):
    """Struct fields may be named like the library's own attributes."""

    def test_field_named_address_is_reachable(self):
        # used to recurse forever through the "address" property
        instance = arena_object(ptr=0)
        # getattr, not attribute access: mypy can't type the generated
        # module, which is excluded from the type check
        self.assertIsInstance(getattr(instance, "address"), DataType)
        self.assertEqual(arena_object.fields[0], "address")

    def test_field_named_size_is_reachable(self):
        self.assertIn("size", _PyUnicodeWriter.fields)
        instance = _PyUnicodeWriter(ptr=0)
        self.assertIsInstance(getattr(instance, "size"), DataType)

    def test_field_named_size_still_counts_towards_layout(self):
        # buffer, data, kind, maxchar, size, pos, min_length, min_char,
        # overallocate, readonly
        self.assertEqual(_PyUnicodeWriter._pystr_size, 56)
        # "pos" sits right after the 8-byte "size" field
        self.assertEqual(_PyUnicodeWriter.__dict__["pos"]._pystr_offset, 32)

    def test_field_named_fields_is_reachable(self):
        instance = PyStructSequence_Desc(ptr=0)
        self.assertIsInstance(instance.fields, DataType)
        self.assertEqual(PyStructSequence_Desc._pystr_size, 32)

    def test_public_size_alias_kept_for_regular_structs(self):
        from pystrector.core_datatypes import _object
        self.assertEqual(_object.size, _object._pystr_size)


class TestAssignmentWidthCheck(unittest.TestCase):

    def test_same_width_different_type_is_allowed(self):
        class Holder(DataType):
            field = Int()

        # scratch buffers we own: never read or write through a reflector
        # into memory that belongs to a live object in a test
        destination = (ctypes.c_char * 8)()
        source = (ctypes.c_char * 8)()

        holder = Holder(ptr=ctypes.addressof(destination))
        other = UnsignedInt(ptr=ctypes.addressof(source))
        other.pretty_value = 7

        holder.field = other
        self.assertEqual(holder.field.pretty_value, 7)

    def test_different_width_is_rejected(self):
        class Holder(DataType):
            field = Int()

        holder = Holder(ptr=0)
        with self.assertRaises(TypeError):
            holder.field = LongLong()

    def test_non_datatype_is_rejected(self):
        class Holder(DataType):
            field = Int()

        holder = Holder(ptr=0)
        with self.assertRaises(TypeError):
            holder.field = 1


class TestIncompleteTypes(unittest.TestCase):

    def test_void_pointer_dereference_raises(self):
        from pystrector.core_datatypes import PyModuleObject
        reflector = binder.bind(unittest)
        with self.assertRaises(TypeError):
            # md_state is a void*
            +reflector.cast_to(PyModuleObject).md_state

    def test_incomplete_types_have_zero_size(self):
        from pystrector.base_datatypes import Void, Func
        self.assertEqual(Void().size, 0)
        self.assertEqual(Func().size, 0)


class TestBinderEntryPoints(unittest.TestCase):

    def test_bind_works_without_instantiating_binder(self):
        self.assertEqual(Binder.bind(1).long_value.ob_digit[0].pretty_value, 1)

    def test_unknown_type_address_gives_clear_error(self):
        from pystrector.core_datatypes import _object
        # a fake PyObject in a buffer we own, whose ob_type points nowhere
        scratch = (ctypes.c_char * _object._pystr_size)()
        stray = _object(ptr=ctypes.addressof(scratch))
        stray.ob_type.bytes_value = bytearray((8).to_bytes(8, "little"))

        with self.assertRaises(TypeError) as ctx:
            stray.cast()

        self.assertIn("doesn't know the type", str(ctx.exception))


if __name__ == "__main__":
    unittest.main()
