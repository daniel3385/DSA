CC=gcc -Wall -Werror -g

all:
	$(CC) -c queue.c
	$(CC) -c queueExample.c
	$(CC) -o queueExample ../List/list.o queue.o queueExample.o
clean:
	rm *.o queueExample
