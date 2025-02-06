import unittest
from pystrector import Binder

binder = Binder()


class TestGeneral(unittest.TestCase):

    def test_change_type(self):
        x = lambda _: _
        z = 1.5
        reflector_x = binder.bind(x)
        reflector_z = binder.bind(z)
        reflector_x.ob_base.ob_type = reflector_z.ob_base.ob_type
        self.assertEqual(type(x), type(z))
        reflector_x.ob_base.ob_type = binder.bind(lambda _: _).ob_base.ob_type

