import unittest
from pystrector import Pystrector
from sys import getrefcount

strector = Pystrector()


class TestList(unittest.TestCase):

    def test_list_refcnt(self):
        for i in range(1000):
            obj = list()
            reflector = strector.bind_object(obj)
            assert reflector.ob_base.ob_base.ob_refcnt.python_value == getrefcount(obj) - 1

    def test_list_type(self):
        first_obj = list()
        first_type_address = strector.bind_object(first_obj).ob_base.ob_base.ob_type.python_value.hex_address
        second_obj = list()
        second_type_address = strector.bind_object(second_obj).ob_base.ob_base.ob_type.python_value.hex_address
        assert first_type_address == second_type_address

    def test_list_ob_size(self):
        for i in range(1000):
            obj = list(range(i))
            assert strector.bind_object(obj).ob_base.ob_size.python_value == i

    def test_ob_item(self):
        assert True

    def test_list_allocated(self):
        for i in range(1000):
            obj = list(range(i))
            assert strector.bind_object(obj).allocated.python_value >= i

