#include <stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int ar[], int low, int high)
{
	int pivot = arr[high];
	int i = (low-1);
	for(int j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++
		}
	}
}
