void countDistinct(int a[],int k, int n)
{
	int count=0;
	unordered_map<int, int> c;
	unordered_map<int, int>::iterator it;
	for(int i=0;i<k;i++)
	{
		if(c[a[i]]>0)
		{
			c[a[i]]++;
		}
		else
		{
			c[a[i]]++;
			count++;
		}
	}
	cout<<count<<" ";
	for(int i=k;i<n;i++){
		if(c[a[i-k]]==1)
		{
			c[a[i-k]]--;
			count--;
		}
		else c[a[i-k]]--;
		
	 if(c[a[i]]>0)
     {
       c[a[i]]++;
     }
     else
     {
      c[a[i]]++;
       count++;
     }
    cout << count << " ";
     }  
	}
	
}
