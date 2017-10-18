#include <stdio.h>
#include "list.h"

int main() {
    ListPtr list1 = ListNew();
    ListAddTail(list1, 2);
    ListAddTail(list1, 4);
    ListAddTail(list1, 6);
    ListAddTail(list1, 8);
    ListAddTail(list1, 10);
    ListAddHead(list1, 1);
    ListAddHead(list1, 3);
    ListToString(list1);

    ListPtr list2 = ListNew();
    ListAddHead(list2, 7);
    ListAddHead(list2, 8);
    ListAddHead(list2, 8);
    ListToString(list2);

    return 0;
}
