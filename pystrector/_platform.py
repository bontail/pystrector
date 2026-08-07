"""Runtime validation of the assumptions baked into core_datatypes.py.

The generated layouts are not portable. They are produced by preprocessing
the headers of one CPython version on one platform, and both the ABI
(pointer width, sizeof(long), byte order) and the structs themselves
(pthread types, thread state, arena bookkeeping) differ elsewhere.

Mismatches that would silently produce wrong offsets raise; mismatches
that only affect the platform specific part of the file warn.
"""
import ctypes
import platform
import sys
import warnings

from pystrector import core_datatypes

# recorded by the code generator; older generated files predate it
GENERATED_ON: tuple[str, str] = getattr(
    core_datatypes, "GENERATED_ON", ("", "")
)
GENERATED_FOR_CPYTHON: tuple[int, int] = getattr(
    core_datatypes, "GENERATED_FOR_CPYTHON", (3, 12)
)


class UnsupportedPlatformError(RuntimeError):
    """The current interpreter can't be described by the generated layouts."""


class PlatformMismatchWarning(UserWarning):
    """The layouts were generated elsewhere and may be partly wrong."""


def check_abi() -> None:
    """Raise when an ABI assumption of core_datatypes.py does not hold."""
    if sys.byteorder != "little":
        raise UnsupportedPlatformError(
            "pystrector decodes every field as little endian, but this"
            f" interpreter is {sys.byteorder} endian"
        )

    pointer_size = ctypes.sizeof(ctypes.c_void_p)
    if pointer_size != 8:
        raise UnsupportedPlatformError(
            "pystrector assumes 64-bit pointers, but this interpreter has"
            f" {pointer_size}-byte pointers"
        )

    long_size = ctypes.sizeof(ctypes.c_long)
    if long_size != 8:
        raise UnsupportedPlatformError(
            "pystrector maps C 'long' to 8 bytes (LP64), but this platform"
            f" uses {long_size}. Windows and other LLP64 targets are not"
            " supported"
        )

    running_on = sys.version_info[:2]
    if running_on != GENERATED_FOR_CPYTHON:
        raise UnsupportedPlatformError(
            "the bundled layouts describe CPython"
            f" {GENERATED_FOR_CPYTHON[0]}.{GENERATED_FOR_CPYTHON[1]}, but"
            f" this is {running_on[0]}.{running_on[1]}. Install the"
            " pystrector release whose version matches your interpreter"
        )


def check_platform() -> None:
    """Warn when the layouts were generated on a different platform."""
    running_on = (sys.platform, platform.machine())
    if GENERATED_ON == ("", "") or running_on == GENERATED_ON:
        return

    warnings.warn(
        f"the bundled layouts were generated on {GENERATED_ON[0]}"
        f"/{GENERATED_ON[1]}, but this is {running_on[0]}/{running_on[1]}."
        " Core object layouts (PyObject, list, int, ...) match, but"
        " platform specific structs may not. Regenerate them with"
        " 'make update-python-source generate-core-datatypes' to be sure",
        PlatformMismatchWarning,
        stacklevel=3,
    )


def check() -> None:
    check_abi()
    check_platform()
