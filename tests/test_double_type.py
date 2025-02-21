import unittest
from struct import pack

from pystrector import Binder

binder = Binder()


class TestDouble(unittest.TestCase):

    def test_get_value_object(self):
        x = 1111.11
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_fval

    def test_get_pretty_value(self):
        x = 3333.33
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_fval.pretty_value

    def test_get_bytes_value(self):
        x = 5555.55
        reflector_x = binder.bind(x)
        _ = reflector_x.ob_fval.bytes_value

    def test_set_value_object(self):
        x = 1111.11
        y = 2222.22
        reflector_x = binder.bind(x)
        reflector_y = binder.bind(y)
        reflector_x.ob_fval = reflector_y.ob_fval
        self.assertEqual(x, y)

    def test_set_pretty_value(self):
        x = 3333.33
        y = 4444.44
        reflector_x = binder.bind(x)
        reflector_x.ob_fval.pretty_value = y
        self.assertEqual(x, y)

    def test_set_bytes_value(self):
        x = 5555.55
        y = 6666.66
        reflector_x = binder.bind(x)
        reflector_x.ob_fval.bytes_value = bytearray(pack('d', y))
        self.assertEqual(x, y)
