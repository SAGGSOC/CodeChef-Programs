#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;
int remAnagram(string str1, string str2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

