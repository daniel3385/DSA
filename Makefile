CC=gcc -Wall -Werror -g

list:
	$(CC) -c list.c
	$(CC) -c listExample.c
	$(CC) -o listExample list.o listExample.o
queue:
	$(CC) -c queue.c
	$(CC) -c queueExample.c
	$(CC) -o queueExample list.o queue.o queueExample.o
stack:
	$(CC) -c stack.c
	$(CC) -c stackExample.c
	$(CC) -o stackExample ../List/list.o stack.o stackExample.o


all:
	list
	queue
	stack

clean:
	rm *.o queueExample
	rm *.o listExample
	rm *.o stackExample

