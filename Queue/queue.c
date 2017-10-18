#include "../List/list.h"
#include "queue.h"

QueuePtr QueueNew() {
    return ListNew();
}

int QueueEnqueue(QueuePtr q, int num) {
    return ListAddHead(q, num);
}

int QueueDequeue(QueuePtr q) {
    int num = q->tail->num;
    ListDeleteNode(q, q->tail);
    return num;
}

void QueueToString(QueuePtr q) {
    ListToString(q);
}


