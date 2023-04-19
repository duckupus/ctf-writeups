# Base Madness

```
Zip files and encryptions were used often in the modern times. You came across this 2 files. One containing a text one is a zip file. Are you able to decipher it?
```
solves: *80* <br>

files given
- [base_madness.txt](./base_madness.txt)
- [base_madness.zip](./base_madness.zip)

the text in `base_madness.txt` was in base64, so lets decode it
```
└─$ cat base_madness.txt | base64 -d
thisisthepasswordtounlockthefile
```
unzipping the zip file with the password, we get [ayaka.jpg](./ayaka.jpg).
```
└─$ file ayaka.jpg
ayaka.jpg: data
```
the `file` command shows that it seems to be garbage data.
```
└─$ exiftool ayaka.jpg
ExifTool Version Number         : 12.16
File Name                       : ayaka.jpg
Directory                       : .
File Size                       : 58 KiB
File Modification Date/Time     : 2022:10:04 02:14:02+08:00
File Access Date/Time           : 2023:04:17 13:35:56+08:00
File Inode Change Date/Time     : 2023:04:17 13:35:50+08:00
File Permissions                : rw-r--r--
Warning                         : Processing TIFF-like data after unknown 30-byte header
Exif Byte Order                 : Big-endian (Motorola, MM)
XP Subject                      : C2023{ayaka_is_key}
Padding                         : (Binary data 2016 bytes, use -b option to extract)
```
When checking with `exiftool`, we can see the ending part of the flag, in `XP Subject`[^1] \
When checking the hexdump, the flag reveals itself
```
0000820: 0000 0000 0000 0000 0000 0000 4c00 4e00  ............L.N.
00000830: 4300 3200 3000 3200 3300 7b00 6100 7900  C.2.0.2.3.{.a.y.
00000840: 6100 6b00 6100 5f00 6900 7300 5f00 6b00  a.k.a._.i.s._.k.
00000850: 6500 7900 7d00 0000 0001 ea1c 0007 0000  e.y.}...........
```
FLAG: `LNC2023{ayaka_is_key}`


[^1]: When first doing the challenge, I just prepended `LN` to the string, and submitted it as the flag.
