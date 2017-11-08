#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int ctr[26],t,n,i;
    cin>>t;
    while(t--)
    {
        std::cin>>n;
        char str[n];
        cin>>str;
        for(i=0;i<n;i++)
        {
            ctr[str[i]-'a']++;
        }
        for(i=0;i<n;i++)
        {
            if((ctr[str[i]])==1)
             {
                 cout<<str[i];
                 break;
             }
             else
             cout<<-1;
        }
        
    }
	//code
	return 0;
}n
