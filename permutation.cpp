#include <bits/stdc++.h>
using namespace std;
 
// Function to generate permutations
void permute(string input)
{
    int n = input.length();
 
    // Number of permutations is 2^n
    int max = 1 << n;
 
    // Using all subsequences and permuting them
    for (int i = 0; i < max; i++) {
 
        // Converting string to lower case
        transform(input.begin(), input.end(), input.begin(), 
                                                 ::tolower);
         
        // If j-th bit is set, we convert it to upper case
        string combination = input;
        for (int j = 0; j < n; j++) 
            if (((i >> j) & 1) == 1)
                combination[j] = toupper(input.at(j));        
 
        // Printing current combination
        cout << combination << " ";
    }
}
 
// Driver code
int main()
{
    permute("ABC");
    return 0;
}

