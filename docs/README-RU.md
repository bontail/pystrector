
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

### Поддерживаемые платформы

Описания структур генерируются препроцессированием заголовков одной
версии CPython на одной платформе, поэтому они непереносимы. pystrector
проверяет это при импорте:

| Предположение | При несовпадении |
| --- | --- |
| CPython 3.12 | `UnsupportedPlatformError` |
| little endian | `UnsupportedPlatformError` |
| 64-битные указатели | `UnsupportedPlatformError` |
| LP64 (`sizeof(long) == 8`) — исключает Windows | `UnsupportedPlatformError` |
| сборка без `Py_TRACE_REFS` | `UnsupportedPlatformError` |
| та же ОС и архитектура, что и у сгенерированного файла | `PlatformMismatchWarning` |
| тот же patch-релиз CPython, что и у сгенерированного файла | `PlatformMismatchWarning` |
| та же знаковость обычного `char`, что и при генерации | `PlatformMismatchWarning` |

Предупреждения не фатальны, но на них стоит реагировать. Раскладка
базовых объектов (`PyObject`, `list`, `int`, ...) на всех
LP64-платформах одинакова, а вот платформозависимые структуры (pthread,
состояние потока, учёт арен) — нет. Patch-релизы тоже двигают поля: в
3.12.7 в `PyASCIIObject` добавили `statically_allocated`, и всё, что за
ним, съехало. Предупреждение про `char` мягче: смещения не двигаются,
но знаковость обычного `char` в C отдана на откуп платформе (на ARM
Linux он беззнаковый, на x86 и на всех платформах Apple — знаковый), и
поле `char` со взведённым старшим битом читается с неверным знаком.
Чтобы получить точные описания, перегенерируйте их под свой
интерпретатор:

```shell
make update-python-source python-version=v3.12.9
make generate-core-datatypes
```

Для препроцессинга нужен настоящий `gcc` — clang выдаёт расширения,
которые pycparser не разбирает. Компилятор переопределяется через
`make update-python-source python-version=v3.12.9 cc=gcc-15`.

---

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

Если объект содержит anonymous_var, то можно сразу переходить к полям этого объекта

```python
class anonymous_1(DataType, is_union=True):
    ob_refcnt = LongLong()
    ob_refcnt_split = UnsignedInt[2]

    
class _object(DataType, is_union=False):
    anonymous_var_1 = anonymous_1()
    ob_type = Pointer(datatype="_typeobject")


some_object = 1
reflector = binder.bind(some_object).cast_to(_object)
# print(reflector.anonymous_var_1.ob_refcnt.pretty_value)
print(reflector.ob_refcnt.pretty_value)
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
print(binder.bind(x).ob_item[0][1])
print(+(binder.bind(x).ob_item[0]))
print(+(binder.bind(x).ob_item[0] + 1))
```

Разыменование NULL-указателя поднимает `ValueError`, а не читает нулевой
адрес. Остальные невалидные адреса не проверяются: указатель в
незамапленную память роняет весь интерпретатор в segfault, и ловить
после этого уже нечего.

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