#include <bits/stdc++.h>
using namespace std;
int countPairs(int arr[], int n)
{
	int cnt=0,r=0,l=0;
	vector<bool> visited(n,false);
	while(right<n)
	{
		while(right<n&&!visited[arr[right]])
		{
			count+=(right-left);
			visited[arr[right]]=true;
			right++;
		}
		while(left<right&&(right!=n&&visited[arr[right]]))
		{
			visited[arr[left]]=false;
			left++;
		}
	}
	return count;
}
int main()
{
	int arr[]={1,4,2,4,3,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<countPairs(arr,n);
	return 0;
}
