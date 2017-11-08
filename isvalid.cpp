#include <bits/stdc++.h>
#define R 3
#define C 5
using namespace std;
bool isvalid(int i,int j)
{
	return (i>=0&&j>=0&&i<R&&j<C);
}
struct ele{
	int x,y;
};
bool isdelim(ele temp)
{
	return (temp.x == -1 && temp.y == -1);
}
bool checkall(int arr[][C])
{
    for (int i=0; i<R; i++)
       for (int j=0; j<C; j++)
          if (arr[i][j] == 1)
             return true;
    return false;
}
int rotoranges(int arr[][C])
{
	queue<ele> Q;
	ele temp;
	int ans = 0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(arr[i][j]==2)
			{
				temp.x=i;
				temp.y=j;
				Q.push(temp);
			}
		}
	}
	temp.x=-1;
	temp.y=-1;
	Q.push(temp);
	while(!Q.empty())
	{ bool flag = false;
	  while(!isdelim(Q.front()))
	  {
	  	temp=Q.front();
	  	if(isvalid(temp.x+1,temp.y)&&arr[temp.x+1][temp.y]==1)
	  	{
	  		if(!flag)
	  		{
			  ans++;
			  flag=true;
		  }
	  }
		
	}
}
