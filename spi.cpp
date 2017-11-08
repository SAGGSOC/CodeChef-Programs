#include <stdio.h>
struct Interval
{
	int buy;
	int sell;
};
void stockBuySell(int price[],int n)
{
	if(n==1)
	 return;
	int cnt=0;
	Interval sol[n/2+1];
	int i=0;
	while(i<n-1)
	{
		while((i<n-1)&&(price[i+1]<=price[i]))
		 i++;
		if(i==n-1)
		 break;
		sol[count].buy=i++;
		while((i<n)&&(price[i]>=price[i-1]))
		 i++;
		sol[count].sell=i-1;
		count++;   
	 } 
}
if(count==0)
  printf("There is no day when")
