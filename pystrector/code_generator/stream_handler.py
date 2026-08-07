from collections import deque
from collections.abc import Sequence, Callable
from abc import ABC, abstractmethod
from dataclasses import dataclass, field


def is_identifier_char(char: int | None) -> bool:
    """Whether char can appear inside a C identifier."""
    if char is None:
        return False

    return chr(char).isalnum() or char == ord('_')


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
    word_boundary: bool

    match_start_index: int
    match_end_index: int

    def refresh(self) -> None:
        self.match_start_index = 0
        self.match_end_index = 0
        # the last len(start_bytes) + 1 chars, so that a completed match
        # can look at the char right before it
        self.window: deque[int] = deque(maxlen=len(self.start_bytes) + 1)

    def __init__(self, start_bytes: bytes, end_bytes: bytes,
                 end_condition: Callable[[int], bool] = lambda x: True,
                 word_boundary: bool = False):
        self.start_bytes = start_bytes
        self.end_bytes = end_bytes
        self.end_condition = end_condition
        # when set, the start sequence only matches as a whole
        # identifier: "static_assert" must not match inside
        # "_static_assert"
        self.word_boundary = word_boundary
        self.refresh()

    def char_before_match(self) -> int | None:
        """The char preceding a match that just completed, if any."""
        if len(self.window) <= len(self.start_bytes):
            return None

        return self.window[0]

    def filter(self, char: int, index: int) -> ExtraSequenceCoords | None:
        if self.match_start_index < len(self.start_bytes):
            self.window.append(char)

            if char != self.start_bytes[self.match_start_index]:
                # a partial match broke off; the current char may still
                # open a new one ("//*" must not be read as "/*")
                self.match_start_index = 0

            if char == self.start_bytes[self.match_start_index]:
                self.match_start_index += 1
                if self.match_start_index == len(self.start_bytes):
                    if self.word_boundary and is_identifier_char(
                            self.char_before_match()):
                        self.match_start_index = 0
                        return None

                    return ExtraSequenceCoords(
                        index - len(self.start_bytes) + 1, index
                    )

            return None

        self.window.append(char)
        if (self.end_condition(char) and
                char == self.end_bytes[self.match_end_index]):
            self.match_end_index += 1
            # the interval closes only once the whole end sequence matched
            if self.match_end_index == len(self.end_bytes):
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
    word_boundary: bool

    def refresh(self) -> None:
        self.match_index = 0
        self.window: deque[int] = deque(maxlen=len(self.sequence) + 1)

    def __init__(self, start_bytes: bytes, word_boundary: bool = False):
        self.sequence = start_bytes
        self.word_boundary = word_boundary
        self.refresh()

    def filter(self, char: int, index: int) -> ExtraSequenceCoords | None:
        self.window.append(char)
        if char == self.sequence[self.match_index]:
            self.match_index += 1
            if self.match_index == len(self.sequence):
                self.match_index = 0
                if self.word_boundary and len(self.window) > len(
                        self.sequence) and is_identifier_char(self.window[0]):
                    return None

                return ExtraSequenceCoords(
                    index - len(self.sequence) + 1, index
                )
        else:
            self.match_index = 0

        return None


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
        self.data = bytearray(in_file.read())
        seq_coords: list[ExtraSequenceCoords] = []
        self.refresh_filters()

        for i, ch in enumerate(self.data):
            seq_coords += self.get_bad_sequence_coords(ch, i)

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
