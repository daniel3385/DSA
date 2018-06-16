#ifndef QUEUE_H
#define QUEUE_H

#include "../list/list.h"

#define QueuePtr ListPtr

QueuePtr QueueNew(int sizeData);
int QueueEnqueue(QueuePtr q,  void *data);
void QueueDequeue(QueuePtr q, void **data);
void QueueToString(QueuePtr q, void (*f)(void *));

#endif
