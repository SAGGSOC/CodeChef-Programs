#include<stdio.h>
#include<string.h>
int findlength(char *str)
{
	int n=strlen(str);
	int maxlen=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j+=2)
		{
			int l=j-i+1;
			int lsum=0,rsum=0;
			for(int k=0;k<l;k++)
			{
				lsum+=(str[i+k]-'0');
				rsum+=(str[i+k+l/2]-'0');
			}
			if(lsum==rsum&&maxlen<length)
			  maxlen=l;
		}
	}
	return maxlen;
}

