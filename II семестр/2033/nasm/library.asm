global subroutine

section .text

subroutine:
	mov eax, dword[esp + 4]
	mov ebx, dword[esp + 8]

	cmp eax, ebx
	jle l1
	add eax, ebx
	jmp l2
	l1: sub eax, ebx
	l2: ret
