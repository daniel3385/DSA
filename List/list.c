#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


ListPtr ListNew(int sizeData) {
    ListPtr list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->sizeData = sizeData;
    return list;
}


int ListDeleteNode(ListPtr list, NodePtr node) {
    NodePtr runner = list->head;
        if(runner == node) {
            // delete the head
            list->head = list->head->next;
            free(runner->data);
            free(runner);
            return 1;
        }
    while(runner->next != NULL) {
        if(runner->next == node) {
            NodePtr tmp = node;
            runner->next = node->next;
            free(tmp->data);
            free(tmp);
            return 1;
        } else {
            runner = runner->next;
        }
    }
    return 0;
}

int ListAddHead(ListPtr list, void *data) {
    NodePtr node = malloc(sizeof(Node));
    node->data = malloc(list->sizeData);
    memcpy(node->data, data, list->sizeData);
    if(list->tail == NULL) {
        // it is the first node
        list->tail = node;
        list->head = node;
    } else {
        node->next = list->head;
        list->head = node;
    }
    return 1;
}

int ListAddTail(ListPtr list, void *data) {
    NodePtr node = malloc(sizeof(Node));
    node->data = malloc(list->sizeData);
    memcpy(node->data, data, list->sizeData);
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

void ListToString(ListPtr list, void (*f)(void *)) {
    NodePtr runner = list->head;
    printf("\n");
    while(runner != NULL) {
            f(runner->data);
        runner = runner->next;
    }
    printf("\n");
}


