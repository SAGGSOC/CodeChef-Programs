#include <iostream>
using namespace std;
 
int countWindowDistinct(int win[], int k)
{
    int dist_count = 0;
    for (int i=0; i<k; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (win[i] == win[j])
              break;
        if (j==i)
            dist_count++;
    }
    return dist_count;
}
void countDistinct(int arr[], int n, int k)
{

    for (int i=0; i<=n-k; i++)
       cout << countWindowDistinct(arr+i, k) << endl;
}
 

int main()
{
    int arr[] = {1, 2, 1, 3, 4, 2, 3},  k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    countDistinct(arr, n, k);
    return 0;
}
