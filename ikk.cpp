#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
    while(mid<=hi)
    {
    	if(a[mid]<0)
    	 swap(&a[lo++],&a[mid++]);
    	else if(a[mid]==0)
		  mid++;
		else
		  swap(&a[mid], &a[hi--]);   
	}
}
void printArray(int arr[], int arr_size)
{
    int i;
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
int main()
{
    int arr[] = {10,-7,-6,4,5,-2,-3,1,8};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i;
 
    sort(arr, arr_size);
 
    printf("array after segregation ");
    printArray(arr, arr_size);
 
    getchar();
    return 0;
}
