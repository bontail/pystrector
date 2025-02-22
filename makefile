# add argument python-version=<some version>

update-python-source:
	git clone -b $(python-version) --single-branch https://github.com/python/cpython.git
	cd cpython && ./configure
	cd cpython/Include && cp ../pyconfig.h ./pyconfig.h
	uv run python prepare_source_code.py
	gcc-14 -E ./cpython/Include/Python.h -std=c99 > ./python_structures.c
	rm -rf cpython/



generate-core-datatypes:
	export PYTHONPATH="${printenv PYTHONPATH}:${shell pwd}" && uv run python3 pystrector/code_generator/generate_code.py python_structures.c core_datatypes.py
	mv core_datatypes.py pystrector/core_datatypes.py
	rm python_structures.c



unittests:
	uv run python -W ignore -m unittest tests/test*


ruff:
	uv run python -m ruff check .


mypy:
	uv run python -m mypy --config-file pyproject.toml --check-untyped-defs --follow-imports=silent .


check: unittests ruff mypy