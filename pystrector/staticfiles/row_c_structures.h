

struct PyMethodObject {
    struct PyObject ob_base;
    struct PyObject *im_func;
    struct PyObject *im_self;
    struct PyObject *im_weakreflist;
    void * vectorcall;
};


typedef struct _PyInterpreterFrame {
    struct PyCodeObject *f_code;
    struct _PyInterpreterFrame *previous;
    struct PyObject *f_funcobj;
    struct PyObject *f_globals;
    struct PyObject *f_builtins;
    struct PyObject *f_locals;
    struct PyFrameObject *frame_obj;
    union _Py_CODEUNIT *prev_instr;
    int stacktop;
    uint16_t return_offset;
    char owner;
    struct PyObject *localsplus[1];
} _PyInterpreterFrame;


struct PyFrameObject {
    struct PyObject ob_base;
    struct PyFrameObject *f_back;
    struct _PyInterpreterFrame *f_frame;
    struct PyObject *f_trace;
    int f_lineno;
    char f_trace_lines;
    char f_trace_opcodes;
    char f_fast_as_locals;
    struct PyObject *_f_frame_data[1];
};


enum PyMemAllocatorDomain {
    PYMEM_DOMAIN_RAW = 0,
    PYMEM_DOMAIN_MEM = 1,
    PYMEM_DOMAIN_OBJ = 2,
};


enum PyMemAllocatorName {
    PYMEM_ALLOCATOR_NOT_SET = 0,
    PYMEM_ALLOCATOR_DEFAULT = 1,
    PYMEM_ALLOCATOR_DEBUG = 2,
    PYMEM_ALLOCATOR_MALLOC = 3,
    PYMEM_ALLOCATOR_MALLOC_DEBUG = 4,
    PYMEM_ALLOCATOR_PYMALLOC = 5,
    PYMEM_ALLOCATOR_PYMALLOC_DEBUG = 6,
};



struct PyType_Slot {
    int slot;
    void *pfunc;
};


struct PyType_Spec {
    char *name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    struct PyType_Slot *slots;
};


enum PySendResult {
    PYGEN_RETURN = 0,
    PYGEN_ERROR = -1,
    PYGEN_NEXT = 1,
};


struct _Py_Identifier {
    char *string;
    ssize_t index;
};



struct _specialization_cache {
    struct PyObject *getitem;
    uint32_t getitem_version;
};


struct _heaptypeobject {
    struct PyTypeObject ht_type;
    struct PyAsyncMethods as_async;
    struct PyNumberMethods as_number;
    struct PyMappingMethods as_mapping;
    struct PySequenceMethods as_sequence;
    struct PyBufferProcs as_buffer;
    struct PyObject *ht_name;
    struct PyObject *ht_slots;
    struct PyObject *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;
    struct PyObject *ht_module;
    char *_ht_tpname;
    struct _specialization_cache _spec_cache;
}; // PyHeapTypeObject



struct _PyBytesWriter {
    struct PyObject *buffer;
    ssize_t allocated;
    ssize_t min_size;
    int use_bytearray;
    int overallocate;
    int use_small_buffer;
    char small_buffer[512];
};


enum PyUnicode_Kind {
    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};


struct _PyUnicodeWriter {
    struct PyObject *buffer;
    void *data;
    int kind;
    uint32_t maxchar;
    ssize_t size;
    ssize_t pos;
    ssize_t min_length;
    uint32_t min_char;
    unsigned char overallocate;
    unsigned char readonly;
};


enum PyStatus__type {
    _PyStatus_TYPE_OK = 0,
    _PyStatus_TYPE_ERROR = 1,
    _PyStatus_TYPE_EXIT = 2
};

struct PyStatus {
    enum PyStatus__type _type;
    char *func;
    char *err_msg;
    int exitcode;
};


struct PyWideStringList {
    ssize_t length;
    wchar_t **items;
};


enum PyGILState_STATE {
    PyGILState_LOCKED = 0,
    PyGILState_UNLOCKED = 1,
};


struct _PyCFrame {
    struct _PyInterpreterFrame *current_frame;
    struct _PyCFrame *previous;
};


