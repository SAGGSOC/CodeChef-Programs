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
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void preorder(struct node* root)
{
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node* root)
{
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}
void postorder(struct node* root)
{
	postorder(root->left);
	postorder(root->right);
    printf("%d",root->data);
}
int main()
{
	struct node *root = newnode(2);
    root->left        = newnode(7);
    root->right       = newnode(5);
    root->left->right = newnode(6);
    root->left->right->left=newnode(1);
    root->left->right->right=newnode(11);
    root->right->right=newnode(9);
    root->right->right->left=newnode(4);
    printf("inorder:\n");
    inorder(root);
    printf("preorder:\n");
    preorder(root);
    printf("postorder:\n");
    postorder(root);
}
