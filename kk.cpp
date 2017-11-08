#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    long arr[x];
	    for(int i=0;i<x;i++)
	        cin>>arr[i];
	    int pre=0;
	    for(int i=1;i<x;i++)
	    {
	        if(arr[pre]==arr[i])
			{
	            arr[pre]=arr[pre]*2;arr[i]=0;
	        }
	        else if(arr[i]!=0)
	            pre=i;
	    }
	    pre=0;
	    for(int i=0;i<x;i++)
	    {
	        if(arr[i])
	            cout<<arr[i]<<" ";
	        else pre++;
	    }
	    for(int i=0;i<pre;i++)
	    {
	        cout<<"0"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