struct _PyStackChunk {
    struct _PyStackChunk *previous;
    size_t size;
    size_t top;
    struct PyObject *data[1];
};


struct _py_trashcan {
    int delete_nesting;
    struct PyObject *delete_later;
};


struct _ts__status {
    char null[4];
};



struct _ts {
    struct PyThreadState *prev;
    struct PyThreadState *next;
    void * interp;
    struct _ts__status _status;
    int py_recursion_remaining;
    int py_recursion_limit;
    int c_recursion_remaining;
    int recursion_headroom;
    int tracing;
    int what_event;
    struct _PyCFrame *cframe;
    void * c_profilefunc;
    void * c_tracefunc;
    struct PyObject *c_profileobj;
    struct PyObject *c_traceobj;
    struct PyObject *current_exception;
    struct _PyErr_StackItem *exc_info;
    struct PyObject *dict;
    int gilstate_counter;
    struct PyObject *async_exc;
    unsigned long thread_id;
    unsigned long native_thread_id;
    struct _py_trashcan trash;

    void *on_delete;

    void *on_delete_data;
    int coroutine_origin_tracking_depth;
    struct PyObject *async_gen_firstiter;
    struct PyObject *async_gen_finalizer;
    struct PyObject *context;
    uint64_t context_ver;
    uint64_t id;
    struct _PyStackChunk *datastack_chunk;
    struct PyObject **datastack_top;
    struct PyObject **datastack_limit;
    struct _PyErr_StackItem exc_state;
    struct _PyCFrame root_cframe;
};


struct _xid {
    void *data;
    struct PyObject *obj;
    int64_t interp;
    void * new_object;
    void * free;
};


struct PyBaseExceptionObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
};

struct PyBaseExceptionGroupObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *msg;
    struct PyObject *excs;
};

struct PySyntaxErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *msg;
    struct PyObject *filename;
    struct PyObject *lineno;
    struct PyObject *offset;
    struct PyObject *end_lineno;
    struct PyObject *end_offset;
    struct PyObject *text;
    struct PyObject *print_file_and_line;
};

struct PyImportErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *msg;
    struct PyObject *name;
    struct PyObject *path;
    struct PyObject *name_from;
};

struct PyUnicodeErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *encoding;
    struct PyObject *object;
    ssize_t start;
    ssize_t end;
    struct PyObject *reason;
};

struct PySystemExitObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *code;
};

struct PyOSErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *myerrno;
    struct PyObject *strerror;
    struct PyObject *filename;
    struct PyObject *filename2;
    ssize_t written;
};

struct PyStopIterationObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *value;
};

struct PyNameErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *name;
};

struct PyAttributeErrorObject {
    struct PyObject ob_base;
    struct PyObject *dict;
    struct PyObject *args;
    struct PyObject *notes;
    struct PyObject *traceback;
    struct PyObject *context;
    struct PyObject *cause;
    char suppress_context;
    struct PyObject *obj;
    struct PyObject *name;
};



struct _PyDictViewObject {
    struct PyObject ob_base;
    struct PyDictObject *dv_dict;
};


enum PyDict_WatchEvent {
    PyDict_EVENT_ADDED = 0,
    PyDict_EVENT_MODIFIED = 1,
    PyDict_EVENT_DELETED = 2,
    PyDict_EVENT_CLONED = 3,
    PyDict_EVENT_CLEARED = 4,
    PyDict_EVENT_DEALLOCATED = 5,
};


struct PyCFunctionObject {
    struct PyObject ob_base;
    struct PyMethodDef *m_ml;
    struct PyObject *m_self;
    struct PyObject *m_module;
    struct PyObject *m_weakreflist;
    void * vectorcall;
};


struct PyCMethodObject {
    struct PyCFunctionObject func;
    struct PyTypeObject *mm_class;
};


struct PyModuleDef_Base {
    struct PyObject ob_base;

    void *m_init;

    ssize_t m_index;
    struct PyObject *m_copy;
};


struct PyModuleDef_Slot {
    int slot;
    void *value;
};


