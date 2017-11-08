#include <stdio.h>
int getSingle(int arr[],int n)
{
	int ones=0,twos=0;
	int com_bit_mask;
	for(int i=0;i<n;i++)
	{
		twos = twos|(ones&arr[i]);
		ones=ones^onesarr[i];
		
	}
}
