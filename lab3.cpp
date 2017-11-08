#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int findMin(struct node* root)
{
   
    if (root == NULL)
      return INT_MAX;
    int res = root->data;
    int lres = findMin(root->left);
    int rres = findMin(root->right);
    if (lres < res)
      res = lres;
    if (rres < res)
      res = rres;
    return res;
}
int findMax(struct node* root)
{
    if (root == NULL)
      return INT_MIN;
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
      res = lres;
    if (rres > res)
      res = rres;
    return res;
}
int main()
{

    struct node* NewRoot=NULL;
    struct node *root = newnode(2);
    root->left        = newnode(7);
    root->right       = newnode(5);
    root->left->right = newnode(6);
    root->left->right->left=newnode(1);
    root->left->right->right=newnode(11);
    root->right->right=newnode(9);
    root->right->right->left=newnode(4);
 
    printf ("Maximum element is %d \n", findMax(root));
    printf ("Minimum element is %d \n", findMin(root));
    return 0;
}	

