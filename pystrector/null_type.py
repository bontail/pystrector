

class NullType:
    """
        Singleton class to represent null type.
        It is needed because 'None' can be a valid value.
    """
    instance: 'NullType'

    def __new__(cls):
        if not hasattr(cls, 'instance'):
            cls.instance = super(NullType, cls).__new__(cls)
        return cls.instance


NullValue = NullType()
