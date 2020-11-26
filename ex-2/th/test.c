//#include<stdio.h>
//#include<stdlib.h>

/*typedef int Datatype
typedef struct node{
Datatype data;
struct node *next;
}Linkstack;*/

#include"test.h"

Linkstack *Create(){
Linkstack *head=(Linkstack*)malloc(sizeof(Linkstack));
head->next=NULL;
return head;
}


void push(Linkstack *s, Datatype x){
Linkstack *node = (Linkstack*)malloc(sizeof(Linkstack));
//node->next=NULL;
node->data=x;
//s->next=node;
node->next = s->next;
s->next = node;
}

Datatype pop(Linkstack *s){
if(s->next==NULL)
return -1;

Linkstack *node=s->next;
s->next=node->next;
free(node);
}

Datatype gettop(Linkstack *s){
if(s->next==NULL)
return -1;
return s->next->data;
}



