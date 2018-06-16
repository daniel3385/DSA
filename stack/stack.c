#include "../list/list.h"
#include "stack.h"

StackPtr StackNew(int size) {
    return ListNew(size);
}

int StackPush(StackPtr s, void *data) {
    return ListAddHead(s, data);
}

void StackPop(StackPtr s, void **data) {
    ListDeleteNode(s, s->head, data);
    return;
}

void StackToString(StackPtr s, void (*f)(void *)) {
    ListToString(s, f);
    return;
}


