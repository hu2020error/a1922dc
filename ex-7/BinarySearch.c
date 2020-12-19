#include"BinarySearch.h"


void InsertSort(int arr[],int n){
int i, j, temp;

for(i=1;i<n;i++){
temp = arr[i];
j = i-1;

while(j>=0 && arr[j]>temp){
arr[j+1] = arr[j];
j--;

}
arr[j+1] = temp;

} 

}

//折半查找
int BinarySearch1(int arr[],int n,int x){
int low = 0;
int high = n-1;
int mid;

while(low<=high){
mid = (low+high)/2;
if(arr[mid]==x)
return mid+1;
else if(arr[mid]<x)
low=mid+1;

else
high=mid-1;

}
return -1;

}


/*int BinarySearch(int arr,int low,int high, int x){
int mid=(high+low)/2;

if(low>high)
return -1;

if(arr[mid]==x)
return mid;

else if(arr[mid]>x)
{
high=mid-1;
BinarySearch(arr,low,high,x);
}

else
{
low=mid+1;
BinarySearch(arr,low,high,x);
}


}
*/




