#include <bits/stdc++.h>
struct node
{
	int data;
	int hd;
	node *left,node *right;
	node(int key)
	{
		data=key;
		hd=INT_MAX;
		left=right=NULL;
	}
};
void bottomView(node *root)
{
	if(root==NULL)
	 return;
	int hd=0;
	map<int,int> m;
	queue<Node *> q;
	root->hd=hd;
	while(!q.empty())
	{
		node *temp = q.front();
		q.pop();
		hd = temp->hd;
		m[hd]=temp->data;
		if(temp->left!=NULL)
		{
			temp->left->hd = hd-1;
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			temp->right->hd = hd+!;
			q.push(temp->right);
		}
	}
	for(auto i=m.begin();i!=m.end();i++)
	  cout<<i->second<<" ";
}

