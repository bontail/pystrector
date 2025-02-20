import unittest
from pystrector import Binder

binder = Binder()


class TestNumber(unittest.TestCase):

    def test_get_value_object(self):
        x = 1111
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_base.ob_refcnt

    def test_get_pretty_value(self):
        x = 3333
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_base.ob_refcnt.pretty_value

    def test_get_bytes_value(self):
        x = 5555
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_base.ob_refcnt.bytes_value

    def test_set_value_object(self):
        x = 999999
        y = 888888
        reflector_x = binder.bind(x)
        reflector_y = binder.bind(y)
        reflector_x.long_value.ob_digit = reflector_y.long_value.ob_digit
        self.assertEqual(x, y)

    def test_set_pretty_value(self):
        x = 999999
        y = 888888
        reflector_x = binder.bind(x)
        reflector_x.long_value.ob_digit[0].pretty_value = y
        self.assertEqual(x, y)

    def test_set_bytes_value(self):
        x = 1023
        y = 2000
        reflector_x = binder.bind(x)
        reflector_x.long_value.ob_digit[0].bytes_value = \
            bytearray(y.to_bytes(length=4, byteorder="little"))
        self.assertEqual(x, y)
