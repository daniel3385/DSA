CC=gcc -Wall -Werror -g

all: list 

list: list.c listExample.c
	$(CC) -c list.c
	$(CC) -c listExample.c
	$(CC) -o listExample list.o listExample.o

clean:
	rm *.o listExample

