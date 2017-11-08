#include <bits/stdc++.h>
using namespace std;
int maxproduct(int ar[],int n)
{
	if(n<3)
	  return -1;
	sort(arr, arr+n);
	
	return max(arr[0]*arr[1]*arr[n-1],arr[n-1]*arr[n-2]*arr[n-3]);  
}
int main()
{
	int arr[]={-10,-3,5,6,-20};
}
