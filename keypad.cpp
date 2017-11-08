#include<stdio.h>
int getCount(char keypad[][3],int n)
{
	if(keypad==NULL||n<=0)
	 return 0;
	if(n==1)
	 return 10;
	int row[] = {0, 0, -1, 0, 1};
    int col[] = {0, -1, 0, 1, 0};
	int count[10][n+1];
    int i=0, j=0, k=0, move=0, ro=0, co=0, num = 0;
    int nextNum=0, totalCount = 0;
    for (i=0; i<=9; i++)
    {
        count[i][0] = 0;
        count[i][1] = 1;
    }
   
}
