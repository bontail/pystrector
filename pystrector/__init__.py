from pystrector._platform import (
    PlatformMismatchWarning,
    UnsupportedPlatformError,
    check,
)

check()

from pystrector.binder import Binder  # noqa: E402

__all__ = [
    "Binder",
    "PlatformMismatchWarning",
    "UnsupportedPlatformError",
]
