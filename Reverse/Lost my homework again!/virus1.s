.global _start
.align 2

_start:

    mov X0, #67             ; This number is substituted with the input

    ; factor 1
	mov X19, #20
    sub X0, X0, X19
    
    ; factor 2
    mov X19, #4
    udiv X20, X0, X19
    msub X21, X20, X19, X0
    add X0, X21, X20

    ; factor 3
    mov X19, #3
    mul X0, X0, X19

    ;; syscall to exit
	mov X16, #1
	svc #0x80
