import unittest
from pystrector import Binder
from pystrector.core_datatypes import _longobject

binder = Binder()


class TestGeneral(unittest.TestCase):

    def test_change_type(self):
        def func(): pass
        number = 1.5
        reflector_func = binder.bind(func)
        reflector_number = binder.bind(number)
        reflector_number.ob_base.ob_type = reflector_func.ob_base.ob_type
        self.assertEqual(type(number), type(func))
        reflector_number.ob_base.ob_type = binder.bind(1.7).ob_base.ob_type

    def test_get_anonymous_union(self):
        reflector = binder.bind(1)
        _ = reflector.ob_base.ob_refcnt

    def test_temporary_object_stays_alive(self):
        # the reflector holds a strong reference to the bound object,
        # so binding a temporary must not leave a dangling pointer
        import gc
        reflector = binder.bind([1, 2, 3])
        gc.collect()
        self.assertEqual(reflector.ob_base.ob_size.pretty_value, 3)
        self.assertEqual(
            reflector.ob_item[0][0].cast_to(
                _longobject
            ).long_value.ob_digit[0].pretty_value,
            1,
        )

    def test_oserror_binding(self):
        from pystrector.core_datatypes import PyOSErrorObject
        reflector = binder.bind(OSError(2, "No such file"))
        self.assertIsInstance(reflector, PyOSErrorObject)
        self.assertEqual(
            (+reflector.myerrno).cast().long_value.ob_digit[0].pretty_value,
            2,
        )

    def test_bind_falls_back_to_mro(self):
        from pystrector.core_datatypes import PyBaseExceptionObject, \
            PyListObject

        # SystemError adds no fields over PyBaseExceptionObject
        self.assertIsInstance(binder.bind(SystemError()),
                              PyBaseExceptionObject)
        self.assertIsInstance(binder.bind(ValueError()),
                              PyBaseExceptionObject)

        class MyList(list):
            pass

        reflector = binder.bind(MyList([1, 2]))
        self.assertIsInstance(reflector, PyListObject)
        self.assertEqual(reflector.ob_base.ob_size.pretty_value, 2)

        class Plain:
            pass

        # nothing describes Plain, so the MRO ends at object and only
        # the common header is readable
        from pystrector.core_datatypes import _object

        plain = Plain()
        reflector = binder.bind(plain)
        self.assertIsInstance(reflector, _object)
        self.assertEqual(reflector.ob_type.ptr_for_unpacking, id(Plain))

    def test_a_failed_setup_does_not_leave_half_the_bindings_behind(self):
        """Otherwise one failure turns into "unknown type" for the rest."""
        from unittest import mock

        def make_binds_that_fails():
            Binder.make_bind(1, _longobject)
            raise RuntimeError("boom")

        try:
            with mock.patch.object(Binder, 'make_binds',
                                   make_binds_that_fails):
                Binder._binds_ready = False
                Binder.cls_to_datatype.clear()
                Binder.type_address_to_cls.clear()

                with self.assertRaises(RuntimeError):
                    Binder.ensure_binds()

                self.assertFalse(Binder._binds_ready)
                self.assertEqual(Binder.cls_to_datatype, {})
        finally:
            Binder._binds_ready = False
            Binder.ensure_binds()

        self.assertIsInstance(binder.bind(1), _longobject)

    def test_a_field_read_on_the_class_says_what_to_do(self):
        from pystrector.core_datatypes import PyListObject

        with self.assertRaises(AttributeError) as caught:
            getattr(PyListObject, 'ob_item')

        self.assertIn("bound object", str(caught.exception))

    def test_casts(self):
        i = 21  # random number
        numbers = set(range(0, i))
        reflector = binder.bind(numbers)

        for j in range(i):
            setentry = (+(reflector.table + j))
            first = ((+setentry.key).cast_to(_longobject).long_value.ob_digit.
                     bytes_value)
            second = (+setentry.key).cast().long_value.ob_digit.bytes_value
            self.assertEqual(first, second)