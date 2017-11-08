#include<stdio.h>
#include<stdlib.h>
#include<iostream>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newnode(int data){
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;	
};
int search(int arr[],int strt, int end,int value)
{
	int i;
	for(i=strt;i<end;i++)
	{
		if(arr[i]==value)
		{
			return i;
		}
	}
}
struct node* buildtree(int in[],int pre[],int instrt, int inend)
{
	static int preindex=0;
	
	if(instrt>inend)
	  return NULL;
	struct node* tnode = newnode(pre[preindex++]);
	if(instrt==inend)
	 return tnode;
	int inIndex = search(in, instrt, inend, tnode->data);
	tnode->left = buildtree(in,pre,instrt,inindex-1);
	tnode->right = buildtree(in,pre,inindex+1, inend);
	return tnode;   
}
int main()
{
	int in[]{''}
}
