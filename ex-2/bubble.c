#include"bubble.h"

void bubble(int arr[], int n)      //实现从小到大排序
{
for(int i=1;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(arr[j]>arr[j+1])
{
int temp;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}

}

}

}
