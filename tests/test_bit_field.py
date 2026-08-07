import ctypes
import unittest

from pystrector.base_datatypes import (
    BitField, DataType, Int, LongLong, UnsignedByte, UnsignedInt,
)


def make_buffer(*values: int) -> tuple[ctypes.Array, int]:
    """Return a writable buffer holding values and its address."""
    buffer = (ctypes.c_ubyte * len(values))(*values)

    return buffer, ctypes.addressof(buffer)


class TestBitFieldLayout(unittest.TestCase):

    def test_neighbours_share_one_storage_unit(self):
        class Flags(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)
            b = BitField(datatype=UnsignedInt(), bit_width=3)
            c = BitField(datatype=UnsignedInt(), bit_width=1)

        self.assertEqual(Flags.size, 4)
        self.assertEqual(
            [Flags.__dict__[name]._pystr_offset for name in 'abc'], [0, 0, 0]
        )
        self.assertEqual(
            [Flags.__dict__[name]._pystr_bit_shift for name in 'abc'],
            [0, 2, 5],
        )

    def test_a_bit_field_never_straddles_its_storage_unit(self):
        class Straddle(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=30)
            b = BitField(datatype=UnsignedInt(), bit_width=4)

        # b does not fit in the 2 bits left of the first unit, so the
        # ABI moves it to the next one instead of splitting it
        self.assertEqual(Straddle.__dict__['b']._pystr_offset, 4)
        self.assertEqual(Straddle.__dict__['b']._pystr_bit_shift, 0)
        self.assertEqual(Straddle.size, 8)

    def test_zero_width_bit_field_closes_the_current_unit(self):
        class Padded(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=3)
            pad = BitField(datatype=UnsignedInt(), bit_width=0)
            b = BitField(datatype=UnsignedInt(), bit_width=3)

        self.assertEqual(Padded.__dict__['b']._pystr_offset, 4)
        self.assertEqual(Padded.__dict__['b']._pystr_bit_shift, 0)
        self.assertEqual(Padded.size, 8)

    def test_ordinary_fields_around_bit_fields_stay_aligned(self):
        class Mixed(DataType):
            flag = BitField(datatype=UnsignedByte(), bit_width=1)
            value = LongLong()

        self.assertEqual(Mixed.__dict__['flag']._pystr_offset, 0)
        self.assertEqual(Mixed.__dict__['value']._pystr_offset, 8)
        self.assertEqual(Mixed.size, 16)

    def test_bit_fields_of_a_union_all_start_at_zero(self):
        class Overlaid(DataType, is_union=True):
            a = BitField(datatype=UnsignedInt(), bit_width=3)
            b = BitField(datatype=UnsignedInt(), bit_width=7)

        self.assertEqual(Overlaid.size, 4)
        self.assertEqual(
            [Overlaid.__dict__[name]._pystr_bit_shift for name in 'ab'],
            [0, 0],
        )

    def test_layout_matches_ctypes(self):
        class Ours(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)
            b = BitField(datatype=UnsignedInt(), bit_width=3)
            c = BitField(datatype=UnsignedInt(), bit_width=1)
            pad = BitField(datatype=UnsignedInt(), bit_width=26)

        class Theirs(ctypes.Structure):
            _fields_ = [
                ('a', ctypes.c_uint, 2),
                ('b', ctypes.c_uint, 3),
                ('c', ctypes.c_uint, 1),
                ('pad', ctypes.c_uint, 26),
            ]

        self.assertEqual(Ours.size, ctypes.sizeof(Theirs))


class TestBitFieldValue(unittest.TestCase):

    def test_reads_only_its_own_bits(self):
        class Flags(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)
            b = BitField(datatype=UnsignedInt(), bit_width=3)

        # 0b10_011 -> b == 0b100 == 4, a == 0b11 == 3
        buffer, address = make_buffer(0b10011, 0, 0, 0)
        flags = Flags(ptr=address)
        self.assertEqual(flags.a.pretty_value, 3)
        self.assertEqual(flags.b.pretty_value, 4)

    def test_writing_leaves_the_neighbours_alone(self):
        class Flags(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)
            b = BitField(datatype=UnsignedInt(), bit_width=3)

        buffer, address = make_buffer(0b10011, 0, 0, 0)
        flags = Flags(ptr=address)
        flags.b.pretty_value = 1
        self.assertEqual(flags.b.pretty_value, 1)
        self.assertEqual(flags.a.pretty_value, 3)
        self.assertEqual(buffer[0], 0b00111)

    def test_signed_bit_field_is_sign_extended(self):
        class Signed(DataType):
            value = BitField(datatype=Int(), bit_width=4)

        buffer, address = make_buffer(0b1111, 0, 0, 0)
        self.assertEqual(Signed(ptr=address).value.pretty_value, -1)

    def test_value_out_of_range_is_rejected(self):
        class Flags(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)

        buffer, address = make_buffer(0, 0, 0, 0)
        flags = Flags(ptr=address)
        with self.assertRaises(ValueError):
            flags.a.pretty_value = 4

    def test_whole_field_assignment_is_refused(self):
        class Flags(DataType):
            a = BitField(datatype=UnsignedInt(), bit_width=2)

        buffer, address = make_buffer(0, 0, 0, 0)
        flags = Flags(ptr=address)
        # a raw byte copy would clobber every neighbour in the unit
        with self.assertRaises(TypeError):
            flags.a = UnsignedInt()


if __name__ == '__main__':
    unittest.main()
