import ctypes
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
    _PyDictViewObject, PyAsyncGenObject, PyCodeObject, PyCellObject, \
    PyCoroObject, PyMethodObject, PyInstanceMethodObject, _object, _traceback

UsedDataType: TypeAlias = (
        PyByteArrayObject | PyBytesObject | PyUnicodeObject | PyFloatObject |
        PyComplexObject | PyMemoryViewObject | PyTupleObject | PyListObject |
        PyDictObject | PySetObject | PySliceObject | PyGenObject |
        PyFunctionObject | _longobject | _typeobject | PyBaseExceptionObject |
        PyBaseExceptionGroupObject | PySyntaxErrorObject |
        PyImportErrorObject | PyUnicodeErrorObject | PySystemExitObject |
        PyOSErrorObject | PyStopIterationObject | PyNameErrorObject |
        PyAttributeErrorObject | _PyDictViewObject | PyAsyncGenObject |
        PyCodeObject | PyCellObject | PyCoroObject | PyMethodObject |
        PyInstanceMethodObject | _traceback
)


class Binder:
    cls_to_datatype: ClassVar[dict[Any, DataTypeMeta]] = {}
    type_address_to_cls: ClassVar[dict[int, Any]] = {}

    @classmethod
    def make_bind(cls, obj: Any, datatype: DataTypeMeta) -> None:
        """Save the relation between Python type and core wrap class."""
        cls.cls_to_datatype[type(obj)] = datatype
        address = _object(ptr=id(obj)).ob_type.ptr_for_unpacking
        cls.type_address_to_cls[address] = type(obj)

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

        PyInstanceMethod_New = ctypes.pythonapi.PyInstanceMethod_New
        PyInstanceMethod_New.argtypes = (ctypes.py_object,)
        PyInstanceMethod_New.restype = ctypes.py_object
        cls.make_bind(PyInstanceMethod_New(sum), PyInstanceMethodObject)

        cls.make_bind(Binder().bind, PyMethodObject)
        cls.make_bind((lambda _: _).__code__, PyCodeObject)

        def get_func():
            a = 0

            def get():
                return a

            return get

        cls.make_bind(get_func().__closure__[0], PyCellObject)

        async def coro():
            pass

        cls.make_bind(coro(), PyCoroObject)

        async def async_generator():
            for i in range(10):
                yield i

        cls.make_bind(async_generator(), PyAsyncGenObject)

        try:
            1 / 0
        except ZeroDivisionError as e:
            cls.make_bind(e.__traceback__, _traceback)

    def __init__(self) -> None:
        if not self.__class__.cls_to_datatype:
            self.__class__.make_binds()

    @staticmethod
    def bind(obj: Any) -> UsedDataType:
        """Return the wrapper object."""
        return Binder.cls_to_datatype[type(obj)](ptr=id(obj))
