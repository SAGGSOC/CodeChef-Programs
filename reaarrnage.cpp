#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n,int x)
{
	multimap<int ,int> m;
	for(int i=0;i<n;i++)
	  m.insert(makepair(abs(x-arr[i]),arr[i]));
	int i=0;
	for(auto it=m.begin();it!=m.end();it++)
	  arr[i++]=(*it).second;  
}
void printArray(int arr[] , int n)
{
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}
 
// Driver code
int main()
{
    int arr[] = {10, 5, 3, 9 ,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;
    rearrange(arr, n, x);
    printArray(arr, n);
    return 0;
}

