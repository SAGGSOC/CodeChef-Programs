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
	node->left=NULL:
	node->right=NULL;
}
bool haspathsum(struct node* node,int sum)
{
	if(node==NULL)
	 return (sum==0);
	
	else
	{
		bool ans =0;
		int subsum=sum-	node->data;
		if(subsum==0&&node->left==NULL&&node->right==NULL)
		  return 1;
		if(node->left)
		 ans=ans||haspathsum(node->left, subsum);
		if(node->right)
		 ans =ans||haspathsum(node->right, subsum);
		 
		return ans;    
	 } 
}
