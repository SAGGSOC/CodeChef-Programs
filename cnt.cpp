#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    sort(ar.begin(),ar.end());
    int cnt=0;
     for(int ar_i = 0; ar_i < n; ar_i++){
       cout<< ar[ar_i];
    }
    for(int i=0;i<n;i++)
    {
        if(i+1!=n){
          if(ar[i]==ar[i+1])
            {
			cnt++;i++;
			}    
        }
        
    }
    // Complete this function
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

