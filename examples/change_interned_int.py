"""Demonstration of how dangerous direct memory writes are.

CPython interns small integers (PEP 683), so changing the digit of the
interned ``4`` changes every ``4`` in the interpreter. Run this in a
separate process only.
"""
import warnings
from pystrector import Binder

warnings.filterwarnings("ignore")

binder = Binder()

reflector = binder.bind(4)
reflector.long_value.ob_digit[0].pretty_value = 5


value = 4
print(f"{value=} (the literal says 4, but the interned int is now 5)")
print(value)
