#include"test.h"

int main(){

Linkstack *s=Create();
push(s,50);
push(s,60);
push(s,70);
pop(s);
printf("the top number:%d\n",gettop(s));
return 0;
}
