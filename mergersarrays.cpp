#include<stdio.h>

int main()
{
	int arr1={1,3,5,7};
	int arr2={2,4,6,8};
	int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
}
void mergerarrays(int arr[],int arr2[],int arr3)
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2)
	{
    	if(arr1[i]<arr2[j])
    	  arr3[k++]=arr1[i++];
    	else
		  arr3[k++]=arr2[j++];    
    }
    while(i<n1)
      arr3[k++]=arr1[i++];
    while(j<n2)
	  arr3[k++]=arr2[j++];  
}
i
