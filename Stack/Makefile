CC=gcc -Wall -Werror -g

all:
	$(CC) -c stack.c
	$(CC) -c stackExample.c
	$(CC) -o stackExample ../List/list.o stack.o stackExample.o
clean:
	rm *.o stackExample
