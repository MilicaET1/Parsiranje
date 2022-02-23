.PHONY : all
all: parsiranje
parsiranje: main.c brojevi.c abc.c palindrom.c velikaslova.c funkcije.h
	gcc -o parsiranje main.c brojevi.c abc.c palindrom.c velikaslova.c
