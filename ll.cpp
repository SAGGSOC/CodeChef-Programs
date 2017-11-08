#include <stdio.h>

int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    long a[n];
	    for(int i=0;i<n;i++)
	      scanf("%lu",&a[i]);
	    int pre=0;  
	    for(int i=1;i<n;i++)
	      {
	          if(a[pre]=a[i])
	          {
	              a[pre]=a[pre]*2;a[i]=0;
	          }
	          else if(a[i]!=0)
	            pre=i;
	       }
	       pre=0;
	       for(int i=0;i<n;i++)
	       {
	           if(a[i])
	            printf("%lu ",a[i]);
	           else pre++; 
	       }
	       for(int i=0;i<pre;i++)
	       {
	           printf("0 ");
	       }
	       printf("\n");
	}
	return 0;
}
