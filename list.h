#ifndef LIST_H
#define LIST_H


typedef struct node {
    void *data;
    struct node *prev;
    struct node *next;
} Node, *NodePtr;

typedef struct list {
    NodePtr head;
    NodePtr tail;
    int sizeData; 
} List, *ListPtr; 

ListPtr ListNew(int);

void ListDeleteNode(ListPtr, NodePtr, void *);

int ListAddHead(ListPtr, void *);

int ListAddTail(ListPtr, void *);

void ListToString(ListPtr, void (*)(void *));


#endif
