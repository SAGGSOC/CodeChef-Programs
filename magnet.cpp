#include<bits/stdc++.h>
using namespace std;
double search(double l,double h,double a[],int n){
    double epi=0.0000000000001;
    double force=0.0,m,x;
    m=(l+h)/2.0;
    for(int i=0;i<n;i++){
        x=1.0/(m-a[i]);
        force+=x;
    }
    if(abs(force)<epi)
        return m;
    if(force>0)
        return search(m,h,a,n);
    else
        return search(l,m,a,n);
}
int main()
 {
     int t;
     scanf("%d",&t);
     while(t--){
         int n;
         scanf("%d",&n);
        double a[n];
        for(int i=0;i<n;i++)
        scanf("%lf",&a[i]);
        for(int i=0;i<n-1;i++){
            double ans=search(a[i],a[i+1],a,n);
            printf("%.2lf ",ans);
        }
        printf("\n");
    }

	//code
	return 0;
}
