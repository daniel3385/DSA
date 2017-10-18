#include <stdio.h>
#include "queue.h"

int main() {
    QueuePtr queue1 = QueueNew();
    QueueEnqueue(queue1, 2);
    QueueEnqueue(queue1, 4);
    QueueEnqueue(queue1, 6);
    QueueDequeue(queue1);
    QueueToString(queue1);

    return 0;
}
