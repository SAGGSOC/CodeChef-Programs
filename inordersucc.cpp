#include <stdio.h>
#include <stdlib.h>
struct node* node{
 	struct node* left;
 	struct node* right;
 	struct node* parent;
	int data;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
	node->parent=NULL;
    return node;
}
struct node* insert(struct node* root,int data)
{
  if(root==NULL)
   return newnode(data);
  else
   {
	 if(data<node->data)
	  {
	    node->left=insert(node->left,data);
        node->parent = node; 
	  }
	  else
	  {
	  	node->right=insert(node->right,data);
	  	node->parent = node;
	  }
	  return node;
	 }
	 
}
struct node* minvalue(struct node* node)
{
	struct node* current = node;
	while(current->left!=NULL)
	  current=current->left;
	return current;  
}
struct node* inordersuccessor(struct node* root,int data)
{
	if(root->right != NULL)
	{
		return minvalue(root->right);
	}
	struct node* succ=NULL;
	while(root!=NULL)
	{
		if(n->data<root->data)
		{
			succ=root;
			root=root->left;
		}
		else
		  root=root->right;
		else break;  
	}
	return succ;
}
int main()
{
  struct node* root = NULL, *temp, *succ, *min;
 
  //creating the tree given in the above diagram
  root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 22);
  root = insert(root, 4);
  root = insert(root, 12);
  root = insert(root, 10);  
  root = insert(root, 14);    
  temp = root->left->right->right;
 
  succ =  inOrderSuccessor(root, temp);
  if(succ !=  NULL)
    printf("\n Inorder Successor of %d is %d ", temp->data, succ->data);    
  else
    printf("\n Inorder Successor doesn't exit");
 
  getchar();
  return 0;
}
 
