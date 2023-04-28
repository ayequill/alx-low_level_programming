section .data
    format db 'Hello, Holberton', 10, 0
    ; 10 is the ASCII code for newline, and 0 is the null terminator for the string

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [format]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    ret
