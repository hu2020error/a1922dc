#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BTNode{
    int data;
    struct BTNode *lChild;
    struct BTNode *rChild;
}BiTNode;

//声明
void CreateBinarySearchTree(BiTNode **T);
void Insert(BiTNode **T,int x);
void MiddleOrder(BiTNode *T);
void PreOrder(BiTNode *T);

//创建二叉查找树
/**
 *  输入-1时创建结束,其实是一个不断插入的过程
 */
void CreateBinarySearchTree(BiTNode **T)
{
    printf("请输入创建二叉查找树的数字序列：\n");
    int num;
    scanf("%d",&num);
    while (num != -1)
    {
        Insert(T,num);
        scanf("%d",&num);
    }

    printf("%s函数执行，二叉查找树创建成功\n",__FUNCTION__);
    return;
}

//插入节点
void Insert(BiTNode **T,int x)
{
    //这里创建一个要插入的节点
    BiTNode *pInsert = (BiTNode *)malloc(sizeof(BiTNode));
    pInsert->data = x;
    pInsert->lChild = NULL;
    pInsert->rChild = NULL;

    if ((*T) == NULL)
    {
        *T = pInsert;
        return;
    }

    if ((*T)->lChild == NULL && x < (*T)->data)
    {
        (*T)->lChild = pInsert;
        return;
    }

    if ((*T)->rChild == NULL && x > (*T)->data)
    {
        (*T)->rChild = pInsert;
        return;
    }

    //递归实现
    if (x < (*T)->data)
    {
        Insert(&(*T)->lChild, x);
    }

    if (x > (*T)->data)
    {
        Insert(&(*T)->rChild, x);
    }

    return;
}

//中序遍历二叉查找树
//打印的应该是一个递增的序列
void MiddleOrder(BiTNode *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        MiddleOrder(T->lChild);
        printf("%d ",T->data);
        MiddleOrder(T->rChild);
    }
}

//先序遍历二叉查找树
//因为先序遍历+中序遍历 可以唯一确定一棵树，等下可以验证树是否正确
void PreOrder(BiTNode *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        printf("%d ",T->data);
        PreOrder(T->lChild);
        PreOrder(T->rChild);
    }
}

//查找某一个值
//返回1表示找到该值，返回0表示没有找到
void SearchValue(BiTNode *T,int x)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        if (x < T->data)
        {
            //查左子树
            SearchValue(T->lChild, x);
        }
        else if (x > T->data)
        {
            //查右子树
            SearchValue(T->rChild, x);
        }
        else
        {
            //找到该值
            printf("该值的内存地址为：%p\n",T);
            return;
        }
    }
    return;
}

int main(int argc, const char * argv[])
{
    BiTNode *tree;

    //这个是引用传递
    CreateBinarySearchTree(&tree);
    
    MiddleOrder(tree);
    printf("\n");

    printf("请输入要查找的元素：");
    int searchValue;
    scanf("%d",&searchValue);
    SearchValue(tree,searchValue);

    printf("先序遍历：");
    PreOrder(tree);
    printf("\n中序遍历：");
    MiddleOrder(tree);//遍历检查
    printf("\n");
    
    return 0;
}