struct PyModuleDef {
    struct PyModuleDef_Base m_base;
    char *m_name;
    char *m_doc;
    ssize_t m_size;
    struct PyMethodDef *m_methods;
    struct PyModuleDef_Slot *m_slots;
    void * m_traverse;
    void * m_clear;
    void * m_free;
};


struct PyFrameConstructor {
    struct PyObject *fc_globals;
    struct PyObject *fc_builtins;
    struct PyObject *fc_name;
    struct PyObject *fc_qualname;
    struct PyObject *fc_code;
    struct PyObject *fc_defaults;
    struct PyObject *fc_kwdefaults;
    struct PyObject *fc_closure;
};


enum PyFunction_WatchEvent {
    PyFunction_EVENT_CREATE = 0,
    PyFunction_EVENT_DESTROY = 1,
    PyFunction_EVENT_MODIFY_CODE = 2,
    PyFunction_EVENT_MODIFY_DEFAULTS = 3,
    PyFunction_EVENT_MODIFY_KWDEFAULTS = 4,
};


struct PyInstanceMethodObject {
    struct PyObject ob_base;
    struct PyObject *func;
};


struct _Py_LocalMonitors {
    uint8_t tools[15];
};


struct _Py_GlobalMonitors {
    uint8_t tools[15];
};

struct _Py_CODEUNIT_op {
    uint8_t code;
    uint8_t arg;
};

union _Py_CODEUNIT {
    uint16_t cache;
    struct _Py_CODEUNIT_op op;
};


struct _PyCoCached {
    struct PyObject *_co_code;
    struct PyObject *_co_varnames;
    struct PyObject *_co_cellvars;
    struct PyObject *_co_freevars;
};


struct _PyCoLineInstrumentationData {
    uint8_t original_opcode;
    int8_t line_delta;
};


struct _PyCoMonitoringData {
    struct _Py_LocalMonitors local_monitors;
    struct _Py_LocalMonitors active_monitors;
    uint8_t *tools;
    struct _PyCoLineInstrumentationData *lines;
    uint8_t *line_tools;
    uint8_t *per_instruction_opcodes;
    uint8_t *per_instruction_tools;
};


struct PyCodeObject {
    struct PyVarObject ob_base;
    struct PyObject *co_consts;
    struct PyObject *co_names;
    struct PyObject *co_exceptiontable;
    int co_flags;
    int co_argcount;
    int co_posonlyargcount;
    int co_kwonlyargcount;
    int co_stacksize;
    int co_firstlineno;
    int co_nlocalsplus;
    int co_framesize;
    int co_nlocals;
    int co_ncellvars;
    int co_nfreevars;
    uint32_t co_version;
    struct PyObject *co_localsplusnames;
    struct PyObject *co_localspluskinds;
    struct PyObject *co_filename;
    struct PyObject *co_name;
    struct PyObject *co_qualname;
    struct PyObject *co_linetable;
    struct PyObject *co_weakreflist;
    struct _PyCoCached *_co_cached;
    uint64_t _co_instrumentation_version;
    struct _PyCoMonitoringData *_co_monitoring;
    int _co_firsttraceable;
    void *co_extra;
    char co_code_adaptive[1];
};


enum PyCodeEvent {
    PY_CODE_EVENT_CREATE = 0,
    PY_CODE_EVENT_DESTROY = 1,
};

struct _opaque {
    int computed_line;
    uint8_t *lo_next;
    uint8_t *limit;
};


struct PyCodeAddressRange {
    int ar_start;
    int ar_end;
    int ar_line;
    struct _opaque opaque;
};


enum _PyCodeLocationInfoKind {
    PY_CODE_LOCATION_INFO_SHORT0 = 0,
    PY_CODE_LOCATION_INFO_ONE_LINE0 = 10,
    PY_CODE_LOCATION_INFO_ONE_LINE1 = 11,
    PY_CODE_LOCATION_INFO_ONE_LINE2 = 12,
    PY_CODE_LOCATION_INFO_NO_COLUMNS = 13,
    PY_CODE_LOCATION_INFO_LONG = 14,
    PY_CODE_LOCATION_INFO_NONE = 15
};


struct _PyInterpreterFrame;

struct PyTracebackObject {
    struct PyObject ob_base;
    struct PyTracebackObject *tb_next;
    struct PyFrameObject *tb_frame;
    int tb_lasti;
    int tb_lineno;
};



