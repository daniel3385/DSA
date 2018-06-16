CC=gcc -Wall -Werror -g

all: List Queue Stack

List: 
	cd list; make  

Queue: 
	cd queue; make

Stack: 
	cd stack; make

clean:
	cd list; make clean
	cd queue; make clean
	cd stack; make clean

