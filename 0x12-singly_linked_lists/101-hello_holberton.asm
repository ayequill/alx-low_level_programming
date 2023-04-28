global _start

section .data
    message db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
_start:
    ; Set up arguments for printf
    mov rdi, format
    mov rsi, message
    xor rax, rax  ; clear rax register
    ; Call printf function
    call printf

    ; Exit the program
    xor rdi, rdi  ; set return code to 0
    mov rax, 60  ; system call for exit
    syscall
