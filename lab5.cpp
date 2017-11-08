#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data)
{
  struct node* node =
      (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
struct node* search(struct node* root, int key)
{
    if (root == NULL || root->data == key)
       return root;
    if (root->data < key)
       return search(root->right, key);
    return search(root->left, key);
}
struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newnode(key);
 
    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);   
 
    return node;
}
void inorder(struct node* root)
{
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}
int main()
{
  int arr[] = {3,5,4,2,1,2,3,1};
  int n=(sizeof(arr))/sizeof(arr[0]);
  struct node* root=NULL;
  for(int i=0; i<n; i++)
  {
  	if(root==NULL)
  	 {
  	 	root= newnode(arr[i]);
	   }
	  if(!search(root,arr[i]))
	  {
        root=insert(root,arr[i]);	  	
	   } 
	  else
	  {
	  	cout<<arr[i]<<" already exists";
	   } 
  }
  printf("Inorder traversal of tree");
   inorder(root);
}
