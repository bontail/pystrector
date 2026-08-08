"""The binding table must never be observed half built.

make_binds() binds objects of its own, so the code it reaches can call
back into ensure_binds(); that thread has to fall through. Marking the
table ready up front made every *other* thread fall through too, and
they saw an empty table: bind() then reported that pystrector doesn't
know a type it knows perfectly well.
"""
import threading
import unittest

from pystrector.binder import Binder
from pystrector.core_datatypes import _longobject


class TestEnsureBindsIsThreadSafe(unittest.TestCase):

    def setUp(self):
        self.ready = Binder._binds_ready
        self.cls_to_datatype = dict(Binder.cls_to_datatype)
        self.type_address_to_cls = dict(Binder.type_address_to_cls)
        self.make_binds = Binder.__dict__['make_binds']

    def tearDown(self):
        Binder.make_binds = self.make_binds  # type: ignore[method-assign]
        Binder._binds_ready = self.ready
        Binder._building_in_thread = None
        Binder.cls_to_datatype.clear()
        Binder.cls_to_datatype.update(self.cls_to_datatype)
        Binder.type_address_to_cls.clear()
        Binder.type_address_to_cls.update(self.type_address_to_cls)

    def _rebuild_slowly(self, started, release):
        """Reset the table and make make_binds() block halfway through."""
        original = self.make_binds.__func__

        def slow(cls):
            started.set()
            release.wait(timeout=10)
            original(cls)

        Binder._binds_ready = False
        Binder.cls_to_datatype.clear()
        Binder.type_address_to_cls.clear()
        Binder.make_binds = classmethod(slow)  # type: ignore[method-assign, assignment]

    def test_a_second_thread_waits_for_a_complete_table(self):
        started, release = threading.Event(), threading.Event()
        self._rebuild_slowly(started, release)

        builder = threading.Thread(target=Binder.ensure_binds)
        builder.start()
        self.assertTrue(started.wait(timeout=10))

        seen: list[int] = []

        def wait_for_the_table() -> None:
            Binder.ensure_binds()
            seen.append(len(Binder.cls_to_datatype))

        waiter = threading.Thread(target=wait_for_the_table)
        waiter.start()
        # the waiter must still be blocked: the table is empty right now
        waiter.join(timeout=0.2)
        self.assertEqual(seen, [])

        release.set()
        builder.join(timeout=10)
        waiter.join(timeout=10)

        self.assertEqual(seen, [len(Binder.cls_to_datatype)])
        self.assertTrue(Binder._binds_ready)

    def test_reentering_from_inside_make_binds_does_not_deadlock(self):
        depth = []

        def reentrant(cls):
            depth.append(len(Binder.cls_to_datatype))
            # what a datatype bound by make_binds() does when it needs
            # the binder itself
            Binder.ensure_binds()
            self.make_binds.__func__(cls)

        Binder._binds_ready = False
        Binder.cls_to_datatype.clear()
        Binder.type_address_to_cls.clear()
        Binder.make_binds = classmethod(reentrant)  # type: ignore[method-assign, assignment]

        Binder.ensure_binds()

        self.assertEqual(depth, [0])
        self.assertTrue(Binder._binds_ready)
        self.assertIn(int, Binder.cls_to_datatype)

    def test_a_failed_build_leaves_nothing_behind(self):
        def failing(cls):
            cls.make_bind(1, _longobject)
            raise RuntimeError('boom')

        Binder._binds_ready = False
        Binder.make_binds = classmethod(failing)  # type: ignore[method-assign, assignment]

        with self.assertRaises(RuntimeError):
            Binder.ensure_binds()

        self.assertFalse(Binder._binds_ready)
        self.assertEqual(Binder.cls_to_datatype, {})
        self.assertIsNone(Binder._building_in_thread)


if __name__ == '__main__':
    unittest.main()
