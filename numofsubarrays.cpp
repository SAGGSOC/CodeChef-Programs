int numOfsubarrays(int arr[],int n)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int pro=arr[i];
		int sum=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(pro==sum)
			 count++;
			 
			pro*=arr[j];
			sum+=arr[j]; 
		}
		if(pro==sum)
		 cnt++;
	}
	return count;
}s
