import unittest
from pystrector import Pystrector
from sys import getrefcount

strector = Pystrector()


class TestInt(unittest.TestCase):

    def test_caching_ints(self):
        for i in range(-5, 257):
            reflector = strector.bind_object(i)
            self.assertEqual(reflector.ob_base.ob_refcnt.python_value, 4294967295)

    def test_int_refcnt(self):
        for i in range(257, 1000):
            reflector = strector.bind_object(i)
            self.assertEqual(reflector.ob_base.ob_refcnt.python_value, getrefcount(i) - 1)

    def test_int_type(self):
        first_type_address = strector.bind_object(1).ob_base.ob_type.python_value.hex_address
        second_type_address = strector.bind_object(2).ob_base.ob_type.python_value.hex_address
        self.assertEqual(first_type_address,second_type_address)

    def test_int_long_value(self):
        obj = 9
        reflector = strector.bind_object(obj)
        self.assertEqual(reflector.long_value.lv_tag.python_value, 8)
        self.assertEqual(reflector.long_value.ob_digit.python_value, ['0x9'])
