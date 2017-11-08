#include <stdio.h>
bool isNumericChar(char x)
{
    return (x >= '0' && x <= '9')? true: false;
}
int myatoi(char *str)
{
	if(*str==NULL)
	 return 0;
	int res=0,sign=1,i;
	if(str[0]=='-')
	{
		sign=-1;i++;
	}
	for(i =0;str[i]!='\0';++i)
	 {
	   if(isNumericChar(str[i])==false)
	    return 0;
     
	  res=res*10+str[i]-'0';
     }
	return sign*res;  
}
int main()
{
	char str[]="89789";
	int val=myatoi(str);
	printf ("%d ", val);
    return 0;
}
