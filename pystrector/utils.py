from ctypes import c_uint8


def get_bytes_value(address: int, size: int) -> int:
    res = 0
    for i in range(size - 1, -1, -1):
        res <<= 8
        value = c_uint8.from_address(address + i).value
        res += value
    return res
