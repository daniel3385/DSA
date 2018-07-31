CC=gcc -Wall -Werror -g

all: Array Queue Stack

Array: 
	cd array; make
List: 
	cd list; make  

Queue: 
	cd queue; make

Stack: 
	cd stack; make

clean:
	cd array; make clean
	cd list; make clean
	cd queue; make clean
	cd stack; make clean

