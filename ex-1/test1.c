//#include<stdio.h>
//#include<stdlib.h>
#include"test1.h"

/*typedef int Datetype;

typedef struct node1{
Datetype date;
struct node1 *next;
}List;*/

//创建一个表头
List* addhead(){
List *head=(List*)malloc(sizeof(List));
head->next=NULL;
return head;
}

//在指定位置插入元素
int input(List *list, Datetype K, Datetype date)
{
List *add=(List*)malloc(sizeof(List));            //初始化待插入的元素
	add->date=date;
List *node=list;
if(K<1)
	return -1;
int i=0;
if(i<K-1){
node=node->next;                                  //找到指定位置的前一个
i++;
}
else{
add->next=node->next;
node->next=add;
}
}

//在指定位置删除元素
int output(List *list, Datetype K){
if(K<1)
return -1;
List *node=(List*)malloc(sizeof(List));
node=list;
int i=0;
while(i<K-1){
node=node->next;
i++;
}
List *non = node->next;            //定义一个指针接收指定位置元素
node->next=non->next;
free(non);                         //清除指定位置元素
}

//返回指定位置的元素
Datetype getdate(List *list, Datetype K){
if(K<1)
	return -1;
List *node=list->next;
int i=0;
while(i<K-1){
node=node->next;
i++;
}
return node->date;
}


//查找值为x元素的位置
List *find(List *list ,Datetype x){
List *node=list->next;
while(node && node->date != x){
node=node->next;
}
return node;
}

//输出链表内所有元素
void print(List *list){
List *node=list->next;
int i=1;
while(node)                      //直到node为空链表内y所有元素输出
{
printf("the %d :%d\n",i,node->date);
i++;
node=node->next;
}
printf("all!\n");
}

//清除所有元素
void clear(List *list){
List *p, *q;
p=list;
while(p->next)                  //直到把最后一个元素是空
{
q=p;
p=p->next;
free(q);
}
list=NULL;
}



/*int main()
{
List *list=addhead();
input(list, 1, 2);
input(list,1,4);
input(list, 1,7);
input(list ,1 ,8);
output(list,3);
print(list);
printf("the number of getdate :%d\n",getdate(list,2));
printf("the number of find :%d\n",find(list,2));
return 0;
}
*/
