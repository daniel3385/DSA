#ifndef QUEUE_H
#define QUEUE_H

#include "../list/list.h"

typedef ListPtr StackPtr;

StackPtr StackNew(int size);
int StackPush(StackPtr s, void *data);
int StackPop(StackPtr s, void **data);
void StackToString(StackPtr s, void (*f)(void *));

#endif
