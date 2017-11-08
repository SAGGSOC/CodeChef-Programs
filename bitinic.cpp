#include <iostream>
using namespace std;
int greater1(int a,int b)
{
    if(a>b)
    return a;
    else 
	return b;
}
int bitonic(int arr[],int n)
{
    int big[n];
    int small[n];
    big[0]=1;
    small[0]=1;
    for(int i=1;i<n;i++)
    {
        int max=0;
        int min=0;
        for(int j=i-1;j>=0;j--)
        {
            
            if(arr[j]<arr[i])
            {
                if(big[j]>max)
                max=big[j];
            }
            if(arr[j]>arr[i])
            {
                if(greater1(big[j],small[j])>min)
                min=greater1(big[j],small[j]);
            }
           // cout<<arr[j]<<"d"<<min<<"--"<<max<<endl;
        }
        big[i]=max+1;
        small[i]=min+1;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(big[i]>ans)
        ans=big[i];
        if(small[i]>ans)
        ans=small[i];
       // cout<<big[i]<<" "<<small[i]<<endl;
    }
    return ans;
}
int main() {
	//code
	int n;
	cin>>n;
	while(n--)
	{
	    int k;
	    cin>>k;
	    int arr[k];
	    for(int i=0;i<k;i++)
	    {
	        cin>>arr[i];
	    }
	    cout<<bitonic(arr,k)<<endl;
	}
	return 0;
}
