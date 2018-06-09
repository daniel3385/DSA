#include "../List/list.h"
#include "queue.h"

QueuePtr QueueNew(int sizeData) {
    return ListNew(sizeData);
}

int QueueEnqueue(QueuePtr q,  void *data) {
    return ListAddHead(q, data);
}

void QueueDequeue(QueuePtr q, void **data) {
    ListDeleteNode(q, q->tail, data);
    return;
}

void QueueToString(QueuePtr q, void (*f)(void *)) {
    ListToString(q, f);
    return;
}


