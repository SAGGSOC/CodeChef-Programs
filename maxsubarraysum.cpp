#include <iostream>
using namespace std;
int maxSubArraySum(int a[],int size)
{
	int max_so_far = a[0];
	int curr_sum = a[0];
	for(int i=0;i<size;i++)
	{
		curr_sum=max(a[i],curr_sum+a[i]);
		max_so_far=max(max_So_far,currs_sum);
	}
  return max_so_far;
}
int maxSubarraySum(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here<0)
		 max_ending_here=0;
		 if(maxs0far<maxendinghere)
		  maxsodfa
	}
}
