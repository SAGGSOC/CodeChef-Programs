#include<stdio.h>
#include<stdlib.h>
#define bool int
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
bool isbalanced(struct node *root)
{
	int lh,rh;
	if(root == NULL)
    return 1; 
    lh = height(root->left);
    rh = height(root->right);
    if(abs(lh-rh)<=1&&isbalanced(root->left)&&isbalanced(root->right))
     return 1;
     
     return 0;
}
