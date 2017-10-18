#ifndef QUEUE_H
#define QUEUE_H

#include "../List/list.h"

typedef struct list Queue;
typedef struct list *QueuePtr;

QueuePtr QueueNew(void);
int QueueEnqueue(QueuePtr, int);
int QueueDequeue(QueuePtr);
void QueueToString(QueuePtr);

#endif
