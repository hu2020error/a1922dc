#ifndef Tree_h
#define Tree_h
#include<stdio.h>
#include<stdlib.h>

typedef struct Tree{
    int data;
    struct Tree *left;
    struct Tree *right;
}Node;


void CreateTree(Node **);
void PreOrderBiTree(Node *);
void MiddleOrderBiTree(Node *);
void PostOrderBiTree(Node *);
int TreeDeep(Node *);
int LeafCount(Node *);

#endif
