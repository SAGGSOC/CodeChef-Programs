#include<iostream>
using namespace std;
 
/* Function that returns the longest subarray
   of non-negative integers */
int longestSubarry(int *arr, int n)
{
   int res = 0;  
   for (int i=0; i<n; i++)
   {
      int curr_count = 0;
      while (i < n && arr[i] >= 0)
      {
         curr_count++;
         i++;
      }
      res = max(res, curr_count);
   }
 
   return res;
}
int main()
{
    int arr[] = {1, 0, 4, 0, 1, -1, -1, 0, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << longestSubarry(arr, n);
    return 0;
}
