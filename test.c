#include"test1.h"

int main(){
List *list=addhead();
input(list, 1, 2);
input(list, 1, 4);
input(list, 1, 7);
input(list, 1, 8);
output(list,3);
print(list);
printf("the number of getdate: %d\n",getdate(list,2));
printf("约瑟夫问题\n");


//约瑟夫问题
Datetype n;
List *s, *node, *p;
node=s=(List*)malloc(sizeof(List));
s->date=1;

printf("please input the number:");
scanf("%d",&n);
for(int i=2;i<=n;i++){
p = (List*)malloc(sizeof(List));
p->date=i;
node->next=p;
node=p;
}
node->next=s;
node=s;

int m;
printf("please input you want the end:");
scanf("%d",&m);
int k=0;
while(node->next != node){
k++;
if(k==m){
s->next=node->next;
free(node);
node=s->next;
k=0;
}
else{
s=node;
node=node->next;
}
}

printf("the end :%d\n",node->date);
return 0;
}
