#include <bits/stdc++.h>
using namespace std;
struct node{
	int key;
	struct node *left, *right;
};
node *newnode(int key)
{
	node *t
}
bool ismirror(struct node* root1,struct node* root2)
{
	if(root1== NULL && root2==NULL)
	 return true;
	if(root1 && root2 && root1->key==root2->key)
	  	return ismirror(root1->left,root2->right)&&ismirror(root1->right,root2->left);
	return false;	   
}
bool issymmetric(struct node* root)
{
	return ismirror(root,root);
}
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key  = key;
    temp->left  = temp->right = NULL;
    return (temp);
}
int main()
{

    Node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(2);
    root->left->left  = newNode(3);
    root->left->right = newNode(4);
    root->right->left  = newNode(4);
    root->right->right = newNode(3);
 
    cout << isSymmetric(root);
    return 0;
}

