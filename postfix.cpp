#include <iostream>
#include<stack>
using namespace std;
bool check(string str)
{
    stack<char>s;
    for(int i=0;i!=str.length();i++)
    {
        if(!s.empty() && str[i]==')')
        {
            if(s.top()=='(')
            s.pop();
            else
            return 0;
        }
        else if(!s.empty() && str[i]==']')
        {
            if(s.top()=='[')
            s.pop();
            else
            return 0;
        }
        else if(!s.empty() && str[i]=='}')
        {
            if(s.top()=='{')
            s.pop();
            else
            return 0;
        }
        else if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        s.push(str[i]);
        else return 0;
    }
    if(!s.empty())
    return 0;
    return 1;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    if(check(s))
	    cout<<"balanced"<<endl;
	    else
	    cout<<"not balanced"<<endl;
	}
	return 0;
}
