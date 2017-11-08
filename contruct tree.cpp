#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stack>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;
node* constructtree(int pre[],int size)
{
	stack<Node> st;
	node* root=newnode(pre[0]);
	st.push(root);
	Node *temp;
	for(i=1;i<size;i++)
	{
		temp=NULL;
		while(!st.empty()&&pre[i]>st.top())
		{
			temp=st.pop();
		}
		if(temp!=NULL)
		{
			temp->right=newnode(pre[i]);
			st.push(temp->right);
		}
		else
		{
			st.top()->left = newnode(pre[i]);
			st.push()
		}
		
	}
}
