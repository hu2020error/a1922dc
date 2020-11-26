#include"te.h"
#include<stdio.h>

void Var(int *var1, int *var2){
printf("please input var1:\n");
scanf("%d",var1);
printf("please input var2:\n");
scanf("%d",var2);
printf("you put the var1:%d the var2:%d\n",*var1,*var2);
}
int add(int var1,int var2){
return var1+var2;
}
int sub(int var1,int var2){
return var1-var2;
}
int div(int var1, int var2){
	if(var2==0){
	return -1;
	}
return var1/var2;
}



