#include <stdio.h>
int getSingle(int arr[],int n)
{
	int ones=0,twos=0;
	int com;
	for(int i=0;i<n;i++)
	{
		twos=twos|(ones&arr[i]);
		ones=ones^arr[i];
		com = ~(ones & twos);
		ones&=com;
		twos&=com;
		
	}
}
