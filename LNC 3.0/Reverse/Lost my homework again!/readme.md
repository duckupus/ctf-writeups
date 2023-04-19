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