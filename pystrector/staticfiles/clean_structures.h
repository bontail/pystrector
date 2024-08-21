#include <inttypes.h>
#include <unistd.h>



struct PyObject {
    ssize_t ob_refcnt;
    struct PyTypeObject *ob_type;
};



struct PyVarObject {
    struct PyObject ob_base;
    ssize_t ob_size;
};



struct PyNumberMethods {
    void * nb_add;
    void * nb_subtract;
    void * nb_multiply;
    void * nb_remainder;
    void * nb_divmod;
    void * nb_power;
    void * nb_negative;
    void * nb_positive;
    void * nb_absolute;
    void * nb_bool;
    void * nb_invert;
    void * nb_lshift;
    void * nb_rshift;
    void * nb_and;
    void * nb_xor;
    void * nb_or;
    void * nb_int;
    void *nb_reserved;
    void * nb_float;
    void * nb_inplace_add;
    void * nb_inplace_subtract;
    void * nb_inplace_multiply;
    void * nb_inplace_remainder;
    void * nb_inplace_power;
    void * nb_inplace_lshift;
    void * nb_inplace_rshift;
    void * nb_inplace_and;
    void * nb_inplace_xor;
    void * nb_inplace_or;
    void * nb_floor_divide;
    void * nb_true_divide;
    void * nb_inplace_floor_divide;
    void * nb_inplace_true_divide;
    void * nb_index;
    void * nb_matrix_multiply;
    void * nb_inplace_matrix_multiply;
};



struct PySequenceMethods {
    void * sq_length;
    void * sq_concat;
    void * sq_repeat;
    void * sq_item;
    void *was_sq_slice;
    void * sq_ass_item;
    void *was_sq_ass_slice;
    void * sq_contains;
    void * sq_inplace_concat;
    void * sq_inplace_repeat;
};



struct PyMappingMethods {
    void * mp_length;
    void * mp_subscript;
    void * mp_ass_subscript;
};



struct PyAsyncMethods {
    void * am_await;
    void * am_aiter;
    void * am_anext;
    void * am_send;
};



struct PyBufferProcs {
    void * bf_getbuffer;
    void * bf_releasebuffer;
};



struct PyMethodDef {
    char *ml_name;
    void * ml_meth;
    int ml_flags;
    char *ml_doc;
};



struct PyGetSetDef {
    char *name;
    void * get;
    void * set;
    char *doc;
    void *closure;
};



struct PyMemberDef {
    char *name;
    int type;
    ssize_t offset;
    int flags;
    char *doc;
};



struct PyTypeObject {
    struct PyVarObject ob_base;
    char *tp_name;
    ssize_t tp_basicsize;
    ssize_t tp_itemsize;
    void *tp_dealloc;
    ssize_t tp_vectorcall_offset;
    void *tp_getattr;
    void *tp_setattr;
    struct PyAsyncMethods *tp_as_async;
    void *tp_repr;
    struct PyNumberMethods *tp_as_number;
    struct PySequenceMethods *tp_as_sequence;
    struct PyMappingMethods *tp_as_mapping;
    void *tp_hash;
    void *tp_call;
    void *tp_str;
    void *tp_getattro;
    void *tp_setattro;
    struct PyBufferProcs *tp_as_buffer;
    unsigned long tp_flags;
    char *tp_doc;
    void *tp_traverse;
    void *tp_clear;
    void *tp_richcompare;
    ssize_ttp_weaklistoffset;
    void *tp_iter;
    void *tp_iternext;
    struct PyMethodDef *tp_methods;
    struct PyMemberDef *tp_members;
    struct PyGetSetDef *tp_getset;
    struct PyTypeObject *tp_base;
    struct PyObject *tp_dict;
    void * tp_descr_get;
    void * tp_descr_set;
    ssize_t tp_dictoffset;
    void * tp_init;
    void * tp_alloc;
    void * tp_new;
    void * tp_free;
    void * tp_is_gc;
    struct PyObject *tp_bases;
    struct PyObject *tp_mro;
    struct PyObject *tp_cache;
    void *tp_subclasses;
    struct PyObject *tp_weaklist;
    void * tp_del;
    unsigned int tp_version_tag;
    void * tp_finalize;
    void * tp_vectorcall;
    unsigned char tp_watched;
};



