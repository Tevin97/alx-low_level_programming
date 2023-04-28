section .data    
    hello db 'Hello, Holberton',0
    format db '%s\n',0

section .text
    global main

main:
    push rbp        ; set up stack frame 
    mov rbp,rsp
     
    sub rsp,16      ; allocate space for arguments
    lea rdi,[hello] ; first argument: pointer to hello string
    mov rsi,format  ; second argument: pointer to format string
    xor eax,eax     ; clear EAX register for printf return value
    call printf     ; call printf function
    
    add rsp, 16     ; deallocate arguments
    mov rsp,rbp     ; restore stack pointer
    pop rbp         ; restore base pointer
    xor eax,eax     ; return 0 at end of program
    ret
