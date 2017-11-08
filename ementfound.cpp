#include<stdio.h>
int search(int mat[4][4],int n int x)
{
	int i=0,j=n-1;
	while(i<n&&j>=0)
	{
		if(mat[i][j]==x)
		{
			printf("n Found at %d, %d", i, j);
			return 1;
		}
		if(mat[i][j]>x)
		 j--;
		else
		 i++; 
	}
	printf("n Element not found");
	return 0;
}
int main()
{
	int mat[4][4];
}
