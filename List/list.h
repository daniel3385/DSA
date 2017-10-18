#ifndef LIST_H
#define LIST_H


typedef struct node {
    int num;
    struct node *next;
} Node, *NodePtr;

typedef struct list {
    NodePtr head;
    NodePtr tail;
} List, *ListPtr; 

ListPtr ListNew(void);

NodePtr ListMakeNode(int); 

int ListDeleteNode(ListPtr, NodePtr);

int ListAddHead(ListPtr, int);

int ListAddTail(ListPtr, int);

void ListToString(ListPtr);


#endif
