#include <bits/stdc++.h>
#include <list>
using namespace std;
#define N 8
bool Matrix[N][N] = {{0,0,1,0},{0,0,1,0},{0, 0, 0, 0},{0, 0, 1, 0}};
bool knows(int a, int b)
{
    return MATRIX[a][b];
}
int findCelebrity(int n)
{
	stack<int> s;
	int C;
	for(int i=0;i<n;i++)
	  s.push(i);
	int A = s.top();
	s.pop();
	int B=s.top();
	s.pop();
	while(s.size()>1)
	{
		if(knows(A,B))
		{
			A=s.top();
			s.pop();
		}
		else
		{
			B=s.top();
			s.pop();
		}
	}
	C=s.top();
	s.pop();
	if(knows(C,B))
	 C=B;
	if(knows(C,A))
	 C=A;
	for(int i=0;i<n;i++)
	{
	  if((i!=C)&&(knows(C,i)||!knows(i,C)))
	   return -1;	
	  }  
	 return C; 
}
int main()
{
    int n = 4;
    int id = findCelebrity(n);
    id == -1 ? cout << "No celebrity" :
               cout << "Celebrity ID " << id;
    return 0;
}
