#include"queue.h"

void init(Linkqueue *p){
Node *node = (Node*)malloc(sizeof(Node));
Node *node1=(Node*)malloc(sizeof(Node));
p->curr=node1;
p->front = node;
p->rear=p->front;
}

Data empty(Linkqueue *p){
if(p->front==p->rear)
return -1;
}

void push_front(Linkqueue *p, Data data){
Node *s=(Node*)malloc(sizeof(Node));
s->data=data;
s->next=p->front->next;
p->front->next=s;
}

void push_tail(Linkqueue *p,Data data){
Node *s=(Node*)malloc(sizeof(Node));
s->data=data;
s->next=NULL;
p->curr=p->rear;
p->curr->next=NULL;
p->rear->next=s;
p->rear=p->rear->next;
}


void pop_front(Linkqueue *p){
empty(p);
Node *q=(Node*)malloc(sizeof(Node));
q = p->front->next;
p->front->next=q->next;
free(q);
}

void pop_tail(Linkqueue *p){
empty(p);
Node *d=(Node*)malloc(sizeof(Node));
d=p->rear;
p->rear=p->curr;
free(d);
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
