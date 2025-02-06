# add argument python-version=<some version>

update-python-source:
	git clone -b $(python-version) --single-branch https://github.com/python/cpython.git
	cd cpython && ./configure
	cd cpython/Include && cp ../pyconfig.h ./pyconfig.h
	cd cpython/Include && sed -i '' '1s/^/#define sizeof_def___int32_t 4\n#define sizeof_def_size_t 8\n#define sizeof_a(type) sizeof_def_##type\n#define sizeof(type) sizeof_a(type)\n/' Python.h
	gcc-14 -E ./cpython/Include/Python.h -std=c99 > ./pystrector/code_generator/staticfiles/python_structures.c
	rm -rf cpython/



generate-core-datatypes: update-python-source
	export PYTHONPATH="${printenv PYTHONPATH}:${shell pwd}" && cd ./pystrector/code_generator && poetry run python3 generate_code.py