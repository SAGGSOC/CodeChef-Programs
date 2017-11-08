#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* extractleaf(struct node *root,struct node *head)
{
	if(root==NULL)
	 return NULL;
	if(root->left==NULL&&root->right==NULL)
	{
		root->right=*head;
		if(*head!=NULL)
		 *head->left=root;
		 
		*head=root;
		return NULL; 
	 } 
	root->right = extractleaf(root->right,head);
	root->left = extractleaf(root->left,head);
	return root;  
}
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void print(struct Node *root)
{
    if (root != NULL)
    {
         print(root->left);
         printf("%d ",root->data);
         print(root->right);
    }
}
 
// Utility function for printing double linked list.
void printList(struct Node *head)
{
     while (head)
     {
         printf("%d ", head->data);
         head = head->right;
     }
}
 
// Driver program to test above function
int main()
{
     struct Node *head = NULL;
     struct Node *root = newNode(1);
     root->left = newNode(2);
     root->right = newNode(3);
     root->left->left = newNode(4);
     root->left->right = newNode(5);
     root->right->right = newNode(6);
     root->left->left->left = newNode(7);
     root->left->left->right = newNode(8);
     root->right->right->left = newNode(9);
     root->right->right->right = newNode(10);
 
     printf("Inorder Trvaersal of given Tree is:\n");
     print(root);
 
     root = extractLeafList(root, &head);
 
     printf("\nExtracted Double Linked list is:\n");
     printList(head);
 
     printf("\nInorder traversal of modified tree is:\n");
     print(root);
     return 0;
}
