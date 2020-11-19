#ifndef test1_h
#define test1_h
#include<stdio.h>
#include<stdlib.h>

typedef int Datetype;

typedef struct node1{
Datetype date;
struct node1 *next;
}List;

List *addhead();
int input(List *list, Datetype K, Datetype date);
int output(List *list, Datetype K);
Datetype getdate(List *list, Datetype K);
List *find(List *list, Datetype x);
void print(List *list);
void clear(List *list);
#endif
