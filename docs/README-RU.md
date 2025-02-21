
# Pystrector <br>

### The **Py**_(thon)_ **Str**_(uct)_ _(Refl)_**ector**

![icon](pystrector_icon.png)

---

Пакет для отображения и изменения внутренних структур Python. <br> Хотите увидеть, как на самом деле работают объекты в Python? <br> Тогда этот пакет для вас.

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

Объект отображателя имеет все те же поля, что и структура

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

Для каждого типа вы можете вызвать pretty_value и bytes_value <br>
**pretty_value** - приведет к наиболее похожему типу в Python <br>
**bytes_value** - всегда возвращает bytearray <br>

```python
print(reflector.ob_base.pretty_value)
print(reflector.ob_base.bytes_value)
```

Вы также можете установить значения <br>
**bytes_value** - принимает только bytearray <br>
**pretty_value** - принимает аналогичный тип Python <br>
**без параметров** - берет другой объект из pystrector <br>

```python
reflector.ob_base.ob_refcnt.bytes_value = bytearray(1)
reflector.ob_base.ob_refcnt.pretty_value = 1000
reflector.ob_base.ob_refcnt = binder.bind(1).ob_base.ob_refcnt
```

Также есть работа с указателями и массивами как в C

```python
x = [1, 2, 3]
print(binder.bind(x).ob_item[j][1])
print(+(binder.bind(x).ob_item[j]))
print(+(binder.bind(x).ob_item[j] + 1))
```

Вы можете преобразовать объекты в другие типы данных

```python
from pystrector.core_datatypes import _longobject

x = [1, 2, 3]

binder.bind(x).ob_item[0][0].cast_to(_longobject) # need to cast because list saves PyObjects
```
