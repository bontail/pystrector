from collections.abc import Sequence, Callable
from os.path import getsize
from abc import ABC, abstractmethod
from dataclasses import dataclass, field


@dataclass(order=True)
class ExtraSequenceCoords:
    sort_index: int = field(init=False, repr=False)
    start: int
    end: int

    def __post_init__(self):
        self.sort_index = self.start


class ExtraSequenceFilterBase(ABC):
    """Base class for filters."""

    @abstractmethod
    def refresh(self) -> None:
        """Update filter attrs for starting check new sequence"""
        pass

    @abstractmethod
    def filter(self, char: int, index: int) -> ExtraSequenceCoords | None:
        """Return ExtraSequenceCoords if char in ExtraSequence else None"""
        pass


class IntervalSequenceFilter(ExtraSequenceFilterBase):
    """Filter interval sequence.

    Parameters:
        start_bytes (bytes): Bytes, starting from which the sequence is
         considered extra
        end_bytes (bytes): Bytes after which the sequence is no longer extra
        end_condition (Callable[[int], bool]): Condition that must return True
         for the check to start at end_bytes

    Examples:
        IntervalSequenceFilter(start_bytes='#', end_bytes='\n')

         |          |                                    |          |
         #some_text\n some_text\n some_text\n some_text  #some_text\n


        IntervalSequenceFilter(start_bytes='/*', end_bytes='*/')

        |                            |
        /* abc*abc * / some * text */
    """
    start_bytes: bytes
    end_bytes: bytes
    end_condition: Callable[[int], bool]

    match_start_index: int
    match_end_index: int

    def refresh(self) -> None:
        self.match_start_index = 0
        self.match_end_index = 0

    def __init__(self, start_bytes: bytes, end_bytes: bytes,
                 end_condition: Callable[[int], bool] = lambda x: True):
        self.start_bytes = start_bytes
        self.end_bytes = end_bytes
        self.end_condition = end_condition
        self.refresh()

    def filter(self, char: int, index: int) -> ExtraSequenceCoords | None:
        if self.match_start_index < len(self.start_bytes):
            if char == self.start_bytes[self.match_start_index]:
                self.match_start_index += 1
                if self.match_start_index == len(self.start_bytes):
                    return ExtraSequenceCoords(
                        index - len(self.start_bytes) + 1, index
                    )
                return
            else:
                self.match_start_index = 0
                return

        if (self.end_condition(char) and
                char == self.end_bytes[self.match_end_index]):
            self.match_end_index += 1
            if self.match_start_index == len(self.start_bytes):
                self.match_start_index = 0
                self.match_end_index = 0
        else:
            self.match_end_index = 0

        return ExtraSequenceCoords(
            index, index
        )


class SequenceEqualsFilter(ExtraSequenceFilterBase):
    sequence: bytes
    match_index: int

    def refresh(self) -> None:
        self.match_index = 0

    def __init__(self, start_bytes: bytes):
        self.sequence = start_bytes
        self.refresh()

    def filter(self, char: int, index: int) -> ExtraSequenceCoords | None:
        if char == self.sequence[self.match_index]:
            self.match_index += 1
            if self.match_index == len(self.sequence):
                self.match_index = 0
                return ExtraSequenceCoords(
                    index - len(self.sequence) + 1, index
                )
        else:
            self.match_index = 0


class StreamHandler:
    filters: Sequence[ExtraSequenceFilterBase]
    data: bytearray

    @staticmethod
    def compress_coordinates(coords_list: list[ExtraSequenceCoords]) \
            -> list[ExtraSequenceCoords]:
        """Combine coordinates.

        Example:
            [ExtraSequenceCoords(1, 5), ExtraSequenceCoords(5, 10)] ->
            [ExtraSequenceCoords(1, 10)]
        """
        if len(coords_list) == 0:
            return []

        coords_list.sort()
        compressed_coords = []
        start, end = coords_list[0].start, coords_list[0].end
        for coord in coords_list:
            if coord.start <= end + 1:
                end = max(end, coord.end)
            else:
                compressed_coords.append(
                    ExtraSequenceCoords(start, end)
                )
                start = coord.start
                end = coord.end
        compressed_coords.append(
            ExtraSequenceCoords(start, end)
        )

        return compressed_coords

    def set_filters(self, *filters):
        self.filters = filters

    def refresh_filters(self) -> None:
        for f in self.filters:
            f.refresh()

    def get_bad_sequence_coords(self, char: int, index: int) \
            -> list[ExtraSequenceCoords]:
        """Get result of checking all filters."""
        coords_list = []
        for f in self.filters:
            if (coord := f.filter(char, index)) is not None:
                coords_list.append(coord)
        return coords_list

    def handle_file(self, in_file, output) -> None:
        """Get in_file data, filter and write to output."""
        self.data = bytearray(getsize(in_file.name))
        seq_coords: list[ExtraSequenceCoords] = []
        self.refresh_filters()

        for i in range(len(self.data)):
            ch = in_file.read(1)
            self.data[i] = ord(ch)
            seq_coords += self.get_bad_sequence_coords(ch[0], i)

        seq_coords = self.compress_coordinates(seq_coords)
        i, seq_coords_index = 0, 0
        while i < len(self.data):
            if (seq_coords_index < len(seq_coords) and
                    seq_coords[seq_coords_index].start <= i <= seq_coords[
                        seq_coords_index].end):
                i = seq_coords[seq_coords_index].end + 1
                seq_coords_index += 1
                continue

            output.write(self.data[i].to_bytes())
            i += 1
