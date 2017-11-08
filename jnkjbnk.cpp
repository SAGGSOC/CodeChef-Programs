float findWater(int i, int j, float X)
{
	if(j>i)
	{
		printf("Incorrect Input");
		exit(0);
	}
	float glass[i*(i+1)/2];
	memset(glass,0,sizeof(glass));
	int index=0;
	glass[index]=X;
	for(int row=1;row<=i&&X!=0.0;++row)
	{
		for(int col=1;col<=row;++col,++index)
		
	}
}
