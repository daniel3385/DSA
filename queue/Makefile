CC=gcc -Wall -Werror -g
LISTDIR=../list/


all: list queue 

list: $(LISTDIR)list.c 
	cd $(LISTDIR); make

queue: queue.c queueExample.c
	$(CC) -c queue.c
	$(CC) -c queueExample.c
	$(CC) -o queueExample $(LISTDIR)list.o queue.o queueExample.o

clean:
	rm *.o queueExample

