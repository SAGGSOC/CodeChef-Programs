#include <iostream>
#include<bits/stdc++.h>
#define MOD 1000000007;

using namespace std;

long long int a,b,c,d;
void fib(long long,long long ans[]);

void fib(long long n, long long ans[])
{
    if(n==0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fib(n/2,ans);
    
    a = ans[0]; //F(n)
    b = ans[1]; //F(n+1)
    c = 2*b-a;
    if(c<0)
        c += MOD;
    c = (a*c)%MOD;   // F(2n)
    d = (a*a + b*b)%MOD;  // F(2n+1)
    
    if(n%2 == 0){
        ans[0] = c;
        ans[1] = d;
    }
    else{
        ans[0] = d;
        ans[1] = c+d;
    }
}

int main() {
	int z=0,cases;
	cin>>cases;
	while(z<cases)
	{
	    long long n;
	    cin>>n;
	    long long ans[2] = {0};
	    for(int i=0;i<2;i++)
	    {
	    	printf("%d",ans[0]);
		}
	    fib(n+1,ans);
	    cout<<ans[0]<<endl;
	    z++;
	}
	return 0;
}
