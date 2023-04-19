# Pickle Rick

```
Rick has turned himself into a pickle, can you find him before its too late...
```
solves: *6* <br>

files given
https://drive.google.com/file/d/1ZULGK4p7cJQHNabmDHdtki-g1xNfHu0f/view?usp=share_link or https://drive.google.com/file/d/1ZTp8qBLRfjitet8nOshTiqIwWDwonCh1/view?usp=share_link <br>
7z Password: &y9PBYf8gZ^996s9 <br>

They provided an 7z file that is 5.8GB in compressed size. Inside, it contained an OVA file. After unzipping the OVA, and later vmdk file, we get to `2.img`. A file containing the linux file structure. <br>

looking in the `/root/.aws` directory, we can see a file named `credentials`[^1]

using the `aws cli` tool, we are able to view the s3 bucket containing the flag, as well as copy the flag onto our machine. Unfortunately I didn't get any screenshots, and at the time of writeup the tokens have been revoked by AWS, so you'll just have to take my word for it :)

[flag.txt](./flag.txt) \
FLAG: `LNC2023{1m_p1ckl3_r1111ck}`

[^1]: Lets just pretend I'm extremely smart and beelined there. In reality, I spent a long time exploring the file system, and even found a partially written writeup at `/home/rick/.cache/vmware/drag_and_drop/kU653j/b2r1/`. I thought the contents was really interesting, so I have placed it in this repository for you to see [writeup.md](./writeup.md) (alas! It wasn't finished!)
