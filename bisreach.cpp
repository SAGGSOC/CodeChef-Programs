#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    
	    printf(pibsearch(arr1, n, key));
	}
	return 0;
}
int pibsearch(int arr[],int n,int key)
{
    int pi=findpi(arr,0,n-1);
    if(pi==-1)
      return bsearch(arr, 0, n-1, key);
    if(arr[pi]==key)
     return pi;
    if(arr[0]<=key)
     return bsearch(arr, 0, pi-1,key);
    return bsearch(arr,pi+1,n-1,key); 
    
}
int bsearch(int arr[], int low, int high, int key)
{
   if (high < low)
       return -1;
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid])
       return mid;
   if (key > arr[mid])
       return binarySearch(arr, (mid + 1), high, key);
   return binarySearch(arr, low, (mid -1), key);
}
int findpi(int arr[],int lo,int hi)
{
    if(hi<lo)
    return -1;
    if(hi==lo)
    return lo;
    int mid=(lo+hi)/2;
    if(mid<hi&&arr[mid]>arr[mid+1])
      return mid;
    if(mid>lo&&arr[mid]<arr[mid-1])
      return (mid-1);
    if(arr[lo]>=arr[mid])
      return findpi(arr,lo,mid-1);
     return findpi(arr,mid+1,hi);
}
