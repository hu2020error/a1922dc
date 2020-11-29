#include"queue.h"

int main(){
Linkqueue *p = (Linkqueue*)malloc(sizeof(Linkqueue));
init(p);
push_tail(p ,70);
printf("the tail number :%d\n",gettail(p));
printf("the top number :%d\n",gettop(p));
printf("\n");

push_tail(p, 20);

push_front(p, 60);
printf("the top number :%d\n",gettop(p));

printf("\n");

push_front(p, 50);
printf("the top number :%d\n",gettop(p));
printf("the tail number :%d\n",gettail(p));

printf("\n");

pop_tail(p);
printf("the tail number :%d\n",gettail(p));
printf("the size :%d\n",size(p));
return 0;
}









