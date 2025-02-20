import unittest
from pystrector import Binder

binder = Binder()


class TestGeneral(unittest.TestCase):

    def test_change_type(self):
        def func(): pass
        number = 1.5
        reflector_func = binder.bind(func)
        reflector_number = binder.bind(number)
        reflector_number.ob_base.ob_type = reflector_func.ob_base.ob_type
        self.assertEqual(type(number), type(func))
        reflector_func.ob_base.ob_type = binder.bind(lambda _: _).ob_base.ob_type

