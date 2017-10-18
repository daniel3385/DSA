#include "list.h"
#include <stdlib.h>
#include <stdio.h>


ListPtr ListNew() {
    ListPtr list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

NodePtr ListMakeNode(int n) {
    NodePtr node = malloc(sizeof(Node));
    node->num = n;
    node->next = NULL;
    return node;
}

int ListDeleteNode(ListPtr list, NodePtr node) {
    NodePtr runner = list->head;
        if(runner == node) {
            // delete the head
            list->head = list->head->next;
            free(runner);
            return 1;
        }
    while(runner->next != NULL) {
        if(runner->next == node) {
            NodePtr tmp = node;
            runner->next = node->next;
            free(tmp);
            return 1;
        } else {
            runner = runner->next;
        }
    }
    return 0;
}

int ListAddHead(ListPtr list, int num) {
    NodePtr node = ListMakeNode(num);
    if(list->tail == NULL) {
        // it is the first node
        list->tail = node;
        list->head = node;
        node->num = num;
    } else {
        node->num = num;
        node->next = list->head;
        list->head = node;
    }
    return 1;
}

int ListAddTail(ListPtr list, int num) {
    NodePtr node = ListMakeNode(num);
    node->num = num;
    if(list->head == NULL) {
        // it is the first node
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
    return 1;
}

void ListToString(ListPtr list) {
    NodePtr runner = list->head;
    printf("\n");
    while(runner != NULL) {
        if(runner->next != NULL) {
            // It's not the last node
            printf("(%d)->", runner->num);
        } else {
            // It's the last node
            printf("(%d)", runner->num);
        }
        runner = runner->next;
    }
    printf("\n");
}


