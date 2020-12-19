#include"BinarySearch.h"


int main(){
int N;
printf("please intput the number:");
scanf("%d",&N);

int arr[N];

for(int i=0;i<N;i++){
printf("please input:");
scanf("%d",&arr[i]);
}

InsertSort(arr,N);

int x,s;
printf("the x you want:");
scanf("%d",&x);

s=BinarySearch1(arr, N, x);
printf("the result is :%d",s);
}
