#include<stdio.h>
#include <iostream> 
using namespace std;
 
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
node* removeoutside(node *root, int min, int max)
{
	if(root==NULL)
	 return NULL;
	root->left = removeoutside(root->left, min, max);
	root->right = removeoutside(root->right, min, max);
	if(root->key<min)
	{
		node *rchild = root->right;
		delete root;
		return rchild;
	 }
	if(root->key>max)
	{
		node *rchild = root->left;
		delete root;
		return lchild;
	  }  
	 return root; 
}
node* newnode(int num)
{
	node* temp = new node;
    temp->key = num;
    temp->left = temp->right = NULL;
    return temp;
}
node* insert(node* root, int key)
{
    if (root == NULL)
       return newNode(key);
    if (root->key > key)
       root->left = insert(root->left, key);
    else
       root->right = insert(root->right, key);
    return root;
}
 
void inorderTraversal(node* root)
{
    if (root)
    {
        inorderTraversal( root->left );
        cout << root->key << " ";
        inorderTraversal( root->right );
    }
}
 int main()
{
    node* root = NULL;
    root = insert(root, 6);
    root = insert(root, -13);
    root = insert(root, 14);
    root = insert(root, -8);
    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 7);
 
    cout << "Inorder traversal of the given tree is: ";
    inorderTraversal(root);
 
    root = removeOutsideRange(root, -10, 13);
 
    cout << "\nInorder traversal of the modified tree is: ";
    inorderTraversal(root);
 
    return 0;
}
