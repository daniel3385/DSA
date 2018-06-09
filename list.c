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


void ListDeleteNode(ListPtr list, NodePtr node, void *data) {
    if(node == list->tail) {
        memcpy(data, list->tail->data, list->sizeData);
        free(list->tail->data);
        NodePtr tmp;
        tmp = list->tail;
        list->tail = list->tail->prev;
        list->tail->next = NULL;
        free(tmp);
    } else if(node == list->head) {
        memcpy(data, list->head->data, list->sizeData);
        free(list->head->data);
        NodePtr tmp;
        tmp = list->head;
        list->head->next->prev = NULL;
        list->head = list->head->next;
        free(tmp);
    } else {
        // FIXME: this else is broken
        NodePtr runner = list->head;
        while(runner != NULL) {
            if(runner == node) {
                memcpy(data, runner, list->sizeData);
                runner->prev->next = runner->next;
                free(runner->data);
                free(runner);
            } else {
                runner = runner->next;
            }
        }
    }
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
        list->head->prev = node;
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
        node->prev = list->tail;
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


