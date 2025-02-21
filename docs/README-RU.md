
# Pystrector <br>

### The **Py**_(thon)_ **Str**_(uct)_ _(Refl)_**ector**

![icon](pystrector_icon.png)

---

Пакет для отображения и изменения внутренних структур Python. <br> Хотите увидеть, как объекты Python устроены внутри? <br> Тогда этот пакет для вас.

```python
from pystrector import Binder
binder = Binder()
some_object = 1
reflector = binder.bind(some_object)
print(reflector.ob_base.ob_refcnt.pretty_value)
```

---

### Python

Чтобы установить pystrector введите команду.

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

Чтобы получить доступ к представлению основных структур, вам необходимо создать объект привязки

```python
from pystrector import Binder
binder = Binder()
```

Теперь вы можете вызвать метод привязки, чтобы получить объект класса, представляющий структуру.

```python
some_object = 1
reflector = binder.bind(some_object)
```

Объект отображателя имеет все те же поля, что и внутренняя структура

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

Для каждого типа вы можете вызвать pretty_value и bytes_value <br>
**pretty_value** - приведет к наиболее похожему типу в Python <br>
**bytes_value** - всегда возвращает bytearray <br>

```python
print(reflector.long_value.lv_tag.pretty_value)
print(reflector.long_value.lv_tag.bytes_value)
```

Вы также можете устанавливать значения <br>
**bytes_value** - принимает только bytearray <br>
**pretty_value** - принимает аналогичный тип Python <br>
**без параметров** - берет другой объект отображателя <br>

```python
reflector.ob_base.ob_refcnt.bytes_value = bytearray(1)
reflector.ob_base.ob_refcnt.pretty_value = 1000
reflector.ob_base.ob_refcnt = binder.bind(7).ob_base.ob_refcnt
```

Также есть работа с указателями и массивами как в Cи

```python
x = [1, 2, 3]
print(binder.bind(x).ob_item[j][1])
print(+(binder.bind(x).ob_item[j]))
print(+(binder.bind(x).ob_item[j] + 1))
```

Вы можете преобразовать отображатели одних типов данных в другие

```python
from pystrector.core_datatypes import _longobject

x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast_to(_longobject) # need to cast because list saves PyObjects
```

Или использовать auto каст (работает только с PyObject)

```python
x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast()
```


Больше примеров можно увидеть в [тестах](../tests)