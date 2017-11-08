#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=arr[j];
			}
		}
	}
}
int binarysearch(int arr[],int l,int r,int x)
{
	int mid;
	if(r>=l)
	{
		mid = (l+(r-1))/2;
		if(arr[mid]==x)
		return mid;
		if(arr[mid]>x)
		 return binarysearch(arr, l, mid-1, x);
		return binarysearch(arr, mid+1, r, x); 
	}
	return -1;
}
int mean(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	  sum+=arr[i];
	float avg=sum/.5f; 
	return avg ; 
}
int main()
{
	int n;
   printf("Enter thhe no. of elements");
   scanf("%d ",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   bubblesort(arr,n);
   printf("ELements are");
   for(int i=0;i<n;i++)
   {
   	printf("%d ",arr[i]);
   }
   printf("Enter the element to be searched");
   int se;
   scanf("%d",&se);
   if(binarysearch(arr,0,n-1,se)==1)
   printf("found");
   else
   printf("Not found"); 
   printf("mean: %f",mean(arr,n));
}
