#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

typedef struct list Stack;
typedef struct list *StackPtr;

StackPtr StackNew(int);
int StackPush(StackPtr, void *);
void StackPop(StackPtr, void **);
void StackToString(StackPtr, void (*)(void *));

#endif
