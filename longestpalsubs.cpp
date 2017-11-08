#include <stdio.h>
#include <string.h>
void printSubsStr(char* str, int low, int high)
{
	for(int i=low;i<=high;++i)
	  printf("%c",str[i]);
}
int longestPalSubstr(char *str)
{
	int n=strlen(str);
	bool table[n][n];
	memset(table,0,sizeof(table));
	int maxLength = 1;
	for(int i=0;i<n;++i)
	  table[i][i]=true;
	int start = 0;
	for(int i=0;i<n-1;++i)
	  table[i][i]=true;
	int start = 0    
}
int main()
{
    char str[] = "forgeeksskeegfor";
    printf("nLength is: %dn", longestPalSubstr( str ) );
    return 0;
}
