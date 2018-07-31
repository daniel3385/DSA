#include "../stack/stack.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

/*

returns true if a string contains properly nested
and balanced parentheses, and false if otherwise

*/

struct parentheses {
    char element;
    int row;
    int col;
};

bool balancedParentheses(const char* text)
{
    StackPtr stack1 = StackNew(sizeof(struct parentheses));

    int row = 0;
    int col = 0;
    while(*text != '\0') {
	if(*text == '(') {
	    struct parentheses parenthesis;
	    parenthesis.element = *text;
	    parenthesis.row = row;
	    parenthesis.col = col;
	    StackPush(stack1, &parenthesis);
	} else if(*text == ')') {
	    struct parentheses parenthesis;
	    int result = StackPop(stack1, (void **)&parenthesis);
	    if (result == 0) {
		printf("Element:%c\n", parenthesis.element);
		printf("Row:%d\n", parenthesis.row);
		printf("Col:%d\n", parenthesis.col);
		return false;
	    }
	} 
	if(*text == '\n') {
	    row = 0;
	    col++;
	    text++;
	    continue;
	}
	row++;
	text++;
    }
    struct parentheses parenthesis;
    int result = StackPop(stack1, (void **)&parenthesis);
    if(result == 1) {
	printf("Element:%c\n", parenthesis.element);
	printf("Row:%d\n", parenthesis.row);
	printf("Col:%d\n", parenthesis.col);
	return false;
    }
	
    return true;
}

int main() {
    char *text0_err = "())";
    char *text1 = "daniel (), test.";
    char *text2 = "(()())";
    char *text3_err = "(()()";
    char *text4_err = "()())";
    char *text5_err = "(((()())";
    printf("Result [%s] = %s\n\n", text0_err, balancedParentheses(text0_err) ? "NOK":"OK");
    printf("Result [%s] = %s\n\n", text1, balancedParentheses(text1) ? "OK":"NOK");
    printf("Result [%s] = %s\n\n", text2, balancedParentheses(text2) ? "OK":"NOK");
    printf("Result [%s] = %s\n\n", text3_err, balancedParentheses(text3_err) ? "NOK":"OK");
    printf("Result [%s] = %s\n\n", text4_err, balancedParentheses(text4_err) ? "NOK":"OK");
    printf("Result [%s] = %s\n\n", text5_err, balancedParentheses(text5_err) ? "NOK":"OK");
    return 0;
}
