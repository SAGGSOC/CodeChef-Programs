int equilibrium(int arr[],int n)
{
	int sum=0,leftsum=0;
	for(i=0;i<n;i++)
	 sum+=arr[i];
	for(i=0;i<n;i++)
	 sum-=arr[i];
	 if(leftsum==sum)
	  return i;
	 leftsum+=arr[i];  
}
