#include"TreeSearch.h"

int main()
{
Pnode* root = (Pnode*)malloc(sizeof(Pnode));
Datatype arr[7]={12,34,11,6,3,2,32};

int i;
for(i=0; i<7 ;i++){
printf("%d\t",arr[i]);
insert(root, arr[i]);
}

//printf("%d\n", root->left->key);

//create(root , arr, 11);

Datatype locate;
printf("please input you want:");

scanf("%d",&locate);

Pnode *res;
if((res = search(root, locate)) != NULL){
printf("Finding the number:%d\n",*(res->key));
}
else
	printf("the number is not find\n");

}
