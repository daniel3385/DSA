#ifndef QUEUE_H
#define QUEUE_H

#include "../List/list.h"

typedef struct list Stack;
typedef struct list *StackPtr;

StackPtr StackNew(void);
int StackPush(StackPtr, int);
int StackPop(StackPtr);
void StackToString(StackPtr);

#endif
