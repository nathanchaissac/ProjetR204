all: object main

main: main.c cesar.o vigenere.o verif.o
	gcc cesar.o vigenere.o verif.o main.c -o main

cesar: cesar.c
	gcc -c cesar.c

vigenere: vigenere.c
	gcc -c vigenere.c

verif: verif.c
	gcc -c verif.c

object: cesar.c vigenere.c verif.c
	gcc -c cesar.c
	gcc -c vigenere.c
	gcc -c verif.c

clean: cesar.o vigenere.o verif.o main.exe
	del cesar.o
	del vigenere.o
	del verif.o
	del main.exe