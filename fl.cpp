#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double findWater(int i,int j,double X)
{
	if(j>i)
	{
		return -1.0;
	}
	double glass[i*(i+1)/2];
	memset(glass, 0, sizeof(glass));
	int index=0;
	glass[index]=X;;
	for(int row=1;row<=i&&X!=0.0;++row)
	{
		for(int col=1;col<=row;++col,++index)
		{
			X=glass[index];
			glass[index]=(X>=1.0)?1.0:X;
			X = (X>=1.0)?(X-1):0.0;
			glass[index+row]+=X/2;
			glass[index+1+row]+=X/2;
		}
	}
	return glass[i*(i-1)/2+j-1];
}
int main()
{
    int i = 6, j = 3;
    double X = 12.0; // Total amount of water
 
    printf("Amount of water in jth glass of ith row is: %f",
            findWater(i, j, X));
 
    return 0;
}
