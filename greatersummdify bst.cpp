#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right; 
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data= data;
	node->left = NULL;
	node->right = NULL;
}
void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d  ",root->data);
		inorder(root->right);
	}
}
struct node* insert(struct node* node,int data)
{
	if(node==NULL)
	 return newnode(data);
	if(data<=node->data)
	  node->left=insert(node->left,data);
	else
	  node->right=insert(node->right,data);
	 return node;     
}
void modifyBST(struct node* root,int *sum)
{
	if(root==NULL)
	 return;
	modifyBST(root->right,sum);
	*sum=*sum+root->data;
	root->data=*sum;
	modifyBST(root->left,sum); 
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    printf("\n");
    int sum=0;
    modifyBST(root,&sum);
    inorder(root);
 
    return 0;
}
