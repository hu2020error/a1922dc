#ifndef Graph_h
#define Graph_h
#include<stdio.h>
#include<stdlib.h>
#define size 30


typedef char Vtype;

typedef struct node{
int dest;
struct node *next;
}edge;


typedef struct{
Vtype data;
edge *adj;
}vertex;


typedef struct{
vertex vexs[size];
int n, e;
}Graph;


void Init(Graph *);
Vtype Get(Graph *, int );
void create(Graph *);
void Print(edge *);
void show(Graph *);

#endif
