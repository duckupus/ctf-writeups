# The Abandoned Computer

```
You found an old abandoned house with a very old computer that is still working.
Hmm... seems like there's nothing inside the computer except for some corrupted files.
You managed to find one file that might contain a messsage for you about life before the apocolypse.
Can you try accessing the file and uncover the secret message?
(To run the unknown file, run the file in the Cygwin terminal.)
```
solves: *31* <br>

files given
- [computer.exe](./computer.exe)

The output of the `file` command tells us that it is a PE executable
```
└─$ file computer.exe
computer.exe: PE32+ executable (console) x86-64, for MS Windows
```
Lets check the strings in the data section
```
└─$ rabin2 -z computer.exe
ERROR: Library handler has failed for '/home/duck/.local/share/radare2/plugins/core_pdd.so'
ERROR: Library handler has failed for '/home/duck/.local/share/radare2/plugins/core_ghidra.so'
[Strings]
nth paddr      vaddr       len  size section type  string
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――
0   0x00001200 0x100403000 10   11   .rdata  ascii Z40nj$q9Ul
1   0x0000120b 0x10040300b 21   22   .rdata  ascii Enter your username:
2   0x00001224 0x100403024 21   22   .rdata  ascii Enter your password:
3   0x0000123a 0x10040303a 15   16   .rdata  ascii user10218012437
4   0x0000124a 0x10040304a 13   14   .rdata  ascii Welcome, %s!\n
5   0x00001258 0x100403058 9    10   .rdata  ascii Role: %s\n
6   0x00001262 0x100403062 5    6    .rdata  ascii admin
7   0x00001268 0x100403068 15   16   .rdata  ascii Access granted.
8   0x00001278 0x100403078 25   26   .rdata  ascii INPUT any key to continue
9   0x00001298 0x100403098 2044 2044 .rdata  ascii 56 47 38 67 64 32 68 76 5a 58 5a 6c 63 69 42 70 63 79 42 79 5a 57 46 6b 61 57 35 6e 49 48 52 6f 61 58 4d 73 49 45 6b 67 61 47 39 77 5a 53 42 30 61 47 6c 7a 49 47 31 6c 63 33 4e 68 5a 32 55 67 5a 6d 6c 75 5a 48 4d 67 65 57 39 31 49 48 64 6c 62 47 77 75 49 45 31 35 49 47 35 68 62 57 55 67 61 58 4d 67 65 79 6f 6d 58 69 55 6c 49 47 46 75 5a 43 42 4a 49 47 46 74 49 48 64 79 61 58 52 70 62 6d 63 67 64 47 68 70 63 79 42 70 62 69 42 30 61 47 55 67 65 57 56 68 63 69 41 79 4d 44 4d 31 4c 69 42 55 61 47 55 67 64 32 46 79 49 47 6c 7a 49 47 35 76 64 43 42 6e 5a 58 52 30 61 57 35 6e 49 47 46 75 65 53 42 69 5a 58 52 30 5a 58 49 67 59 57 35 6b 49 48 73 67 5a 47 39 75 4a 33 51 67 64 47 68 70 62 6d 73 67 64 47 68 68 64 43 42 70 64 43 64 7a 49 47 56 75 5a 47 6c 75 5a 79 42 68 62 6e 6c 30 61 57 31 6c 49 48 4e 76 62 32 34 75 49 45 4a 35 49 48 52 6f 5a 53 42 30 61 57 31 6c 49 47 6c 30 49 47 52 76 5a 58 4d 73 49 48 52 6f 5a 58 4a 6c 4a 33 4d 67 63 48 4a 76 59 6d 46 69 62 48 6b 67 62 6d 39 30 61 47 6c 75 5a 79 42 74 62 33 4a 6c 49 48 52 76 49 47 74 70 62 47 77 67 62 32 5a 6d 4c 69 42 4a 49 47 46 74 49 48 64 79 61 58 52 70 62 6d 63 67 64 47 68 70 63 79 42 74 5a 58 4e 7a 59 57 64 6c 49 48 64 70 64 47 67 67 64 47 68 6c 49 47 68 76 63 47 55 67 64 47 68 68 64 43 42 68 49 48 4e 31 63 6e 5a 70 64 6d 39 79 49 48 64 70 62 47 77 67 59 6e 4a 70 62 6d 63 67 59 6d 46 6a 61 79 42 33 61 47 46 30 49 48 64 68 63 79 42 73 62 33 4e 30 4c 69 42 37 62 79 42 33 61 47 39 74 49 48 52 6f 61 58 4d 67 62 57 46 35 49 47 4e 76 62 6d 4e 6c 63 6d 34 73 49 48 64 6f 59 58 51 67 65 57 39 31 49 48 4e 6c 5a 57 73 67 62 47 6c 6c 63 79 42 69 5a 58 6c 76 62 6d 51 67 64 47 68 70 63 79 42 30 62 33 64 75 4c 69 42 55 61 47 56 79 5a 53 42 6f 59 58 5a 6c 49 47 4a 6c 5a 57 34 67 63 6e 56 74 62 33 56 79 63 79 42 76 5a 69 42 68 49 48 42 73 59 57 4e 6c 49 48 64 6f 5a 58 4a 6c 49 47 68 31 62 57 46 75 61 58 52 35 49 47 4e 68 62 69 42 7a 5a 57 56 72 49 48 4a 6c 5a 6e 56 6e 5a 53 42 68 62 6d 51 67 63 6d 56 69 64 57 6c 73 5a 43 42 76 64 58 49 67 62 47 39 7a 64 43 42 6a 61 58 5a 70 62 4
10  0x00001a94 0x100403894 439  440  .rdata  ascii 7 6c 7a 59 58 52 70 62 32 34 75 49 45 35 76 49 47 39 75 5a 53 42 72 62 6d 39 33 63 79 42 6c 65 47 46 6a 64 47 78 35 49 48 64 6f 5a 58 4a 6c 4c 43 42 69 64 58 51 67 61 57 59 67 65 57 39 31 49 47 52 76 49 47 5a 70 62 6d 51 67 61 58 51 73 49 48 52 6f 61 58 4d 67 62 57 6c 6e 61 48 51 67 61 47 56 73 63 43 42 35 62 33 55 67 5a 57 35 30 5a 58 49 36 49 45 78 4f 51 7a 49 77 4d 6a 4e 37 63 6a 4d 31 64 56 4a 53 5a 57 4e 30 4d 54 42 75 66 51 3d 3d
11  0x00001c4c 0x100403a4c 4    5    .rdata  ascii user
12  0x00001c51 0x100403a51 17   18   .rdata  ascii ENTER to continue
13  0x00001c68 0x100403a68 30   31   .rdata  ascii This file explorer is empty...
14  0x00001c87 0x100403a87 14   15   .rdata  ascii Access denied.
15  0x00001ca0 0x100403aa0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
16  0x00001cc0 0x100403ac0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
17  0x00001ce0 0x100403ae0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
18  0x00001d00 0x100403b00 17   18   .rdata  ascii GCC: (GNU) 11.3.0
19  0x00001d20 0x100403b20 17   18   .rdata  ascii GCC: (GNU) 11.3.0
20  0x00001d40 0x100403b40 17   18   .rdata  ascii GCC: (GNU) 11.3.0
21  0x00001d60 0x100403b60 17   18   .rdata  ascii GCC: (GNU) 11.3.0
22  0x00001d80 0x100403b80 17   18   .rdata  ascii GCC: (GNU) 11.3.0
23  0x00001da0 0x100403ba0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
24  0x00001dc0 0x100403bc0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
25  0x00001de0 0x100403be0 17   18   .rdata  ascii GCC: (GNU) 11.3.0
26  0x00001e00 0x100403c00 17   18   .rdata  ascii GCC: (GNU) 11.3.0
27  0x00001e20 0x100403c20 17   18   .rdata  ascii GCC: (GNU) 11.3.0
28  0x00001e40 0x100403c40 17   18   .rdata  ascii GCC: (GNU) 11.3.0
29  0x00001e60 0x100403c60 17   18   .rdata  ascii GCC: (GNU) 11.3.0
0   0x00002a58 0x100409058 1167 1168 .rsrc   ascii <?xml version="1.0" encoding="UTF-8" standalone="yes"?>\n<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">\n  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">\n    <security>\n      <requestedPrivileges>\n        <requestedExecutionLevel level="asInvoker"/>\n      </requestedPrivileges>\n    </security>\n  </trustInfo>\n  <compatibility xmlns="urn:schemas-microsoft-com:compatibility.v1">\n    <application>\n      <!--The ID below indicates application support for Windows Vista -->\n      <supportedOS Id="{e2011457-1546-43c5-a5fe-008deee3d3f0}"/>\n      <!--The ID below indicates application support for Windows 7 -->\n      <supportedOS Id="{35138b9a-5d96-4fbd-8e2d-a2440225f93a}"/>\n      <!--The ID below indicates application support for Windows 8 -->\n      <supportedOS Id="{4a2f28e3-53b9-4441-ba9c-d69d4a4a6e38}"/>\n      <!--The ID below indicates application support for Windows 8.1 -->\n      <supportedOS Id="{1f676c76-80e1-4239-95bb-83d0f6d0da78}"/> \n      <!--The ID below indicates application support for Windows 10 -->\n      <supportedOS Id="{8e0f7a12-bfb3-4fe8-b9a5-48fd50a15a9a}"/> \n    </application>\n  </compatibility>\n</assembly>\n
```
Well, thats a lot of strings! The strings in the middle stand out quite well. I can tell its probably hex values. \
Now, it seems `rabin2` has messed up on the strings, splitting them into half[^1]. I ran `strings` and got the entire hex block in one piece 
```
56 47 38 67 64 32 68 76 5a 58 5a 6c 63 69 42 70 63 79 42 79 5a 57 46 6b 61 57 35 6e 49 48 52 6f 61 58 4d 73 49 45 6b 67 61 47 39 77 5a 53 42 30 61 47 6c 7a 49 47 31 6c 63 33 4e 68 5a 32 55 67 5a 6d 6c 75 5a 48 4d 67 65 57 39 31 49 48 64 6c 62 47 77 75 49 45 31 35 49 47 35 68 62 57 55 67 61 58 4d 67 65 79 6f 6d 58 69 55 6c 49 47 46 75 5a 43 42 4a 49 47 46 74 49 48 64 79 61 58 52 70 62 6d 63 67 64 47 68 70 63 79 42 70 62 69 42 30 61 47 55 67 65 57 56 68 63 69 41 79 4d 44 4d 31 4c 69 42 55 61 47 55 67 64 32 46 79 49 47 6c 7a 49 47 35 76 64 43 42 6e 5a 58 52 30 61 57 35 6e 49 47 46 75 65 53 42 69 5a 58 52 30 5a 58 49 67 59 57 35 6b 49 48 73 67 5a 47 39 75 4a 33 51 67 64 47 68 70 62 6d 73 67 64 47 68 68 64 43 42 70 64 43 64 7a 49 47 56 75 5a 47 6c 75 5a 79 42 68 62 6e 6c 30 61 57 31 6c 49 48 4e 76 62 32 34 75 49 45 4a 35 49 48 52 6f 5a 53 42 30 61 57 31 6c 49 47 6c 30 49 47 52 76 5a 58 4d 73 49 48 52 6f 5a 58 4a 6c 4a 33 4d 67 63 48 4a 76 59 6d 46 69 62 48 6b 67 62 6d 39 30 61 47 6c 75 5a 79 42 74 62 33 4a 6c 49 48 52 76 49 47 74 70 62 47 77 67 62 32 5a 6d 4c 69 42 4a 49 47 46 74 49 48 64 79 61 58 52 70 62 6d 63 67 64 47 68 70 63 79 42 74 5a 58 4e 7a 59 57 64 6c 49 48 64 70 64 47 67 67 64 47 68 6c 49 47 68 76 63 47 55 67 64 47 68 68 64 43 42 68 49 48 4e 31 63 6e 5a 70 64 6d 39 79 49 48 64 70 62 47 77 67 59 6e 4a 70 62 6d 63 67 59 6d 46 6a 61 79 42 33 61 47 46 30 49 48 64 68 63 79 42 73 62 33 4e 30 4c 69 42 37 62 79 42 33 61 47 39 74 49 48 52 6f 61 58 4d 67 62 57 46 35 49 47 4e 76 62 6d 4e 6c 63 6d 34 73 49 48 64 6f 59 58 51 67 65 57 39 31 49 48 4e 6c 5a 57 73 67 62 47 6c 6c 63 79 42 69 5a 58 6c 76 62 6d 51 67 64 47 68 70 63 79 42 30 62 33 64 75 4c 69 42 55 61 47 56 79 5a 53 42 6f 59 58 5a 6c 49 47 4a 6c 5a 57 34 67 63 6e 56 74 62 33 56 79 63 79 42 76 5a 69 42 68 49 48 42 73 59 57 4e 6c 49 48 64 6f 5a 58 4a 6c 49 47 68 31 62 57 46 75 61 58 52 35 49 47 4e 68 62 69 42 7a 5a 57 56 72 49 48 4a 6c 5a 6e 56 6e 5a 53 42 68 62 6d 51 67 63 6d 56 69 64 57 6c 73 5a 43 42 76 64 58 49 67 62 47 39 7a 64 43 42 6a 61 58 5a 70 62 47 6c 7a 59 58 52 70 62 32 34 75 49 45 35 76 49 47 39 75 5a 53 42 72 62 6d 39 33 63 79 42 6c 65 47 46 6a 64 47 78 35 49 48 64 6f 5a 58 4a 6c 4c 43 42 69 64 58 51 67 61 57 59 67 65 57 39 31 49 47 52 76 49 47 5a 70 62 6d 51 67 61 58 51 73 49 48 52 6f 61 58 4d 67 62 57 6c 6e 61 48 51 67 61 47 56 73 63 43 42 35 62 33 55 67 5a 57 35 30 5a 58 49 36 49 45 78 4f 51 7a 49 77 4d 6a 4e 37 63 6a 4d 31 64 56 4a 53 5a 57 4e 30 4d 54 42 75 66 51 3d 3d
```
changing back to ASCII, the hex values give this value
```
VG8gd2hvZXZlciBpcyByZWFkaW5nIHRoaXMsIEkgaG9wZSB0aGlzIG1lc3NhZ2UgZmluZHMgeW91IHdlbGwuIE15IG5hbWUgaXMgeyomXiUlIGFuZCBJIGFtIHdyaXRpbmcgdGhpcyBpbiB0aGUgeWVhciAyMDM1LiBUaGUgd2FyIGlzIG5vdCBnZXR0aW5nIGFueSBiZXR0ZXIgYW5kIHsgZG9uJ3QgdGhpbmsgdGhhdCBpdCdzIGVuZGluZyBhbnl0aW1lIHNvb24uIEJ5IHRoZSB0aW1lIGl0IGRvZXMsIHRoZXJlJ3MgcHJvYmFibHkgbm90aGluZyBtb3JlIHRvIGtpbGwgb2ZmLiBJIGFtIHdyaXRpbmcgdGhpcyBtZXNzYWdlIHdpdGggdGhlIGhvcGUgdGhhdCBhIHN1cnZpdm9yIHdpbGwgYnJpbmcgYmFjayB3aGF0IHdhcyBsb3N0LiB7byB3aG9tIHRoaXMgbWF5IGNvbmNlcm4sIHdoYXQgeW91IHNlZWsgbGllcyBiZXlvbmQgdGhpcyB0b3duLiBUaGVyZSBoYXZlIGJlZW4gcnVtb3VycyBvZiBhIHBsYWNlIHdoZXJlIGh1bWFuaXR5IGNhbiBzZWVrIHJlZnVnZSBhbmQgcmVidWlsZCBvdXIgbG9zdCBjaXZpbGlzYXRpb24uIE5vIG9uZSBrbm93cyBleGFjdGx5IHdoZXJlLCBidXQgaWYgeW91IGRvIGZpbmQgaXQsIHRoaXMgbWlnaHQgaGVscCB5b3UgZW50ZXI6IExOQzIwMjN7cjM1dVJSZWN0MTBufQ==
```
decoding from base64, we get this
```
To whoever is reading this, I hope this message finds you well. My name is {*&^%% and I am writing this in the year 2035. The war is not getting any better and { don't think that it's ending anytime soon. By the time it does, there's probably nothing more to kill off. I am writing this message with the hope that a survivor will bring back what was lost. {o whom this may concern, what you seek lies beyond this town. There have been rumours of a place where humanity can seek refuge and rebuild our lost civilisation. No one knows exactly where, but if you do find it, this might help you enter: LNC2023{r35uRRect10n}
```

FLAG: `LNC2023{r35uRRect10n}`


[^1]: When doing the challenge, I kinda just put them together after noticing the weird single characters at the front and end... Remember not to trust tools too much!
