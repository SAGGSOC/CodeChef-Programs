#include <bits/stdc++.h>
using namespace std;
string encodeString(string str)
{
	unordered_map<char, int> map;
	string res="";
	int i=0;
	for(char ch:str)
	{
		if(map.find(ch)==map.end())
		  map[ch]=i++;
		
		res+=to_string(map[ch]);
	}
	return res;
}
