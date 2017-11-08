#include<stdio.h>
#include<stdlib.h>
#define ll long
int main()
{
	int t;
	scanf("%d,",&t);
	ll a[26],b[26];
	while(t--)
	{
		for(int i=0;i<26;i++)
		{
			scanf("%ld",&a[i]);
			b[i]=0;
		}
		char str[50001];
		scanf("%s",str);
		for(ll i=0;str[i]!='\0';i++)
		{
			if(b[str[i]-'a']==0)
			{
		    	b[str[i]-'a']=1;
			}
		}
		ll ans=0;
		for(int i=0;i<26;i++)
		{
			if(b[i]==0)
			{
				ans+=a[i];
			}
		}
		printf("%ld\n",ans);
	}
	return 0;
}
