#include "../list/list.h"
#include "stack.h"

StackPtr StackNew(int size) {
    return ListNew(size);
}

int StackPush(StackPtr s, void *data) {
    return ListAddHead(s, data);
}

int StackPop(StackPtr s, void **data) {
    return ListDeleteNode(s, s->head, data);
}

void StackToString(StackPtr s, void (*f)(void *)) {
    ListToString(s, f);
    return;
}


