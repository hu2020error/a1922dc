#include"Tree.h"


int main()
{
    Node *T;
    int depth,leafCount = 0;
    printf("输入the first节点的值，-1表示没有叶节点：\n");
    CreateTree(&T);

    printf("先序遍历：");
    PreOrderBiTree(T);
    printf("\n");

    printf("中序遍历：");
    MiddleOrderBiTree(T);
    printf("\n");

    printf("后序遍历：");
    PostOrderBiTree(T);
    printf("\n");

    depth = TreeDeep(T);
    printf("树的深度：%d\n",depth);
    
    leafCount = LeafCount(T);
    printf("叶子节点数:%d\n",leafCount);
}


