#ifndef queue_h
#define queue_h

#include<stdio.h>
#include<stdlib.h>

typedef int Data;
typedef struct node{
Data data;
struct node *next;
}Node;

typedef struct Link{
Node *front;
Node *rear;
Node *curr;
}Linkqueue;


void init(Linkqueue *p);
Data empty(Linkqueue *p);
void push_front(Linkqueue *p, Data data);
void push_tail(Linkqueue *p,Data data);
void pop_front(Linkqueue *p);
void pop_tail(Linkqueue *p);
Data gettop(Linkqueue *p);
Data gettail(Linkqueue *p);
Data size(Linkqueue *p);

#endif
