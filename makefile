all: test.o pokemon.o
	gcc -o pokemon test.o pokemon.o
test.o: test.c pokemon.h
	gcc -c test.c
pokemon.o: pokemon.c
	gcc -c pokemon.c