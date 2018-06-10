CC=gcc -Wall -Werror -g

all: list queue stack

list: list.c listExample.c
	$(CC) -c list.c
	$(CC) -c listExample.c
	$(CC) -o listExample list.o listExample.o
queue: queue.c queueExample.c
	$(CC) -c queue.c
	$(CC) -c queueExample.c
	$(CC) -o queueExample list.o queue.o queueExample.o
stack: stack.c stackExample.c
	$(CC) -c stack.c
	$(CC) -c stackExample.c
	$(CC) -o stackExample list.o stack.o stackExample.o

clean:
	rm *.o queueExample
	rm *.o listExample
	rm *.o stackExample

