import unittest
from pystrector import Pystrector
from sys import getrefcount

strector = Pystrector()


class TestList(unittest.TestCase):

    def test_use_cache(self):
        obj = list()
        reflector = strector.bind_object(obj, use_cache=True)
        first_value = reflector.ob_base.ob_size.python_value
        obj.extend(list(range(1000)))
        second_value = reflector.ob_base.ob_size.python_value
        assert first_value == second_value

        obj = list()
        reflector = strector.bind_object(obj, use_cache=False)
        first_value = reflector.ob_base.ob_size.python_value
        obj.extend(list(range(1000)))
        second_value = reflector.ob_base.ob_size.python_value
        assert first_value != second_value
