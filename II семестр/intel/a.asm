global main

extern exit
extern scanf
extern printf

section .text

main:
xor eax, eax
xor ebx, ebx
xor edx, edx
push dword b
push dword a
push dword msgs
call scanf

fld qword[b]
fld qword[a]
fdivrp
fstp qword [a]

push dword [a+4]
push dword [a]
push dword msgp
call printf
push dword 0
call exit
ret

section .data
msgp   : db "%lf", 0xA, 0
msgs    : db "%lf%lf", 0

section .bss
a resd 8
b resd 8
