#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node{
	struct node* left;
	struct node* right;
	int data;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
int getleafcount(struct node* node)
{
	if(node==NULL)
	 return 0;
	if(node->left==NULL&&node->right==NULL)
	 return 1;
	else
	  return getleafcount(node->left)+getleafcount(node->right);  
}

