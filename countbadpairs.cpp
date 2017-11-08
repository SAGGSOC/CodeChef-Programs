#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define lld long long
int a[MAX];int idx[MAX];
int main()
{
	memset(idx,-1,sizeof(idx));
	int n,m;
	scanf("%d%d",&n,&m);
	int maxi = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		maxi = max(maxi,a[i]);
	}
	lld cnt=1;
	int prev=-1;
	if(m!=0)
	{
	  idx[a[0]]=0;
	  for(int i=1;i<n;i++)
	  {
	  	if(m<a[i])
	  	{
	  		for(int j=0;j<MAX;j+=a[i])
	  		{
	  			if(j+m<MAX&&idx[j+m]!=-1)
	  			 prev = max(prev,idx[j+m]);
			  }
		  }
		  idx[a[i]]=i;
		  count=count +(i-prev);
	  }	
	}
	else 
	{
		idx[a[0]]=0;
		for(int i=1;i<n;i++)
		{
			for(int j=a[i];j<=maxi;j+=a[i])
			{
				if(idx[j]!=-1)
				prev=max(prev,idx[j-m]);
			}
			idx[a[i]]=i;
			count=count+(i-prev);
		}
	}
	printf("%lld\n",count);
	return 0;
}
