#include<iostream>
#include<map>
using namespace std;
int checkbadpair(int *arr)
{
	int cnt=0;int k=3;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]%arr[j]==k)
			{
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
  map<int,int>mymap;//ye hashtable type hota hai,key value pair
  std::map<int,int>::iterator it;
  int arr[]={9,8,5,4,3};
  
  int n=5;
  int arr1[n];
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
    	
    	{
		for(int k=i;k<=j;k++)
    	 {
           arr1[k]=arr[k];
		   checkbadpair(arr1);		
		  }
		  cout<<endl;
    	}
    	
	}
	cout<<endl;
  }
}

