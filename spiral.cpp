#include <stdio.h>
#define R 3
#define C 6
void spiralPrint(int m,int n,int a[R][C])
{
	int i,k=0,l=0,x=1,arr[m][n];
	while(k<m&&l<n)
	{
		for(i=l;i<n;++i)
		{
			arr[k][i]=x++;
			printf("%d ",a[k][i]);
		}
		k++;
		for(i=k;i<m;++i)
		{
			arr[i][n-1]=x++;
			printf("%d ",a[i][n-1]);
		}
		n--;
		if(k<m)
		{
			for(i=n-1;i>=1;--i)
			{
				arr[m-1][i]=x++;
				printf("%d ",a[m-1][i]);
			}
			m--;
		}
		if(l<n)
		{
			for(i=m-1;i>=k;--i)
			{
				arr[i][l]=x++;
				printf("%d ",a[i][l]);
			}
			l++;
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
	    }
	    printf("\n");
	}
	
}
int main()
{
    int a[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    };
 
    spiralPrint(R, C, a);
    return 0;
}