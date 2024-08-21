#include <Python.h>



PyObject *_get_value(unsigned char *pointer, long long size){
    unsigned long long res = 0;
    pointer += size - 1;
    for (;size > 0; --size){
        res <<= 8;
        res += *pointer;
        pointer--;
    }
    return PyLong_FromUnsignedLongLong(res);
};



static PyObject *get_value_from_address(PyObject *module, PyObject *const *args, Py_ssize_t nargs) {
    if (!_PyArg_CheckPositional("get_value_from_address", nargs, 2, 2)) {
        return NULL;
    }
    PyObject *PyId = args[0];
    PyObject *PySize = args[1];
    unsigned long long id = PyLong_AsUnsignedLongLong(PyId);
    unsigned char *pointer = (void *)0;
    pointer += id;
    unsigned long long size = PyLong_AsUnsignedLongLong(PySize);
    return _get_value(pointer, size);
};




static PyMethodDef PyStrectorMethods[] = {
    {"get_value_from_address", _PyCFunction_CAST(get_value_from_address), METH_FASTCALL, "Get bytes from address."},
    {NULL, NULL, 0, NULL}
};



static struct PyModuleDef PyStrectorModule = {
    PyModuleDef_HEAD_INIT,
    "PyStrector module",
    "A module containing methods to analyzing python objects.",
    -1, // global state
    PyStrectorMethods
};



PyMODINIT_FUNC PyInit_pystrector_utils() {
    return PyModule_Create(&PyStrectorModule);
};
