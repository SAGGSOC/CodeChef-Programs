#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<pair<int, int> >findSubArrays(int arr[],int n)
{
	unordered_map<int,vector<int> > map;
	vector <pair<int, int>> out;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum==0)
		 out.push_back(make_pair(0,i));
	}
}
