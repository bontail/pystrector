import unittest
from pystrector import Binder
from pystrector.core_datatypes import _longobject

binder = Binder()


class TestList(unittest.TestCase):

    def test_list_ob_size(self):
        size = 100
        obj = list(range(size))
        self.assertEqual(binder.bind(obj).ob_base.ob_size.pretty_value, size)

    def test_list_allocated(self):
        size = 100
        obj = list(range(size))
        obj.pop()
        self.assertGreaterEqual(binder.bind(obj).allocated.pretty_value, size)

    def test_list_ob_items(self):
        for i in range(100):
            obj = list(range(i))
            for j in range(i):
                self.assertEqual(
                    (+(binder.bind(obj).ob_item[j])).cast_to(
                        _longobject).long_value.ob_digit[0].pretty_value,
                    j
                )
                self.assertEqual(
                    (+(binder.bind(obj).ob_item + j))[0].cast_to(
                        _longobject).long_value.ob_digit[0].pretty_value,
                    j
                )