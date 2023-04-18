# Lost my homework again!

```
Oh no!
A virus just stole my master key to my homework folder and encrypted it!
Could you help me retrieve my master key again so I can continue doing my "homework"?
```
solves: *9* <br>

files given
- [virus1.s](./virus1.s)
- [virus2.s](./virus2.s)
- [README.md](./readme.md)
- [txt.txt](./txt.txt)

The README file reads
```md
The virus has encrypted the master key using 2 programs:

virus1.s and virus2.s

For every character X,
X was passed into virus1.s which produces the first line of output in txt.txt
X was passed into virus2.s which produces the second line of output in txt.txt

Carl was too lazy to make the programs accept standard input, so line 6's MOV instruction is the "input".
Every number was "inputted" to the program by assigning it to the X0 register on line 6. Just change the #122 to some other number.

Carl was also too lazy to output anything, so the program actually outputs using its return status code.
Not that you should be running this program anyway.

Both outputs are required to reconstruct the original value. Good luck!
```
the `virus1.s` and `virus2.s` are assembly files. I will explain the assembly in a high level[^1]. \
`virus2.s` is very similar to `virus1.s`, with `virus1.s` having a bit of extra instructions at the end. \
### virus1.s
```c
output	= input
output	= output - 20
var1	= output / 4
var2	= (var1 * 4) - output //????
output	= var1 + var2
output	= output * 3
return output
```
The above shows what happens in `virus1.s`. There is a confusing line that seems to form the equation `var2 = (output/4)*4` \
This looks redundant, as `var2` should always equal `output`. \
Lets look at `virus2.s`
### virus2.c
```c
output	= input
output	= output - 20
var1	= output / 4
var2	= (var1 * 4) - output
output	= var2
```
`virus2.s` is very similar to `virus1.s`, but stops short of completing the program \
I think its time I explained what the program is doing \
`virus2.s` is actually the **remainders** of the division. `integer` divisions truncate remainders. For example, `5/3 = 1`, but `1*3 != 5`. We need both lines to properly construct and get the input values. \
solve script can be found at [solve.c](./solve.c) \
output
```
TE5DMjAyM3swcmQxbmFsX2FzczNtYmx5XzFzX3MwX2MwMEx9
```
After `base64` decoding[^2], we get the flag

FLAG: `LNC2023{0rd1nal_ass3mbly_1s_s0_c00L}`

[^1]: The reading of assembly is left as an exercise for the readers :)

[^2]: When solving, I was pulling my hair out because I thought the output was wrong until I tried decoding base64... Curse you author!

