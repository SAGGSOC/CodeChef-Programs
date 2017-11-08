#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
    return(node);
}
bool printancestors(struct node* root,int target)
{
	if(root==NULL)
	return false;
	if(root->data==target)
	return true;
	if(printancestors(root->left,target)||printancestors(root->right,target))
     {
     	cout<<root->data<<" ";
     	return true;
		 }	
     return false;		 
}
int main()
{
	struct node *root =newnode(1);
	 root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->left->left  = newnode(7);
 
  printancestors(root, 7);
 
  getchar();
  return 0;
}
