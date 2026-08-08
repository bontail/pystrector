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
from pystrector.base_datatypes import char_is_signed

# recorded by the code generator; older generated files predate it
GENERATED_ON: tuple[str, str] = getattr(
    core_datatypes, "GENERATED_ON", ("", "")
)
GENERATED_FOR_CPYTHON: tuple[int, int] = getattr(
    core_datatypes, "GENERATED_FOR_CPYTHON", (3, 12)
)
GENERATED_FOR_CPYTHON_FULL: tuple[int, int, int] | None = getattr(
    core_datatypes, "GENERATED_FOR_CPYTHON_FULL", None
)
GENERATED_CHAR_SIGNED: bool | None = getattr(
    core_datatypes, "GENERATED_CHAR_SIGNED", None
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


def check_build() -> None:
    """Raise when the interpreter was built with layout changing flags."""
    if hasattr(sys, "getobjects"):
        # --with-trace-refs puts _ob_next and _ob_prev in front of every
        # PyObject, so every offset in the file is off by 16
        raise UnsupportedPlatformError(
            "this interpreter was built with Py_TRACE_REFS, which adds two"
            " fields to every object header. The bundled layouts describe"
            " a normal build and would read the wrong offsets"
        )


def check_micro_version() -> None:
    """Warn when the patch release differs from the generated one."""
    if GENERATED_FOR_CPYTHON_FULL is None:
        return

    running_on = sys.version_info[:3]
    if running_on == GENERATED_FOR_CPYTHON_FULL:
        return

    warnings.warn(
        "the bundled layouts were generated for CPython"
        f" {'.'.join(map(str, GENERATED_FOR_CPYTHON_FULL))}, but this is"
        f" {'.'.join(map(str, running_on))}. Patch releases do change"
        " internal structs - 3.12.7 added a field to PyASCIIObject - so"
        " some offsets may be wrong",
        PlatformMismatchWarning,
        stacklevel=3,
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
        " 'make update-python-source python-version=<tag>' followed by"
        " 'make generate-core-datatypes' to be sure",
        PlatformMismatchWarning,
        stacklevel=3,
    )


def check_char_signedness() -> None:
    """Warn when plain "char" means the other thing here."""
    if GENERATED_CHAR_SIGNED is None:
        return

    running_on = char_is_signed()
    if running_on == GENERATED_CHAR_SIGNED:
        return

    generated, current = (
        ("signed", "unsigned") if GENERATED_CHAR_SIGNED
        else ("unsigned", "signed")
    )
    warnings.warn(
        f"the bundled layouts were generated where plain C 'char' is"
        f" {generated}, but it is {current} here. Field widths are"
        f" unaffected, so every offset still holds, but a char field"
        f" whose top bit is set reads with the wrong sign. Regenerate"
        f" the layouts on this platform to fix it",
        PlatformMismatchWarning,
        stacklevel=3,
    )


def check() -> None:
    check_abi()
    check_build()
    check_platform()
    check_micro_version()
    check_char_signedness()
