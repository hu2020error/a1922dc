#include"Graph.h"



void Init(Graph *g){
for(int i=0;i<size;i++)
	g->vexs[i].adj = NULL;
g->n=g->e=0;
}

Vtype Get(Graph *g, int i){
if(i<0 || i>=g->n)
	exit(1);
return g->vexs[i].data;
}

void create(Graph *g){
int i, j ,k;
edge *s;
printf("please input the number of edge:\n");
scanf("%d",&g->e);
getchar();
printf("please input of point:\n");
scanf("%d",&g->n);
getchar();
printf("请输%d入顶点的值:\n",g->n);
for(i=0;i<g->n;i++){
scanf("%c",&g->vexs[i].data);
g->vexs[i].adj=NULL;
}
printf("请输入%d条边具体",g->e);
for(k=0;k<g->e;k++){
scanf("%d%d",&i,&j);
s=(edge*)malloc(sizeof(edge));
s->dest=j;
s->next=g->vexs[i].adj;
g->vexs[i].adj=s;
s=(edge*)malloc(sizeof(edge));
s->dest=i;
s->next=g->vexs[j].adj;
g->vexs[j].adj=s;
}
}


void Print(edge *e){
edge *p=e;
while(p){
printf("%3d",p->dest);
p=p->next;
}
printf("\n");
}


void show(Graph *g){
for(int i=0;i<g->n;i++){
printf("%3c",g->vexs[i].data);
Print(g->vexs[i].adj);
}

}

