int findCandiadate(int a[],int size)
{
	int maj_index=0,cnt=1;
	int i;
	for(i=1;i<size-1;i++)
	{
		if(a[maj_index]==a[i])
		{
			ant++;
		}
		else
		{
			cnt--;
		}
		if(cnt==0)
		{
			maj_index=i;
			count=1;
		}
	}
	return a[maj_index];
}
bool isMajority(int a[],int size, int cand)
{
	int i,cnt=0;
	for(i=0;i<size;i++)
	 if(a[i]==cand)
	  cnt++;
	 if(cnt>size/2)
	  return 1;
	 else 
	 return 0;  
}
