#include <stdio.h>
#include "list.h"

void  printList(void *data) {
    printf(" %d", *((int *)data));
}

int main() {
    ListPtr list1 = ListNew(sizeof(int));
    int x = 3;
    ListAddTail(list1, &x);
    x = 4;
    ListAddTail(list1, &x);
    x = 5;
    ListAddTail(list1, &x);
    x = 6;
    ListAddTail(list1, &x);
    x = 7;
    ListAddTail(list1, &x);
    x = 2;
    ListAddHead(list1, &x);
    x = 1;
    ListAddHead(list1, &x);
    ListToString(list1, printList);
    ListRevert(list1);
    ListToString(list1, printList);
    

/*
    ListPtr list2 = ListNew();
    ListAddHead(list2, 7);
    ListAddHead(list2, 8);
    ListAddHead(list2, 8);
    ListToString(list2);
*/

    return 0;
}
