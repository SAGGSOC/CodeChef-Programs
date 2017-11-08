#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,m,n;
	printf("Enter m");
	scanf("%d",&m);
	printf("Enter n");
	for(i=n;i>=1;i--)
	 if(i%m==0)
	  {
	  printf("%d",i);
	  break;
      }
    for(i=n+1;i<=n+m+1;i++)
	 if(i%m==0)
	  {
	  	printf("%d",i);
		break;
		} 
		 
}
