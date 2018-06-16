#ifndef QUEUE_H
#define QUEUE_H

#include "../list/list.h"

#define QueuePtr ListPtr

ListPtr QueueNew(int sizeData);
int QueueEnqueue(ListPtr q,  void *data);
void QueueDequeue(ListPtr q, void **data);
void QueueToString(ListPtr q, void (*f)(void *));

#endif
