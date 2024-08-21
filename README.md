
# pystrector <br> (Py)thon (Str)uct Refl(ector)


#### 

#### Small package for displaying core Python structures. <br> Do you want to see how objects in Python actually work? <br> Then this package is for you.

```python
from pystrector import Pystrector
strector = Pystrector()
some_object = 1
reflector = strector.bind_object(some_object)
print(reflector.ob_base.ob_refcnt.python_value)
```


### Python

To download the package enter the command.

```shell
python3 -m pip install pystrector
```

### Git

```shell
git clone https://github.com/bontail/pystrector.git
```

