#include"quick.h"
#include"bubble.h"
#include"sel.h"
#include"select.h"

int main(){
int arr[N];
for(int i=0;i<N;i++){
printf("please input number:");
scanf("%d",&arr[i]);
}

quicksort(arr,0,N-1);
select(arr,N);
bubble(arr,N);
sel(arr,N);

for(int i=0;i<N;i++){
printf("the %d number is %d\n",i+1,arr[i]);
}
return 0;
}
