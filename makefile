# add argument python-version=<some version>
# override the preprocessor with cc=<some gcc>, it must be a real gcc:
# clang emits blocks and other extensions pycparser can't read
cc ?= gcc-14
# stubs for SDK headers gcc expects but does not ship, see stubs/
stubs = pystrector/code_generator/stubs

update-python-source:
	rm -rf cpython/
	git clone -b $(python-version) --single-branch --depth 1 https://github.com/python/cpython.git
	cd cpython && ./configure
	cd cpython/Include && cp ../pyconfig.h ./pyconfig.h
	uv run python prepare_source_code.py
	$(cc) -E -I$(stubs) ./cpython/Include/Python.h -std=c99 > ./python_structures.c
	rm -rf cpython/



generate-core-datatypes:
	uv run python3 -m pystrector.code_generator.generate_code python_structures.c core_datatypes.py
	mv core_datatypes.py pystrector/core_datatypes.py
	rm python_structures.c



unittests:
	uv run python -W ignore -m unittest tests/test*


ruff:
	uv run python -m ruff check .


mypy:
	uv run python -m mypy --config-file pyproject.toml --check-untyped-defs --follow-imports=silent .


check: unittests ruff mypy