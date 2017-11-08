#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
int maxNodeLevel(node *root)
{
	if(root==NULL)
	  return -1;
	queue<Node *> q;
	q.push(root);
	int level = 0;
	int max = INT_MIN;
	int level_no = 0;
	while(1)
	{
		int NodeCount = q.size();
		if (NodeCount == 0)
            break;
        if(NodeCount>max)
		{
			max=NodeCount;
			level_no = level;
		}
		while(NodeCount > 0)
		{
			Node *Node = q.front();
			q.pop();
			if(node->left!=NULL)
			 q.push(node-)
		 } 
			   
	  }  
}
int main()
{
    // binary tree formation
    struct Node *root = newNode(2);      /*        2      */
    root->left        = newNode(1);      /*      /   \    */
    root->right       = newNode(3);      /*     1     3    */
    root->left->left  = newNode(4);      /*   /   \    \  */
    root->left->right = newNode(6);      /*  4     6    8 */
    root->right->right  = newNode(8);    /*       /       */
    root->left->right->left = newNode(5);/*      5        */
 
    printf("Level having maximum number of Nodes : %d",
            maxNodeLevel(root));
    return 0;
}
