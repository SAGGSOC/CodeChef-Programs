#include<bits/stdc++.h>
using namespace std;
long long int indx[100005];
int main()
{
    long long int flag,a[123456],maxi,mini,i,j,start,ending,temp,ans,n,k;
    scanf("%lld %lld",&n,&k);
    ans=n;
    for(i=0;i<100003;i++)
        indx[i]=-1;
    scanf("%lld",&a[0]);
    indx[a[0]]=0;
    maxi=a[0];
    mini=a[0];
    start=0;
    temp=0;
    for(i=1;i<n;i++)
    {
        ending=-1;
        scanf("%lld",&a[i]);
        if(a[i]<=k)
        {
            indx[a[i]]=i;
            if(maxi<a[i])
                maxi=a[i];
            if(mini>a[i])
                mini=a[i];
    //        cout<<"cin 1: "<<start<<"    "<<i<<"  :"<<ans<<"\n";
        }
        else if(a[i]>maxi)
        {
 
            if(indx[k]>=start && indx[k]<i)
            {
                ans=ans+(((i-start)*(i-start+1))/2)-temp-(i-start);
                temp=(((i-indx[k]-1)*(i-indx[k]))/2)-(i-indx[k]-1);
                start=indx[k]+1;
                maxi=-1;
                mini=INT_MAX;
                for(j=start;j<=i;j++)
                {
                    if(a[j]<mini)
                        mini=a[j];
                    if(a[j]>maxi)
                        maxi=a[j];
                }
 
            }
            indx[a[i]]=i;
            if(maxi<a[i])
                maxi=a[i];
            if(mini>a[i])
                mini=a[i];
            //cout<<"cin 2: "<<start<<"    "<<i<<"  :"<<ans<<"\n";
        }
        else if(a[i]==1 && k==0)
        {
            ans=ans+(((i-start)*(i-start+1))/2)-temp-(i-start);
            temp=0;
            start=i;
            indx[a[i]]=i;
          //  if(maxi<a[i])
                maxi=a[i];
            //if(mini>a[i])
                mini=a[i];
          //  cout<<"cin 3: "<<start<<"    "<<i<<"  :"<<ans<<"\n";
        }
        else if(a[i]==1)
        {
            indx[a[i]]=i;
            if(maxi<a[i])
                maxi=a[i];
            if(mini>a[i])
                mini=a[i];
        //     cout<<"cin 4: "<<start<<"    "<<i<<"  :"<<ans<<"\n";
 
        }
        else
        {
            j=((mini/a[i])*a[i])+k;
            ending=-1;
       //     cout<<mini<<"   "<<maxi;
            for(;j<=maxi;j=j+a[i])
            {
//             cout<<"x";
                if(indx[j]>=start && indx[j]<i)
                        if(ending<indx[j])
                                ending=indx[j];
            }
            if(ending!=-1)
            {
                ans=ans+(((i-start)*(i-start+1))/2)-(i-start)-temp;
                temp=(((i-ending-1)*(i-ending))/2)-(i-ending-1);
                start=ending+1;
                maxi=-1;
                mini=INT_MAX;
                for(j=start;j<=i;j++)
                {
                    if(a[j]<mini)
                        mini=a[j];
                    if(a[j]>maxi)
                        maxi=a[j];
                }
 
            }
            indx[a[i]]=i;
            if(maxi<a[i])
                maxi=a[i];
            if(mini>a[i])
                mini=a[i];
      //          cout<<"cin 5: "<<start<<"    "<<i<<"  :"<<ans<<"\n";
        }
    }
    //cout<<"temp: "<<temp<<"\n";
    if(ending==-1)
    ans=ans+(((i-start)*(i-start+1))/2)-(i-start)-temp;
    cout<<ans<<"\n";
    return 0;
}
 
