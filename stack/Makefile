CC=gcc -Wall -Werror -g
LISTDIR=../list/


all: list stack 

list: $(LISTDIR)list.c 
	cd $(LISTDIR); make

stack: stack.c stack.c
	$(CC) -c stack.c
	$(CC) -c stackExample.c
	$(CC) -o stackExample $(LISTDIR)list.o stack.o stackExample.o

clean:
	rm *.o stackExample

