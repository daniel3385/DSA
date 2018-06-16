CC=gcc -Wall -Werror -g

all: genericSort.c testSort.c
	$(CC) -c genericSort.c
	$(CC) -c testSort.c
	$(CC) -o testSort testSort.o genericSort.o

clean:
	rm *.o testSort
