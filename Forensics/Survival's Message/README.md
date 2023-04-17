# Survival's Message

```
Looks like a survival has written a message, find a way to read the message.
```

files given
- [flag.jpg](./flag.jpg)

```
└─$ file flag.jpg
flag.jpg: ASCII text, with CRLF line terminators
```
The output of `file` indicates to me that this is a text file with an `jpg` extension. \
Reading from it, we get
```
└─$ cat flag.jpg
Dear remaining warriors,

Many natural diaster has destroyed the world as we know it.

LNC2023{eX

The year is 3000, Many countries are in an icy place ruled by mutated huge insects.

1en

Our once glorious world, was once peaceful where all people live together.

SL0

But fret not remaining warriors, one day we will rise up to claim back what is ours.

N1sF8n}
```
link the parts together to get the flag \
FLAG: `LNC2023{1enSL0N1sF8n}`
