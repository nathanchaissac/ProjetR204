ifeq ($(OS),Windows_NT)
	RM = del
else
	RM = rm
endif

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
	$(RM) cesar.o
	$(RM) vigenere.o
	$(RM) verif.o
	$(RM) main.exe
	$(RM) resultat.txt