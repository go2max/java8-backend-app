# В этой задаче вам необходимо написать простую программу на ассемблере, которая выводит приветствие на экран. Для этого вам понадобится вызвать функцию puts и передать ей через стек строку с именем hello. Для этого вам понадобятся три инструкции:

#     push  $C - чтобы положить параметр С (в нашем случае hello) на стек
#     call  F - чтобы вызвать функцию с именем F (в нашем случае puts)
#     add $N, %esp - чтобы удалить со стека верхние N байт (esp - регистр указатель стека, стек растет вниз).

# Адреса (а строка представляется адресом первого символа) в проверяющей системе 4 байтовые, соответственно, вы должны удалить со стека 4 байта занятые адресом строки hello.

# Sample Input:

# There is no test input

# Sample Output:

# OK

.data
hello:
    .string "hello\n"

.text
.globl _start
_start:
    movl $4, %eax # write(1, hello, strlen(hello))
    movl $1, %ebx
    movl $hello, %ecx
    movl $6, %edx
    int  $0x80

    movl $1, %eax # exit(0)
    movl $0, %ebx
    int  $0x80