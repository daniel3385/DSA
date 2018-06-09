#include <stdio.h>
#include "stack.h"

int main() {
    StackPtr stack1 = StackNew();
    StackPush(stack1, 2);
    StackPush(stack1, 4);
    StackPush(stack1, 6);
    StackToString(stack1);
    StackPop(stack1);
    StackToString(stack1);

    return 0;
}
