CC=gcc -Wall -Werror -g -std=c99
LISTDIR=../list/
STACKDIR=../stack/


all: stack array

stack: $(STACKDIR)stack.c 
	cd $(STACKDIR); make

array: balancedParentheses.c kadane.c 
	$(CC) -c balancedParentheses.c
	$(CC) -o balancedParentheses $(LISTDIR)list.o $(STACKDIR)stack.o balancedParentheses.o
	$(CC) -o kadane kadane.c

clean:
	rm *.o balancedParentheses kadane 

