import unittest
from pystrector import Binder

binder = Binder()


class TestNumber(unittest.TestCase):
    def test_set_value_object(self):
        x = 999999
        y = 888888
        reflector_x = binder.bind(x)
        reflector_y = binder.bind(y)
        reflector_x.long_value.ob_digit = reflector_y.long_value.ob_digit
        self.assertEqual(x, y)

        reflector_x.long_value.ob_digit[0].pretty_value = 777777
        self.assertEqual(x, 777777)

    def test_set_pretty_value(self):
        x = 999999
        y = 888888
        reflector_x = binder.bind(x)
        reflector_x.long_value.ob_digit[0].pretty_value = y
        self.assertEqual(x, y)
        reflector_x.long_value.ob_digit[0].pretty_value = 999999

    def test_set_bytes_value(self):
        x = 1023
        y = 2000
        reflector_x = binder.bind(x)
        reflector_x.long_value.ob_digit[0].bytes_value = \
            bytearray(y.to_bytes(length=4, byteorder="little"))
        self.assertEqual(x, y)
        reflector_x.long_value.ob_digit[0].bytes_value = \
            bytearray((2000).to_bytes(length=4, byteorder="little"))
