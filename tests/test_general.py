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

        with self.assertRaises(TypeError):
            binder.bind(Plain())

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