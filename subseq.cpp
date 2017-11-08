#include<bits/stdc++.h>
using namespace std;
 
// A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
 
// A utility function to create a new BST node
// with key as given num
struct Node* newNode(int num)
{
    struct Node* temp = new Node;
    temp->data = num;
    temp->left = temp->right = NULL;
    return temp;
}
 
// A utility function to insert a given key to BST
struct Node* insert(struct Node* root, int key)
{
    if (root == NULL)
        return newNode(key);
    if (root->data > key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
 
// function to check if given sorted sub-sequence exist in BST
// index --> iterator for given sorted sub-sequence
// seq[] --> given sorted sub-sequence
void seqExistUtil(struct Node *ptr, int seq[], int &index)
{
    if (ptr == NULL)
        return;
 
    // We traverse left subtree first in Inorder
    seqExistUtil(ptr->left, seq, index);
 
    // If current node matches with se[index] then move
    // forward in sub-sequence
    if (ptr->data == seq[index])
        index++;
 
    // We traverse left subtree in the end in Inorder
    seqExistUtil(ptr->right, seq, index);
}
 
// A wrapper over seqExistUtil. It returns true
// if seq[0..n-1] exists in tree.
bool seqExist(struct Node *root, int seq[], int n)
{
    // Initialize index in seq[]
    int index = 0;
 
    // Do an inorder traversal and find if all
    // elements of seq[] were present
    seqExistUtil(root, seq, index);
 
    // index would become n if all elements of
    // seq[] were present
    return (index == n);
}
 
// driver program to run the case
int main()
{
    struct Node* root = NULL;
    root = insert(root, 8);
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 14);
    root = insert(root, 13);
 
    int seq[] = {4, 6, 8, 14};
    int n = sizeof(seq)/sizeof(seq[0]);
 
    seqExist(root, seq, n)? cout << "Yes" :
                            cout << "No";
 
    return 0;
}
