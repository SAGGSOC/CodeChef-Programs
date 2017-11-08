bool find3num(int a[],int arr_size,int sum)
{
	int l,r;
	sort(A,A+arr_size);
	for(int i=0;i<arr_size-2;i++)
	{
		l=i+1;
		r=arr_size-1;
		while(l<r)
		{
			if(A[l]+A[r]+A[i]==sum)
			{
				printf("triplet")
				return true;
			}
			else if(A[l]+A[r]+A[i]<sum)
			 l++;
			else r--; 
		}
	}
	return false;
}
