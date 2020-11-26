#include "quick.h"

int temp(int arr[],int first, int end){
int i=first;
int j=end;
while(i<j){
while(i<j && arr[i]<=arr[j]){
j--;
}

if(i<j){
int tr=arr[j];
arr[j]=arr[i];
arr[i]=tr;
i++;
}

while(i<j && arr[i]<=arr[j]){
i++;
}

if(i<j){
int tr=arr[i];
arr[i]=arr[j];
arr[j]=tr;
j--;
}
}
return i;
}


void quicksort(int arr[],int first ,int end){
if(first<end){
int dir=temp(arr, first, end);
quicksort(arr,first,dir-1);
quicksort(arr,dir+1,end);
}

}
