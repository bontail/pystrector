from ctypes import c_uint8, memmove, c_uint64


def get_bytes_value(address: int, size: int) -> bytearray:
    """Return memory contents by address."""
    arr = bytearray(size)
    for i in range(size):
        arr[i] = c_uint8.from_address(address + i).value
    return arr


def set_bytes_value(address: int, value: bytearray) -> None:
    """Set memory contents by address."""
    # byte 32 contains a pointer to bytes from bytearray
    src: int = c_uint64.from_address(id(value) + 32).value
    memmove(address, src, len(value))

