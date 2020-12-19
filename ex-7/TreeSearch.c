#include"TreeSearch.h"

void insert(Pnode *root, Datatype key)
{
if(root == NULL) 
{
return ;
}

if(root->left == NULL && root->right == NULL)
{
	root->key = (Datatype*)malloc(sizeof(Datatype));
	*root->key = key;
	root->right = (Pnode*)malloc(sizeof(Pnode));
	root->left = (Pnode*)malloc(sizeof(Pnode));
}
else if(*root->key > key)
{
	insert(root->left, key);
}
else
{
	insert(root->right, key);
}
}


//void create(Pnode **root, Datatype *arr , Datatype n){
//int i;
//for(i=0;i<n;i++)
//	insert(root, arr[i]);
//}


Pnode* search(Pnode *root, Datatype key)
{
if(root == NULL || root->key == NULL)
	return NULL;

if(key == *root->key)
	return root;
else if(key > *root->key)
	return search(root->right, key);
else
	return search(root->left, key);

}
