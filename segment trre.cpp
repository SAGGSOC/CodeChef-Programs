#include <bits/stdc++.h>
using namespace std;
 
#define MAX 1000
 
// allocate space for tree
int tree[4*MAX];
 
// declaring the array globally
int arr[MAX];
 

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int query(int node, int start, int end, int l, int r)
{
    // Completely outside the segment, returning
    // 1 will not affect the lcm;
    if (end<l || start>r)
        return 1;
 
    // completely inside the segment
    if (l<=start && r>=end)
        return tree[node];
 
    // partially inside
    int mid = (start+end)/2;
    int left_lcm = query(2*node, start, mid, l, r);
    int right_lcm = query(2*node+1, mid+1, end, l, r);
    return lcm(left_lcm, right_lcm);
}
 
 
