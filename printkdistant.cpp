#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
void printKdistant(struct node *root,int k)
{
	if(root==NULL)
	  return;
	if(k==0)
	{
		printf("%d",root->data);
		return;
	  } 
	else
	{
		printKdistant(root->left,k-1);
		printKDistant(root->right,k-1 );
	   }   
}
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
