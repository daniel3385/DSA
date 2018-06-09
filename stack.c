#include "../List/list.h"
#include "stack.h"

StackPtr StackNew() {
    return ListNew();
}

int StackPush(StackPtr q, int num) {
    return ListAddHead(q, num);
}

int StackPop(StackPtr q) {
    int num = q->head->num;
    ListDeleteNode(q, q->head);
    return num;
}

void StackToString(StackPtr q) {
    ListToString(q);
}


