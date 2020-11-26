#include"sel.h"

void sel(int arr[], int n){
for(int i=0;i<n-1;i++){
int temp=arr[i];
int k=i;
for(int j=i+1;j<n;j++)
if(temp>arr[j])
{
temp=arr[j];
k=j;
}
arr[k]=arr[i];
arr[i]=temp;

}
}

/*int main(){
int arr[N];
for(int i=0;i<N;i++){
printf("please input a number:");
scanf("%d",&arr[i]);
}
sel(arr,N);
for(int i=0;i<N;i++){
printf("the %d number is %d\n",i+1,arr[i]);
}
}*/
