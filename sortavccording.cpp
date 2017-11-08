void sortAccording(int A1[],int A2[], int m, int n)
{
	int temp[m],visited[m];
	for(int i=0;i<m;i++)
	{
		temp[i]=A1[i];
		visited[i]=0;
	}
	sort(temp, temp+m);
	int ind=0;
	for(int i=0;i<n;i++)
	{
		int f=first(temp,0,m-1,A2[i],m);
		if(f==-1)
		 continue;
		 for(int j=f;(j<m&&temp[j]==A2[i]);j++)
	}
}
