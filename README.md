
# Pystrector <br>

### The **Py**_(thon)_ **Str**_(uct)_ _(Refl)_**ector**

![icon](docs/pystrector_icon.png)

---

The package for displaying and modifying Python's internal structures. <br> Do you want to see how Python objects are arranged inside? <br> Then this package is for you.

```python
from pystrector import Binder
binder = Binder()
some_object = 1
reflector = binder.bind(some_object)
print(reflector.ob_base.ob_refcnt.pretty_value)
```

---

### Python

To install pystrector, enter the command.

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

To access the representation of the basic structures, you need to create an anchor object

```python
from pystrector import Binder
binder = Binder()
```

Now you can call the binding method to get a class object representing the structure

```python
some_object = 1
reflector = binder.bind(some_object)
```

The display object has all the same fields as the internal structure

```c
// core structure
struct _longobject {
     PyObject ob_base;
    _PyLongValue long_value;
};
```

```python
class _longobject(DataType, is_union=False):
    ob_base = _object()
    long_value = _PyLongValue()
```

For each type, you can call pretty_value and bytes_value <br>
**pretty_value** - will result in the most similar type in Python <br>
**bytes_value** - always returns bytearray <br>

```python
print(reflector.long_value.lv_tag.pretty_value)
print(reflector.long_value.lv_tag.bytes_value)
```

You can also set values <br>
**bytes_value** - accepts only bytearray <br>
**pretty_value** - accepts a similar Python type <br>
**without parameters** - takes another object from the mapper <br>

```python
reflector.ob_base.ob_refcnt.bytes_value = bytearray(1)
reflector.ob_base.ob_refcnt.pretty_value = 1000
reflector.ob_base.ob_refcnt = binder.bind(7).ob_base.ob_refcnt
```

There is also work with pointers and arrays as in C

```python
x = [1, 2, 3]
print(binder.bind(x).ob_item[j][1])
print(+(binder.bind(x).ob_item[j]))
print(+(binder.bind(x).ob_item[j] + 1))
```

You can convert mappers of some data types to others

```python
from pystrector.core_datatypes import _longobject

x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast_to(_longobject) # need to cast because list saves PyObjects
```

Or use auto cast (works only with PyObject)

```python
x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast()
```


More examples can be seen in [tests](/tests)