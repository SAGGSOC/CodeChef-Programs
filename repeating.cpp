#include <stdio.h>
#include <stdlib.h>
#define num 256
int *getcount(char *str)
{
	int *count = (int *)calloc(sizeof(int),num);
	int i;
	for(i=0;*(str+i);i++)
	  count[*(str+i)]++;
	return count;  
}
int nonr(char *str)
{
	int *count = getcount(str);
	int index = -1,i;
	for(i=0;*(str+i);i++)
	{
		if(count[*(str+i)]==1)
		{
			index=i;
			break;
		}
	}
	free(count);
	return index;
}
int main()
{
	char str[]="geeksforgeeks";
	int index = nonr(str);
	if(index==-1)
	  printf("Either all characters are repeating");
	else
	  printf("First non-repeating character is %c", str[index]);
	  return 0;  
}
