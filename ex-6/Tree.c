#include"Tree.h"


//先序创建二叉树
void CreateTree(Node **T)
{
    int ch;
    scanf("%d",&ch);
    if (ch == -1)
    {
        *T = NULL;
        return;
    }
    else
    {
        *T = (Node *)malloc(sizeof(Node));
        (*T)->data = ch;
        printf("输入%d的左子节点：",ch);
        CreateTree(&((*T)->left));
        printf("输入%d的右子节点：",ch);
        CreateTree((&(*T)->right));
    }

    return;
}

//先序遍历二叉树
void PreOrderBiTree(Node *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        printf("%d ",T->data);
        PreOrderBiTree(T->left);
        PreOrderBiTree(T->right);
    }
}

//中序遍历二叉树
void MiddleOrderBiTree(Node *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        MiddleOrderBiTree(T->left);
        printf("%d ",T->data);
        MiddleOrderBiTree(T->right);
    }
}

//后续遍历二叉树
void PostOrderBiTree(Node *T)
{
    if (T == NULL)
    {
        return;
    }
    else
    {
        PostOrderBiTree(T->left);
        PostOrderBiTree(T->right);
        printf("%d ",T->data);
    }
}

//二叉树的深度
int TreeDeep(Node *T)
{
    int deep = 0;
    if (T != NULL)
    {
        int leftdeep = TreeDeep(T->left);
        int rightdeep = TreeDeep(T->right);
        deep = leftdeep >= rightdeep?leftdeep+1:rightdeep+1;
    }

    return deep;
}

//叶子节点个数
int LeafCount(Node *T)
{
    static int count;
    if (T != NULL)
    {
        if (T->left == NULL && T->right == NULL)
        {
            count++;
        }

        LeafCount(T->left);
        LeafCount(T->right);
    }

    return count;
}

