from typing import Any, TypeAlias, ClassVar
from pystrector.base_datatypes import DataTypeMeta
from pystrector.core_datatypes import PyByteArrayObject, \
    PyBytesObject, PyUnicodeObject, PyFloatObject, PyComplexObject, \
    PyMemoryViewObject, PyTupleObject, PyListObject, PyDictObject, \
    PySetObject, PySliceObject, PyGenObject, PyFunctionObject, \
    _longobject, _typeobject, PyBaseExceptionObject, \
    PyBaseExceptionGroupObject, PySyntaxErrorObject, PyImportErrorObject, \
    PyUnicodeErrorObject, PySystemExitObject, PyOSErrorObject, \
    PyStopIterationObject, PyNameErrorObject, PyAttributeErrorObject, \
    _PyDictViewObject, PyAsyncGenObject

UsedDataType: TypeAlias = (
        PyByteArrayObject | PyBytesObject | PyUnicodeObject | PyFloatObject |
        PyComplexObject | PyMemoryViewObject | PyTupleObject | PyListObject |
        PyDictObject | PySetObject | PySliceObject | PyGenObject |
        PyFunctionObject | _longobject | _typeobject | PyBaseExceptionObject |
        PyBaseExceptionGroupObject | PySyntaxErrorObject |
        PyImportErrorObject | PyUnicodeErrorObject | PySystemExitObject |
        PyOSErrorObject | PyStopIterationObject | PyNameErrorObject |
        PyAttributeErrorObject | _PyDictViewObject | PyAsyncGenObject
)


class Binder:
    cls_to_datatype: ClassVar[dict[Any, DataTypeMeta]] = {}

    @classmethod
    def make_bind(cls, obj: Any, datatype: DataTypeMeta) -> None:
        """Save the relation between Python type and core wrap class."""
        cls.cls_to_datatype[type(obj)] = datatype

    @classmethod
    def make_binds(cls) -> None:
        """Save all known bindings."""
        cls.make_bind(bytearray(1), PyByteArrayObject)
        cls.make_bind(b'', PyBytesObject)
        cls.make_bind('some', PyUnicodeObject)
        cls.make_bind(1, _longobject)
        cls.make_bind(1.0, PyFloatObject)
        cls.make_bind(1 + 1j, PyComplexObject)
        cls.make_bind(memoryview(bytearray()), PyMemoryViewObject)
        cls.make_bind(tuple("some"), PyTupleObject)
        cls.make_bind([], PyListObject)
        cls.make_bind({}, PyDictObject)
        cls.make_bind({}.keys(), _PyDictViewObject)
        cls.make_bind(set(), PySetObject)
        cls.make_bind(slice([]), PySliceObject)
        cls.make_bind((None for _ in range(1)), PyGenObject)
        cls.make_bind(lambda _: _, PyFunctionObject)
        cls.make_bind(int, _typeobject)
        cls.make_bind(BaseException(), PyBaseExceptionObject)
        cls.make_bind(BaseExceptionGroup('some', [BaseException()]),
                      PyBaseExceptionGroupObject)
        cls.make_bind(SyntaxError(), PySyntaxErrorObject)
        cls.make_bind(ImportError(), PyImportErrorObject)
        cls.make_bind(UnicodeError(), PyUnicodeErrorObject)
        cls.make_bind(SystemExit(), PySystemExitObject)
        cls.make_bind(SystemError(), PyOSErrorObject)
        cls.make_bind(StopIteration(), PyStopIterationObject)
        cls.make_bind(NameError(), PyNameErrorObject)
        cls.make_bind(AttributeError(), PyAttributeErrorObject)

        # TODO: PyMethodObject or PyInstanceMethodObject
        # TODO: PyCodeObject
        # TODO: PyCellObject
        # TODO: PyCoroObject
        async def async_generator():
            for i in range(10):
                yield i

        cls.make_bind(async_generator(), PyAsyncGenObject)
        # TODO: PyDescrObject
        # TODO: PyMethodDescrObject
        # TODO: PyMemberDescrObject
        # TODO: PyGetSetDescrObject
        # TODO: PyWrapperDescrObject

    def __init__(self) -> None:
        if not self.__class__.cls_to_datatype:
            self.__class__.make_binds()

    @staticmethod
    def bind(obj: Any) -> UsedDataType:
        """Return the wrapper object."""
        return Binder.cls_to_datatype[type(obj)](ptr=id(obj))


if __name__ == '__main__':
    binder = Binder()
    reflector = binder.bind(1)
    reflector.long_value.lv_tag = bytearray(1)