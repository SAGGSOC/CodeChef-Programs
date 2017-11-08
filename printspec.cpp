#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->right = node->left = NULL;
    return node;
}
void printspecific(node *root)
{
	if(root==NULL)
	  return;
	cout<<root->data;
	if(root->left!=NULL)
	 cout<<" "<<root->left->data<<" "<<root->right->data;
	   
}
