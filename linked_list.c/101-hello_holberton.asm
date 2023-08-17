section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main

main:
    ; prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax

    ; call printf
    call printf

    ; exit program
    xor eax, eax
    ret