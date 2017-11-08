#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	node *left;
	node *right;
};
struct node *newnode(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->data=data;
}
void leftutil(struct node *root,int level, int *max_level)
{
	if(root==NULL)
	return;
	if(*max_level<level)
	{
		printf("%d\t",root->data);
		*max_level = level;
	}
	leftutil(root->left, level+1, max_level);
	leftutil(root->right, level+1, max_level);
}
void leftview(struct node *root)
{
	int max_level=0;
	leftutil(root, 1, &max_level);
}
