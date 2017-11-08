#include <iostream>
#include <queue>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
while(1)
{
	cnt=q.size();
	if(cnt==0)
	 break;
	while(cnt>0)
	{
		node *node = q.front();
		cout<<node->data;
		q.pop();
		if(root->left!=Null)
		 q.push();
		if(root->right!=null)
		 q.push(); 
		cnt--;
	 } 
}
