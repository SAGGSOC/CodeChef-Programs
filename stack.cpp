#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    stack<int >s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&& s.top()>=arr[i])
          s.pop();
        if(s.empty())
           cout<<"-1 ";
        else
           cout<<s.top()<<" ";
           s.push(arr[i]);
    }
    cout<<endl;
}
	return 0;
}
