section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main
    extern printf

main:
    push hello

    push format

    call printf

    add rsp, 16

    xor rdi, rdi
    ret

