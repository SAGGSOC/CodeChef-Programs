#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		char s[10000];
		cin>>s;
		cout<<isValid(s)<<endl;
	}
	return 0;
}
int isValid(char *ip)
{
    stack<int> s;
    int j,i=0,flag=1,m,num,x;
    
         
        while(ip[i]!='\0')
         {
            if(ip[i]=='.')
             {
                 flag=0;
                 break;
             }
            num=0;
            m=1;
           while(ip[i]!='\0'&&ip[i]!='.')
               {
                   s.push(ip[i]-48);
                   printf("\n ip i %d",ip[i]-48);
                   i++;
               }
            while(!s.empty())
               {
                   x=s.top();
                   s.pop();
                   num=num+(m*x);
                   m=m*10;
                   printf("\n num: %d x: %d",num,x);
               }
              if(!(num>=0&&num<=255))
                {
                    flag=0;
                    break;
                }
                i++;
         }
       if(flag==0||ip[i-1]=='.')
          return 0;
        else 
          return 1; 
}
