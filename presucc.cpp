#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
Node* find(Node* root,int data)
{
	if(root==NULL)
	 return NULL;
	if(root->data==data)
	 return root;
	else if(root->data<data)
	 return find(root->right,data);
	else return find(root->left,data);  
	 
}
struct node* FindMin(node* root)
{
	while(root->left!=NULL)
	 root->left;
}
struct node* getSuccesor(struct node* root,int data)
{
	struct node* current=find(root,data);
	if(current==NULL)
	return NULL;
	if(current->right!=NULL){
		return FindMin(curremt->right);
	}
	else{
		  struct node* suc;
		  struct node* anc=root;
		  while(anc!=current){
		  	if(cur->data<anc->data){
		  		succ=anc;
		  		anc=anc->left;
			  }
			  else
			   ance=anc->right;
		  }
		  return succesor;
	}
}
