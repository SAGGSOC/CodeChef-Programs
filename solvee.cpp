#include <bits/stdc++.h>
using namespace std;

int a[105],n;

void solve(int l,int r)
{
    if(l>r)
        return;
    if(l==r)
    {
        cout<<a[l]<<" ";
        return;
    }
    int i=l+1;
    while(i<=r)
    {
        if(a[i]<a[l])
            i++;
        else
            break;
    }
    solve(l+1,i-1);
    solve(i,r);
    
}

int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        solve(0,n-1);
        cout<<endl;
    }
	//code
	return 0;
}
