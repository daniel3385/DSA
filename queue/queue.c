#include "../list/list.h"
#include "queue.h"

ListPtr QueueNew(int sizeData) {
    return ListNew(sizeData);
}

int QueueEnqueue(ListPtr q,  void *data) {
    return ListAddHead(q, data);
}

void QueueDequeue(ListPtr q, void **data) {
    ListDeleteNode(q, q->tail, data);
    return;
}

void QueueToString(ListPtr q, void (*f)(void *)) {
    ListToString(q, f);
    return;
}


