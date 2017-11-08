#include <stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
       return a;
    return gcd(b, a%b);
}
int pour(int fromcap, int tocap, int d)
{
	int from = fromcap;
	int to=0;
	int step = 1;
	while(from!=d&&to!=d)
	{
		int temp = min(from,tocap-to);
		to+=temp;
		from-=temp;
		step++;
		if(from==d||to==d)
		  break;
		if(from==0)
		{
			from=fromcap;
			step++;
		  } 
		 if(to==tocap)
		 {
		 	to=0;
		 	step++;
		   }  
		
	}
	return step;
}
int minsteps(int m, int n, int d)
{
	if(m>n)
	 swap(m, n);
	if(d>n)
	  return -1;
	if((d%gcd(n,m))!=0)
	  return -1;
	 return min(pour(n,m,d),   // n to m
               pour(m,n,d));  // m to n
}
int main()
{
    int n = 3, m = 5, d = 4;
 
    printf("Minimum number of steps required is %d",
           minSteps(m, n, d));
 
    return 0;
}     
}
