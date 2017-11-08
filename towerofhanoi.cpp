#include <stdio.h>
void towerOfHanoi(int n char from_rod, char aux_rod,char to_rod)
{
	if(n==1)
	{
		printf("n Move disk1 from rod %c to rod %c",from_rod, to_rod);
		return;
	}
	towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
}
