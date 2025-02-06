import unittest
from pystrector import Binder
from sys import getrefcount

binder = Binder()


class TestInt(unittest.TestCase):

    def test_caching_ints(self):
        # specific test, works only for Python 3.12+ (PEP 683)
        for i in range(-5, 257):
            reflector = binder.bind(i)
            self.assertEqual(
                reflector.ob_base.ob_refcnt.pretty_value,
                4294967295,
            )

    def test_int_refcnt(self):
        for i in range(257, 1000):
            reflector = binder.bind(i)
            self.assertEqual(reflector.ob_base.ob_refcnt.pretty_value,
                             getrefcount(i) - 1)

    def test_int_type(self):
        first_type_address = binder.bind(1).ob_base.ob_type.pretty_value
        second_type_address = binder.bind(2).ob_base.ob_type.pretty_value
        self.assertEqual(first_type_address, second_type_address)

    def test_int_long_value(self):
        obj = 5
        reflector = binder.bind(obj)
        self.assertEqual(reflector.long_value.lv_tag.pretty_value, 8)
        self.assertEqual(reflector.long_value.ob_digit[0].pretty_value, obj)
        self.assertEqual(reflector.long_value.ob_digit[1].pretty_value, 0)

    def test_int_set_value(self):
        x = 999999
        y = 888888

        reflector_x = binder.bind(x)
        reflector_y = binder.bind(y)
        reflector_x.long_value.ob_digit = reflector_y.long_value.ob_digit
        self.assertEqual(x, y)

        reflector_x.long_value.ob_digit[0].pretty_value = 777777
        self.assertEqual(x, 777777)
