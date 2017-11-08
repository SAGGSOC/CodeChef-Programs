#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7}
	int n =sizeof(arr)/sizeof(arr[0]);
	printf("Enter d");
	scanf("%d",&d);
	rotate(arr,d,n);
}
void rarray(int arr[],int st,int e)
{
	int temp;
	while(st<e)
	{
		temp=arr[st];
		arr[st]=arr[e];
		arr[e]=temp;
		st++;
		e--;
	}
}
void rotate(int arr[],int d,int n)
{
	rarray(arr,0,n-1);
	rarray(arr,d,n-1);
	rarray(arr,0,n-1);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
 