struct _PyLongValue {
    uintptr_t lv_tag;
    uint32_t ob_digit[1];
};



struct PyLongObject {
    struct PyObject ob_base;
    struct _PyLongValue long_value;
};



struct PyFloatObject {
    struct PyObject ob_base;
    double ob_fval;
};



struct Py_complex {
    double real;
    double imag;
};



struct PyComplexObject {
    struct PyObject ob_base;
    struct Py_complex cval;
};



struct PyASCIIObject_state {
    char null[4];
};



struct PyASCIIObject {
    struct PyObject ob_base;
    ssize_t length;
    ssize_t hash;
    struct PyASCIIObject_state state;
};



struct PyCompactUnicodeObject {
    struct PyASCIIObject _base;
    ssize_t utf8_length;
    char *utf8;
};



union PyUnicodeObject_data {
    void *any;
    uint8_t *latin1;
    uint16_t *ucs2;
    uint32_t *ucs4;
};



struct PyUnicodeObject {
    struct PyCompactUnicodeObject _base;
    union PyUnicodeObject_data data;
};



struct PyTupleObject {
    struct PyVarObject ob_base;
    struct PyObject *ob_item[1];
};



struct PyListObject {
    struct PyVarObject ob_base;
    struct PyObject **ob_item;
    ssize_t allocated;
};



struct PyDictObject {
    struct PyObject ob_base;
    ssize_t ma_used;
    struct _dictkeysobject *ma_keys;
    struct _dictvalues *ma_values;
};



struct setentry {
    struct PyObject *key;
    ssize_t hash;
};



struct PySetObject {
    struct PyObject ob_base;
    ssize_t fill;
    ssize_t used;
    ssize_t mask;
    struct setentry *table;
    ssize_t hash;
    ssize_t finger;
    struct setentry smalltable[8];
    struct PyObject *weakreflist;
};



struct PyByteArrayObject {
    struct PyVarObject ob_base;
    ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;
    ssize_t ob_exports;
};



struct PyBytesObject {
    struct PyVarObject ob_base;
    ssize_t ob_shash;
    char ob_sval[1];
};



struct Py_buffer {
    void *buf;
    struct PyObject *obj;
    ssize_t len;
    ssize_t itemsize;
    int readonly;
    int ndim;
    char *format;
    ssize_t *shape;
    ssize_t *strides;
    ssize_t *suboffsets;
    void *internal;
};



struct _PyManagedBufferObject {
    struct PyObject ob_base;
    int flags;
    ssize_t exports;
    struct Py_buffer master;
};



struct PyMemoryViewObject {
    struct PyVarObject ob_base;
    struct _PyManagedBufferObject *mbuf;
    ssize_t hash;
    int flags;
    ssize_t exports;
    struct Py_buffer view;
    struct PyObject *weakreflist;
    ssize_t ob_array[1];
};



struct PyFunctionObject {
    struct PyObject ob_base;
    struct PyObject *func_globals;
    struct PyObject *func_builtins;
    struct PyObject *func_name;
    struct PyObject *func_qualname;
    struct PyObject *func_code;
    struct PyObject *func_defaults;
    struct PyObject *func_kwdefaults;
    struct PyObject *func_closure;
    struct PyObject *func_doc;
    struct PyObject *func_dict;
    struct PyObject *func_weakreflist;
    struct PyObject *func_module;
    struct PyObject *func_annotations;
    struct PyObject *func_typeparams;
    void * vectorcall;
    uint32_t func_version;
};



struct PySliceObject {
    struct PyObject ob_base;
    struct PyObject *start;
    struct PyObject *stop;
    struct PyObject *step;
};


struct _PyErr_StackItem {
    struct PyObject *exc_value;
    struct _PyErr_StackItem *previous_item;
};



struct PyGenObject {
    struct PyObject ob_base;
    struct PyObject *gi_weakreflist;
    struct PyObject *gi_name;
    struct PyObject *gi_qualname;
    struct _PyErr_StackItem gi_exc_state;
    struct PyObject *gi_origin_or_finalizer;
    char gi_hooks_inited;
    char gi_closed;
    char gi_running_async;
    int8_t gi_frame_state;
    struct PyObject *gi_iframe[1];
};