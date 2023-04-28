section .data
	hello db 'Hello, Holberton',0
	format db '%s\n',0

section .text
	global main

main:
	push rbp
	mov rbp,rsp
	sub rsp,16
	lea rdi,[hello]
	mov rsi,format
	xor eax,eax
	call printf
	add rsp,16
	mov rsp,rbp
	pop rbp
	xor eax,eax
	ret
