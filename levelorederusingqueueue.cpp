#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}
void levelorder(struct node* root)
{
	if(root==NULL)
	return;
	queue<node *> q;
	node* tmp;
	node* marker=newNode(INT_MAX);

	int level=0,cnt=0;
	q.push(root);
	q.push(marker);
	while(!q.empty())
	{
		tmp=q.front();
		if(tmp->data==INT_MAX)
		{
			q.pop();
			if(q.empty())
			 return;
			level++;
			printf("\n");
			q.push(tmp);
		    continue;
		}
		if(cnt==level)
		{
		cout<<tmp->data;cnt++;
	    }
		if(tmp->right!=NULL)
		 q.push(tmp->right); 
		if(tmp->left!=NULL)
		 q.push(tmp->left);
		q.pop();
	}
	
}

int main()
{

    node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
 
    levelorder(root);
    return 0;
}
