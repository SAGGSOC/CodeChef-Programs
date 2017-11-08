#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		  cin>>a[i];
		int max1=0,dist=0;
		if(n<x)
		{
			for(int i=0;i<n;i++)
			  max1+=a[i];
		   
		  cout<<max1<<endl;
		  continue; 
	    }
	for(int i=0;i<x;i++)
	  max1+=a[i];
	  dist=max1;
	  int i=0,j=x;
	  while(i<n){
	  	dist=dist-a[i]+a[j%n];
	  	max1=max(max1,dist);
	  	i++;j++;
	  }
	  cout<<max1<<endl;
   }
   return 0;
}
