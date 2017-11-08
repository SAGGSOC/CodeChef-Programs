#include <stdio.h>
#include <limits.h>
int max(int a, int b) { return (a > b)? a: b; }
int eggDrop(int n,int k)
{
	int eggFloor[n+1][k+1];
	int res;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		eggFloor[i][1]=1;
		eggfloor[i][0]=0;
	}
	for(j=1;j<=k;j++)
	  eggFloor[1][j]=j;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=k;j++)
		{
			eggFloor[i][j]=INT_MAX;
			for(x=1;x<=j;x++)
			{
				
			}
		}
	  }  
}
