import os
import tempfile

INCLUDE_DIR_PATH = "cpython/Include/"
MAIN_FILE = "Python.h"
CORE_DIR = "internal"
# stripping the #include lines below loses the macros the headers get
# from each other, so the ones used as array bounds have to be restated
# here. The generator raises on an unknown constant rather than
# defaulting it to 0, which would shift every field after the array.
HEADER = ('\n#define _PY_NSMALLPOSINTS 257\n'
          '#define _PY_NSMALLNEGINTS 5\n' +
          '#define FUNC_MAX_WATCHERS 8\n' +  # pycore_function.h
          '#define PY_MONITORING_TOOL_IDS 8\n' +  # pycore_instruments.h
          '#define __typeof__(...) void\n' +
          '#define _Py_atomic_load_relaxed(...) (1)\n' +
          '#define bool char\n' +
          '#define __auto_type void\n')

if not os.path.isdir(INCLUDE_DIR_PATH + CORE_DIR):
    print(f"Dir {INCLUDE_DIR_PATH + CORE_DIR} not found.")
    exit(1)

for filename in os.listdir(INCLUDE_DIR_PATH + CORE_DIR):
    file_path = os.path.join(INCLUDE_DIR_PATH + CORE_DIR, filename)
    if os.path.isfile(file_path):
        with tempfile.NamedTemporaryFile(delete=False) as tmp_file:
            with open(file_path, 'r') as f:
                for line in f:
                    if "#include" not in line:
                        tmp_file.write(line.encode())
                tmp_file.write(HEADER.encode())

        os.replace(tmp_file.name, file_path)

with open(INCLUDE_DIR_PATH + MAIN_FILE, 'a') as main_file:
    main_file.write("\n")
    main_file.write("#define Py_BUILD_CORE 1\n")

filenames = os.listdir(INCLUDE_DIR_PATH + CORE_DIR)

# some files must be inserted first because they contain structures that
# others use
first_names = ["pycore_condvar.h", "pycore_atomic.h", "pycore_pyarena.h",
               "pycore_runtime.h", "pycore_hamt.h", "pycore_moduleobject.h",
               "pycore_context.h", "pycore_ceval_state.h"]

for name in reversed(first_names):
    filenames.remove(name)
    filenames.insert(0, name)

for filename in filenames:
    if filename.endswith('.h'):
        include_line = f'#include "{CORE_DIR}/{filename}"\n'
        with open(INCLUDE_DIR_PATH + MAIN_FILE, 'a') as main_file:
            main_file.write(include_line)
