#include<iostream>
using namespace std;
bool checksparse(int n)
{
	if(n&(n>>1))
	 return false;
	
	return true; 
}
ing
