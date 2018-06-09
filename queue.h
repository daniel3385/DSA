#ifndef QUEUE_H
#define QUEUE_H

#include "../List/list.h"

typedef struct list Queue;
typedef struct list *QueuePtr;

QueuePtr QueueNew(int);
int QueueEnqueue(QueuePtr, void *);
void QueueDequeue(QueuePtr, void **);
void QueueToString(QueuePtr, void (*)(void *));

#endif
