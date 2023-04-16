# First Program

```
This is the first program that was created in the Dystopian times can you help find the flag inside it?
```
solves: *80* <br>
This is an easy level reversing challenge \
files given
- [simplere](./simplere)
First, lets check it's strings. I like to use `rabin2`^[1] from the `radare2` framework as I can more easily control what strings are printed.
```sh
└─$ rabin2 -z simplere
[Strings]
nth paddr      vaddr      len size section type  string
―――――――――――――――――――――――――――――――――――――――――――――――――――――――
0   0x00002004 0x00002004 27  28   .rodata ascii LNC2023{s1mpl3_4m_1_r1ghT?}
1   0x00002020 0x00002020 20  21   .rodata ascii Wow what a surprise!
```
And thats the flag! \
FLAG: `LNC2023{s1mpl3_4m_1_r1ghT?}`
[^1]: `rabin2 -z` tells radare2 to only print strings from the data section of the binary. However, you can tell it to print all strings if you want to!

