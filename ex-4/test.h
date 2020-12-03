#ifndef test_h
#define test_h
#include<stdio.h>
#include<stdlib.h>

typedef int Datatype;
typedef struct node{
Datatype data;
struct node *next;
}Linkstack;

Linkstack *Create();
void push(Linkstack *s,Datatype x);
Datatype pop(Linkstack *s);
Datatype gettop(Linkstack *s);


#endif
