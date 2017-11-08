#include <iostream>
using namespace std;
bool aredisjoint(int set1[], int set2[], int m, int n)
{
	for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	    if(set1[i]==set2[j])
	      return false;
	
	return true;      
}
int main()
{
	int set1[]={12,34,11,9,3};
	int set2[]={7,2,1,5};
	int m = sizeof(set1)/sizeof(set1[0]);
	int n = sizeof(set2)/sizeof(set2[0]);
    areDisjoint(set1, set2, m, n)? cout << "Yes" : cout << " No";
    return 0;
}
