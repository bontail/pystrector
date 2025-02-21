import unittest
from pystrector import Binder
from sys import getrefcount

binder = Binder()


class TestInt(unittest.TestCase):

    def test_caching(self):
        # specific test, works only for Python 3.12+ (PEP 683)
        for i in range(-5, 257):
            reflector = binder.bind(i)
            self.assertEqual(
                reflector.ob_base.ob_refcnt.pretty_value,
                4294967295,
            )

    def test_refcnt(self):
        for i in range(257, 1000):
            reflector = binder.bind(i)
            self.assertEqual(
                reflector.ob_base.ob_refcnt.pretty_value,
                getrefcount(i) - 1
            )

    def test_type(self):
        first_type_address = binder.bind(1).ob_base.ob_type.bytes_value
        second_type_address = binder.bind(2).ob_base.ob_type.bytes_value
        self.assertEqual(first_type_address, second_type_address)

    def test_long_value(self):
        obj = 5
        reflector = binder.bind(obj)
        self.assertEqual(reflector.long_value.lv_tag.pretty_value, 8)
        self.assertEqual(reflector.long_value.ob_digit[0].pretty_value, obj)
        self.assertEqual(reflector.long_value.ob_digit[1].pretty_value, 0)
