all:
	gcc -std=c99 -D_XOPEN_SOURCE=700 -o shell shell.c