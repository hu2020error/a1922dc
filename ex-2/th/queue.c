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
}Linkqueue;

void init(Linkqueue *p){
Node *node = (Node*)malloc(sizeof(Node));

p->front = node;
//node->next=NULL;
p->rear=p->front;
}

Data empty(Linkqueue *p){
if(p->front==p->rear)
return -1;
}

void push(Linkqueue *p,Data data){
Node *s=(Node*)malloc(sizeof(Node));
s->data=data;
s->next=NULL;
p->rear->next=s;
//p->rear=s;
p->rear=p->rear->next;
}

void pop(Linkqueue *p){
empty(p);
Node *q=(Node*)malloc(sizeof(Node));
q = p->front->next;
p->front->next=q->next;
free(q);
}

Data gettop(Linkqueue *p){
empty(p);
return p->front->next->data;
}


Data gettail(Linkqueue *p){
empty(p);
return p->rear->data;
}

Data size(Linkqueue *p){
empty(p);
Data i=-1;

while(!(p->front==NULL)){
p->front=p->front->next;
i++;
}
return i;
}

int main(){
Linkqueue *p = (Linkqueue*)malloc(sizeof(Linkqueue));
init(p);
push(p ,70);
push(p, 20);
push(p, 60);
push(p, 50);
pop(p);
printf("the top number :%d\n",gettop(p));
printf("the tail number :%d\n",gettail(p));
printf("the size :%d\n",size(p));
return 0;
}









