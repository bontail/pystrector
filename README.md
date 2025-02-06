
# Pystrector <br>

### The **Py**_(thon)_ **Str**_(uct)_ _(Refl)_**ector**

---

The package for displaying and changing core Python structures. <br> Do you want to see how objects in Python actually work? <br> Then this package is for you.

```python
from pystrector import Binder
binder = Binder()
some_object = 1
reflector = binder.bind(some_object)
print(reflector.ob_base.ob_refcnt.pretty_value)
```

---

### Python

To download the package enter the command.

```shell
python3 -m pip install pystrector
```

---

### Git

```shell
git clone https://github.com/bontail/pystrector.git
```

---

### Documentation

To access the view of core structures you need to create a binder object

```python
from pystrector import Binder
binder = Binder()
```

You can now call the bind method to get an object of the class that represents the structure

```python
some_object = 1
reflector = binder.bind(some_object)
```

Reflector has all the same fields that are in the structure

```c
// core structure
struct _longobject {
     PyObject ob_base;
    _PyLongValue long_value;
};
```

```python
print(reflector.ob_base)
print(reflector.long_value)
```

For each type you can call pretty_value and bytes_value <br>
**pretty_value** - will result in the most similar type in python <br>
**bytes_value** - always returns bytearray <br>

```python
print(reflector.ob_base.pretty_value)
print(reflector.ob_base.bytes_value)
```

You can also set values <br>
**bytes_value** - only accepts bytearray <br>
**pretty_value** - accepts a similar Python type <br>
**without any properties** - takes another object from pystrector <br>

```python
reflector.ob_base.ob_refcnt.bytes_value = bytearray(1)
reflector.ob_base.ob_refcnt.pretty_value = 1000
reflector.ob_base.ob_refcnt = binder.bind(1).ob_base.ob_refcnt
```

There is also work with pointers and arrays as in C

```python
x = [1, 2, 3]
print(binder.bind(x).ob_item[j][1])
print(+(binder.bind(x).ob_item[j]))
print(+(binder.bind(x).ob_item[j] + 1))
```

You can cast objects into other data types

```python
from pystrector.core_datatypes import _longobject

x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast_to(_longobject) # need to cast because list saves PyObjects
```
