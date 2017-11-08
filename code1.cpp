#include <bits/stdc++.h>
#include<stdio.h>
#include <iostream>
using namepace std;
int main()
{
  int t;
  cin>>t;int ar[26],cnt[26]={0};char s[10000];
  while(t--)
  {
    for(int i=0;i<26;i++)
    { cin>>ar[i];}
      cin>>s;
      for(i=0;i<strlen(s);i++)
      {
        ctr[s[i]-'a']++;
        }
      for(i=0;i<26;i++)
      {
         if(ctr[i]==0)
         { 
           cout<<ar[i];
         }
         
      }
   }
  return 0; 
}   
