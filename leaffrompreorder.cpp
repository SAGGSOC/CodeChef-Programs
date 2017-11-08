// Stack based C++ program to print leaf nodes
// from preorder traversal.
#include<bits/stdc++.h>
using namespace std;
 
// Print the leaf node from the given preorder of BST.
void leafNode(int preorder[], int n)
{
    stack<int> s;
    for (int i = 0, j = 1; j < n; i++, j++)
    {
        bool found = false;
 
        if (preorder[i] > preorder[j])
            {
		     printf("%d  i",preorder[i]);
			s.push(preorder[i]);
           }
 
        else
        {
            while (!s.empty())
            {
                if (preorder[j] > s.top())
                {
                	printf("%d  j",preorder[j]);
                    s.pop();
                    found = true;
                }
                else
                    break;
            }
        }
 
        if (found)
            cout << preorder[i] << " ";
    }
 
    // Since rightmost element is always leaf node.
    cout << preorder[n - 1];
}
 
// Driver code
int main()
{
    int preorder[] = { 890, 325, 290, 530, 965 };
    int n = sizeof(preorder)/sizeof(preorder[0]);
 
    leafNode(preorder, n);
    return 0;
}
