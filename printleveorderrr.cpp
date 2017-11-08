#include<stdio.h>
#include<stdlib.h>

void printlevelorder(struct node* root)
{
	int h=height(root);
	for(i=1;i<=h;i++)
	{
		printgivenlevel(root,i);
	}
}
void printgivenlevel(struct node* root,int level)
{
	if(root==NULL)
	 return;
	if(level==1)
	 printf("%d ",root->data);
	else {
	     printgivenlevel(root->left,level-1);
	     printgivenlevel(root->right,level-1);  
}
int height(struct node* root)
{
	if(root==NULL)
	 return 0;
	
	return height(root->left)+height(root->right)+1; 
}
