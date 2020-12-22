#ifndef Human_h
#define Human_h

#include<stdio.h>
#define n 5                                        //叶子结点数目
#define m (2*n-1)                                  //总结点数目，可证明
#define MAXVALUE 10000                             //最大权值
#define MAXBIT 20  

typedef struct                                     
{
    char ch;
    int weight;                                    
    int parent;                                    
    int Lchild, Rchild;
}Htreetype;
typedef struct
{
    int bit[n];                                   //位串
    int start;                                    //编码在位串中的起始位置
    char ch;       
}Hcodetype;


void select(Htreetype *, int , int *, int *);  //选择权值最小的结点
void HuffmanTree(Htreetype *);                  //构造哈夫曼树
void HuffmanCode(Hcodetype *,Htreetype *);                                   //哈夫曼编码
void show(Htreetype *, Hcodetype *);

#endif
