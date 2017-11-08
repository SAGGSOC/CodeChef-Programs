#include<bits/stdc++.h>
#define max 50
using namespace std;
 
void printString(int n)
{
	char str[max];
	int i=0;
	while(n>0)
	{
		int rem=n%26;
		if(rem==0)
		{
		  str[i++]='Z';
		  n=(n/26)-1;
		}
		else
		{
			str[i++]=(rem-1)+'A';
			n=n/26;
		}
	}
	str[i] = '\0';
    reverse(str, str + strlen(str));
    cout << str << endl;
 
    return;

}
int main()
{
    printString(26);
    printString(51);
    printString(52);
    printString(80);
    printString(676);
    printString(702);
    printString(705);
    return 0;
}
