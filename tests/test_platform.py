import ctypes
import platform
import sys
import unittest
import warnings
from unittest import mock

from pystrector import _platform
from pystrector._platform import (
    PlatformMismatchWarning, UnsupportedPlatformError, check_abi,
    check_build, check_micro_version, check_platform,
)


class TestABIChecks(unittest.TestCase):

    def test_current_interpreter_passes(self):
        check_abi()

    def test_big_endian_is_rejected(self):
        with mock.patch.object(sys, 'byteorder', 'big'):
            with self.assertRaises(UnsupportedPlatformError) as ctx:
                check_abi()

        self.assertIn('endian', str(ctx.exception))

    def test_32_bit_pointers_are_rejected(self):
        real_sizeof = ctypes.sizeof

        def fake_sizeof(datatype):
            if datatype is ctypes.c_void_p:
                return 4
            return real_sizeof(datatype)

        with mock.patch.object(ctypes, 'sizeof', fake_sizeof):
            with self.assertRaises(UnsupportedPlatformError) as ctx:
                check_abi()

        self.assertIn('64-bit pointers', str(ctx.exception))

    def test_llp64_long_is_rejected(self):
        real_sizeof = ctypes.sizeof

        def fake_sizeof(datatype):
            if datatype is ctypes.c_long:
                return 4
            return real_sizeof(datatype)

        with mock.patch.object(ctypes, 'sizeof', fake_sizeof):
            with self.assertRaises(UnsupportedPlatformError) as ctx:
                check_abi()

        self.assertIn('LLP64', str(ctx.exception))

    def test_other_cpython_version_is_rejected(self):
        with mock.patch.object(_platform, 'GENERATED_FOR_CPYTHON', (3, 13)):
            with self.assertRaises(UnsupportedPlatformError) as ctx:
                check_abi()

        self.assertIn('3.13', str(ctx.exception))


class TestPlatformChecks(unittest.TestCase):

    def test_matching_platform_is_silent(self):
        current = (sys.platform, platform.machine())
        with mock.patch.object(_platform, 'GENERATED_ON', current):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_platform()

        self.assertEqual(caught, [])

    def test_foreign_platform_warns(self):
        with mock.patch.object(_platform, 'GENERATED_ON', ('aix', 's390x')):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_platform()

        self.assertEqual(len(caught), 1)
        self.assertIs(caught[0].category, PlatformMismatchWarning)

    def test_unknown_provenance_is_silent(self):
        with mock.patch.object(_platform, 'GENERATED_ON', ('', '')):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_platform()

        self.assertEqual(caught, [])


class TestBuildChecks(unittest.TestCase):

    def test_current_interpreter_passes(self):
        check_build()

    def test_trace_refs_build_is_rejected(self):
        # sys.getobjects only exists on a --with-trace-refs build, which
        # puts two extra fields in front of every PyObject
        with mock.patch.object(sys, 'getobjects', lambda _: [], create=True):
            with self.assertRaises(UnsupportedPlatformError) as ctx:
                check_build()

        self.assertIn('Py_TRACE_REFS', str(ctx.exception))


class TestMicroVersionChecks(unittest.TestCase):

    def test_matching_patch_release_is_silent(self):
        with mock.patch.object(_platform, 'GENERATED_FOR_CPYTHON_FULL',
                               sys.version_info[:3]):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_micro_version()

        self.assertEqual(caught, [])

    def test_other_patch_release_warns(self):
        other = (sys.version_info[0], sys.version_info[1],
                 sys.version_info[2] + 1)
        with mock.patch.object(_platform, 'GENERATED_FOR_CPYTHON_FULL',
                               other):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_micro_version()

        self.assertEqual(len(caught), 1)
        self.assertIs(caught[0].category, PlatformMismatchWarning)

    def test_generated_file_without_a_patch_release_is_silent(self):
        with mock.patch.object(_platform, 'GENERATED_FOR_CPYTHON_FULL', None):
            with warnings.catch_warnings(record=True) as caught:
                warnings.simplefilter('always')
                check_micro_version()

        self.assertEqual(caught, [])


if __name__ == '__main__':
    unittest.main()
