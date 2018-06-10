#include <stdio.h>
#include "stack.h"

void printStack(void *data) {
    printf(" %d", *(int *)data);
}

int main() {
    StackPtr stack1 = StackNew(sizeof(int));
    int x = 2;
    StackPush(stack1, &x);
    x = 4;
    StackPush(stack1, &x);
    x = 6;
    StackPush(stack1, &x);
    StackToString(stack1, printStack);
    StackPop(stack1, (void **)&x);
    StackToString(stack1, printStack);

    return 0;
}
