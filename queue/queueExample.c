#include <stdio.h>
#include "queue.h"

void printQueue(void *data) {
    printf(" %d", *(int *)data);
}

int main() {
    int x = 5;
    QueuePtr queue1 = QueueNew(sizeof(int));
    QueueEnqueue(queue1, &x);
    x = 4;
    QueueEnqueue(queue1, &x);
    x = 3;
    QueueEnqueue(queue1, &x);
    x = 2;
    QueueEnqueue(queue1, &x);
    x = 1;
    QueueEnqueue(queue1, &x);
    QueueToString(queue1, printQueue);
    QueueDequeue(queue1, (void **)&x);
    printf("dequed value:%d\n", x);

    return 0;
}
