//#include<stdio.h>
//#define N 6
#include"select.h"

void select(int arr[], int n){
int j, i, temp;
	for(i=1;i<n;i++){
               temp=arr[i];
        for(j=i;j>0&&arr[j-1]>temp;j--)
               arr[j]=arr[j-1];
        arr[j]=temp;
}
}

/*int main(){
int arr[N];

for(int i=0;i<N;i++){
printf("please input the number:");
scanf("%d",&arr[i]);}
select(arr,N);
for(int i=0;i<N;i++){
printf("the %d number:%d\n",i+1,arr[i]);
}
return 0;
}
*/

