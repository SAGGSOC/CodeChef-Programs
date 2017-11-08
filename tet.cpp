#include <bits/stdc++.h>
using namespace std;
/*void firstnonrepeating(char str[])
{
	queue<char> q;
	int charCount[26]={0};
	for(int i=0;str[i];i++)
	{
		q.push(str[i]);
	    charCount[str[i]-'a']++;
	    while(!q.empty())
	    {
	    	if(charCount[q.front()-'a']>1)
	    	 q.pop();
	    	else
			{
				cout<<q.front()<<" ";
				break;
			 } 
		}
		if(q.empty())
		 cout<<-1<<" ";
	}
	cout<<endl;
}*/
void firstnonrepeating(char str[])
{
    queue<char> q;
    int charCount[26] = { 0 };
 
    // traverse whole stream
    for (int i = 0; str[i]; i++) {
 
        // push each character in queue
        q.push(str[i]);
 
        // increment the frequency count
        charCount[str[i]-'a']++;
 
        // check for the non pepeating character
        while (!q.empty())
        {
            if (charCount[q.front()-'a'] > 1)
                q.pop();
            else
            {
                cout << q.front() << " ";
                break;
            }
        }
 
        if (q.empty())
            cout << -1 << " ";
    }
    cout << endl;
}
int main() {
    int t,n;char str[100];
    cin>>t;
    while(t--)
	{    
	    int n;
	    cin>>n;
	    char str[n];
	    for(int i = 0; i < n; i++){
	        cin>>str[i];
	    }
	    firstnonrepeating(str);
	}
	return 0;
}
