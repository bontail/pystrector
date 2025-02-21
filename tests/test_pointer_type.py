import unittest
from pystrector import Binder

binder = Binder()


class TestPointer(unittest.TestCase):

    def test_unpack(self):
        numbers = set(range(0, 50))
        reflector = binder.bind(numbers)

        first = (+(reflector.table + 0)).hash.pretty_value
        second = (+reflector.table).hash.pretty_value
        self.assertEqual(first, second)

        for i in range(len(numbers)):
            first = (+(reflector.table + i)).hash.pretty_value
            second = (reflector.table[i]).hash.pretty_value
            self.assertEqual(first, second)

    def test_get_value_object(self):
        numbers = set(range(0, 50))
        reflector = binder.bind(numbers)
        _ = reflector.table

    def test_get_pretty_value(self):
        numbers = set(range(0, 50))
        reflector = binder.bind(numbers)
        with self.assertRaises(TypeError):
            _ = reflector.table.pretty_value

    def test_get_bytes_value(self):
        numbers = set(range(0, 50))
        reflector = binder.bind(numbers)
        _ = reflector.table.bytes_value

    def test_set_value_object(self):
        first_numbers = {1, 2, 3}
        second_numbers = {4, 5, 6}
        first_reflector = binder.bind(first_numbers)
        second_reflector = binder.bind(second_numbers)
        first_reflector.table = second_reflector.table
        self.assertEqual(first_numbers, second_numbers)

    def test_set_value_by_index(self):
        first_numbers = list(range(30))
        second_numbers = list(range(30, 60))
        first_reflector = binder.bind(first_numbers)
        second_reflector = binder.bind(second_numbers)
        for i in range(30):
            first_reflector.ob_item[i] = second_reflector.ob_item[i]  # type: ignore

        self.assertEqual(first_numbers, second_numbers)

    def test_set_pretty_value(self):
        numbers = set(range(0, 50))
        reflector = binder.bind(numbers)
        with self.assertRaises(TypeError):
            reflector.table.pretty_value = 'some'

    def test_set_bytes_value(self):
        first_numbers = {1, 2, 3}
        second_numbers = {4, 5, 6}
        first_reflector = binder.bind(first_numbers)
        second_reflector = binder.bind(second_numbers)
        first_table = first_reflector.table
        first_reflector.table.bytes_value = second_reflector.table.bytes_value
        self.assertEqual(first_numbers, second_numbers)
        first_reflector.table.bytes_value = first_table.bytes_value
