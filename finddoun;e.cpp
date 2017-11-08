#include <bits/stdc++.h>
using namespace std;

double find(double a[],double mid,int n)
{
    double x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mid) x+=(1/(a[i]-mid));
        else if(a[i]<mid) x-=(1/(mid-a[i]));
    }
    return x;
}

void bs(double a[],double l,double r,int n)
{
    while(l<=r)
    {
        double mid=(l+r)/2.0;
        double f=find(a,mid,n);
        if(f==0 || fabs(r-mid)<0.0000000000001){
            printf("%.2lf ",mid);break;
        }
        if(f>0) r=mid;
        else if(f<0) l=mid;
    }
}


int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		double *a=new double[n+1];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
		    bs(a,a[i],a[i+1],n);
		}
		cout<<endl;
		
	}
    
    
	return 0;
}
