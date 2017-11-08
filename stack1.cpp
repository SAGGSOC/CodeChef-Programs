#include <bits/stdc++.h>
using namespace std;

void dec(string st)
{
    int n=st.length();
    stack<char> s;
    for(int i=0;i<n;i++)
    {
        if(st[i]==']')
        {
            string res="";
            while(!s.empty() && s.top()!='[')
            {
                res=s.top()+res;
                s.pop();
            }
            s.pop();
            int t=1,sum=0;
            
           while(!s.empty() && (s.top()>='0' && s.top()<='9' )){
            sum+=(s.top()-'0')*t;
            s.pop();
            t=t*10;
           }
            
            for(int z=1;z<=sum;z++)
            {
                int j=0;
                while(j<res.length())
                {
                    s.push(res[j]);
                    j++;
                }
            }
           
            
        }
        else
        s.push(st[i]);
        
    }
    string rr="";
    while(!s.empty())
    {
        rr=s.top()+rr;
        s.pop();
    }
    cout<<rr<<endl;
}

int main() {
	//code
		int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    //c(s)<<endl;
	    dec(s);
	}
	return 0;
}
