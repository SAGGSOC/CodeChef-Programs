#include <iostream>
using namespace std;
int turnOffK(int n,int k)
{
	if(k<=0)
	return n;
	else
	return (n&~(1<<(k-1)));
}
int main()
{
	int n=15;
	int k=4;
	cout<<turnOffK(n,k);
	return 0;
}
