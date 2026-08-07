from ctypes import c_char, memmove, string_at


def get_bytes_value(address: int, size: int) -> bytearray:
    """Return memory contents by address."""
    return bytearray(string_at(address, size))


def set_bytes_value(address: int, value: bytearray) -> None:
    """Set memory contents by address."""
    if not value:
        return

    src = (c_char * len(value)).from_buffer(value)
    memmove(address, src, len(value))
