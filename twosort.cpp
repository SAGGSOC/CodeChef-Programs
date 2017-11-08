// C++ program sort array in even and odd manner.
// The odd numbers are to be sorted in descending
// order and the even numbers in ascending order
#include<bits/stdc++.h>
using namespace std;

// To do two way sort. First sort even numbers in
// ascending order, then odd numbers in descending
// order.
void twoWaySort(int arr[], int n)
{
    int count_pos = 0;
    // Make all odd numbers negative
    for (int i=0 ; i<n ; i++)
        if (arr[i] & 1){ // Check for odd
            // counting only positive odd numbers
            if(arr[i] > 0){
                count_pos++;
            }
            arr[i] *= -1;
        }

    // Sort positive odd and all even all numbers
    sort(arr, arr+n);

    // Retaining original array
    for (int i=0 ; i<n ; i++)
        if (arr[i] & 1)
            arr[i] *= -1;

    // sorts all the numbers.
    sort(arr+count_pos, arr+n);
}

// Driver code
int main()
{
    /// With negative odd numbers.
    int arr[] = {1, -3, 2, 7, -5, 4};
    int n = sizeof(arr)/sizeof(int);
    twoWaySort(arr, n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

