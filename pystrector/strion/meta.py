
class StrionMeta(type):
    """
    (Str)uct + Un(ion) Metaclass for Strion classes.

    Required metaclass for Strion classes.
    """

    def __repr__(self) -> str:
        return f"Strion {self.__name__} ({hex(id(self))})"

    @property
    def field_names(self) -> list[str]:
        """ :return list of attribute names that are descriptors """
        cls_vars = list(self.__dict__.values())
        return list(map(lambda x: x.name, filter(lambda x: isinstance(x, StrionFieldDescriptor), cls_vars)))

    @property
    def strion_size(self) -> int:
        """ :return dynamically calculated strion size """
        max_offset = 0
        for field_name in self.field_names:
            max_offset = max(max_offset, self.__dict__[field_name].offset + self.__dict__[field_name].size)
        return max_offset


from .field import StrionFieldDescriptor
