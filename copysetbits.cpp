#include <bits/stdc++.h>
using namespace std;
void copySetBits(unsigned &x, unsigned y,unsigned l,unsigned r)
{
	if(l<1||r>32)
	 return;
	for(int i=l;i<r;i++)
	{
		int mask=1<<(i-1);
		if(y&mask)
		 x=x|mask;
	 } 
}
maskLength = (1<<(r-l+1))-1;
int mask = ((maskLength)<<(l-1))&y;
x=x|mask;
