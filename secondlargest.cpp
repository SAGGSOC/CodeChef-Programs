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
	node->left=NULL;
	node->right=NULL;
	node->data=data;
}
struct node insert(struct node* node,int data)
{
	if(node==NULL)
	  return newnode(data;
	if(data<node->data)
	  node->left=insert(node->left,data);
	else
	  node->right=insert(node->right,data);
	  
	return node;      
}
void secondla(struct node* root)
{
	int c=0;
	secondlautil(root,c);
}
void secondlautil(node* root,int &c)
{
	if(root==NULL||c>=2)
	  return;
	secondlautil(root->right, c);
	c++;
	if(c==2){
		printf("%d",root->data);
		return;
	}  
	secondlautil(root->left,c);
}
