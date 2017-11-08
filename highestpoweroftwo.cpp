int highestpoweroftwo(insigned int n)
{
	if(n<1)
	 return 0;
	int res=1;
	for(int i=0;i<8*sizeof(unsigned int);i++)
	{
		int curr=1<<i;
		if(curr>n)
		break;
		res=curr;
	 } 
	 return res;
}
