#include <iostream>
#include <regex>
using namespace std;
int main()
{
	string a = "GeeksForGeeks";
	regex b("(Geek)(.*)");
	if(regex_match(a,b))
	 cout<<"String a matches regular expression 'b' \n";
	if(regex_match(a.begin(), a.end(),b))
	 cout<<"String 'a' matches with regular expression " 
}