struct PyCellObject {
    struct PyObject ob_base;
    struct PyObject *ob_ref;
};



struct PyCoroObject {
    struct PyObject ob_base;
    struct PyObject *cr_weakreflist;
    struct PyObject *cr_name;
    struct PyObject *cr_qualname;
    struct _PyErr_StackItem cr_exc_state;
    struct PyObject *cr_origin_or_finalizer;
    char cr_hooks_inited;
    char cr_closed;
    char cr_running_async;
    int8_t cr_frame_state;
    struct PyObject *cr_iframe[1];
};


struct PyAsyncGenObject {
    struct PyObject ob_base;
    struct PyObject *ag_weakreflist;
    struct PyObject *ag_name;
    struct PyObject *ag_qualname;
    struct _PyErr_StackItem ag_exc_state;
    struct PyObject *ag_origin_or_finalizer;
    char ag_hooks_inited;
    char ag_closed;
    char ag_running_async;
    int8_t ag_frame_state;
    struct PyObject *ag_iframe[1];
};


struct wrapperbase {
    char *name;
    int offset;
    void *function;
    void * wrapper;
    char *doc;
    int flags;
    struct PyObject *name_strobj;
};


struct PyDescrObject {
    struct PyObject ob_base;
    struct PyTypeObject *d_type;
    struct PyObject *d_name;
    struct PyObject *d_qualname;
};


struct PyMethodDescrObject {
    struct PyDescrObject d_common;
    struct PyMethodDef *d_method;
    void * vectorcall;
};


struct PyMemberDescrObject {
    struct PyDescrObject d_common;
    struct PyMemberDef *d_member;
};


struct PyGetSetDescrObject {
    struct PyDescrObject d_common;
    struct PyGetSetDef *d_getset;
};


struct PyWrapperDescrObject {
    struct PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
};


struct PyWeakReference {
    struct PyObject ob_base;
    struct PyObject *wr_object;
    struct PyObject *wr_callback;
    ssize_t hash;
    struct PyWeakReference *wr_prev;
    struct PyWeakReference *wr_next;
    void * vectorcall;
};


struct PyStructSequence_Field {
    char *name;
    char *doc;
};


struct PyStructSequence_Desc {
    char *name;
    char *doc;
    struct PyStructSequence_Field *fields;
    int n_in_sequence;
};


enum _PyTime_round_t {
    _PyTime_ROUND_FLOOR = 0,
    _PyTime_ROUND_CEILING = 1,
    _PyTime_ROUND_HALF_EVEN = 2,
    _PyTime_ROUND_UP = 3,
    _PyTime_ROUND_TIMEOUT = 3
};


struct _Py_clock_info_t {
    char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
};


enum PyLockStatus {
    PY_LOCK_FAILURE = 0,
    PY_LOCK_ACQUIRED = 1,
    PY_LOCK_INTR = 2,
};


struct sched_param {
    int sched_priority;
    char __opaque[4];
};


struct _Py_tss_t {
    int _is_initialized;
    int64_t _key;
};

struct _PyArg_Parser {
    int initialized;
    char *format;
    char **keywords;
    char *fname;
    char *custom_msg;
    int pos;
    int min;
    int max;
    struct PyObject *kwtuple;
    struct _PyArg_Parser *next;
};


struct PyCompilerFlags {
    int cf_flags;
    int cf_feature_version;
};


struct _PyCompilerSrcLocation {
    int lineno;
    int end_lineno;
    int col_offset;
    int end_col_offset;
};


struct PyFutureFeatures {
    int ff_features;
    struct _PyCompilerSrcLocation ff_location;
};


struct PyInterpreterConfig {
    int use_main_obmalloc;
    int allow_fork;
    int allow_exec;
    int allow_threads;
    int allow_daemon_threads;
    int check_multi_interp_extensions;
    int gil;
};


struct PerfMapState {
    void * perf_map;
    void * map_lock;
};


struct _inittab {
    char *name;
    void * initfunc;
};

struct _frozen {
    char *name;
    unsigned char *code;
    int size;
    int is_package;
    void * get_code;
};