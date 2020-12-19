#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int *key;
struct node *left;
struct node *right;
}Node;



void insert(Node *root, int temp){
Node *p = (Node*)malloc(sizeof(Node));
*p->key=temp;
p->left = p->right = NULL;


if(root=NULL){
//root = p;
return;
}

if(root->left==NULL && *root->key > temp){
root->left = p;
return;
}

if(root->right==NULL && *root->key <temp){
root->right=p;
return;
}

if(*root->key > temp)
	insert(root->left,temp);
else if(*root->key < temp)
	insert(root->right,temp);
else
	return;
}

void create(Node *root, int temp){
insert(root, temp);
}

Node *search(Node *root, int key){
if(root==NULL)
return NULL;

if(key < *root->key)
	return search(root->left,key);
else if(key > *root->key)
	return search(root->right,key);
else
	return root;

}


int main(){
Node *root = (Node*)malloc(sizeof(Node));
//root=NULL;



int arr[7]={12,34,23,54,12,54,45};

int i;
for(i=0;i<7;i++)
{
printf("%d\t",arr[i]);
create(root,arr[i]);
}

int locate;
printf("please input you want:");
scanf("%d",&locate);

Node *res;
if((res=search(root,locate)) != NULL)
	printf("the number %d find\n",*res->key);
else
	printf("NO Finding\n");

}
