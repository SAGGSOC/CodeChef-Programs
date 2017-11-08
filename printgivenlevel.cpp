#include <stdc++.h>
void printlevelorder(struct node* root)
{
	int h=height(root);
	int i;
	for(i=1;i<=h;i++)
	{
		printgivenlevel(root,i);
		printf("\n");
	}
}
void printgivenlevel(struct node *root)
{
	if(root==NULL)
	 return;
	if(level==1)
	 printf("%d",root->data);
	else  if(level>1)
	{
		printgivenlevel(root->left,level-1);
		printgivenlevel(root->right,level-1);
	 }  
}
