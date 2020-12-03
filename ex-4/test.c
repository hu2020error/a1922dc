#include"test.h"

Linkstack *Create(){
Linkstack *head=(Linkstack*)malloc(sizeof(Linkstack));
head->next=NULL;
return head;
}

//入栈
void push(Linkstack *s, Datatype x){
Linkstack *node = (Linkstack*)malloc(sizeof(Linkstack));
//node->next=NULL;
node->data=x;
//s->next=node;
node->next = s->next;
s->next = node;
}

//出栈
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



