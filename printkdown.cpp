#include <iostream>
using namespace std;
struct node{
	int data;
    struct node *left, *right;
};
void printkdistancenodedown(node *root,int k)
{
	if(root==NULL||k<0)
	 return;
	if(k==0)
	{
		cout<<root->data<<endl;
		return;
	 } 
	 printkdistancenodedown(root->left, k-1);
	 printkdistancenodedown(root->right, k-1);
}
int printkdistancenode(node* root, node* target, int k)
{
	if(root==NULL)
	 return -1;
	if(root==target)
	{
		printkdistancenodedown(root, k);
		return 0;
	 } 
   	int dl = printkdistancenode(root->left, target, k);
	if(dl!=-1)
	{
		if(dl+1==k)
		  cout<<root->data<<endl;
		else
		  printkdistancenodedown(root->right, k-dl-2);
		return 1+dl;    
		}    
	int dr = printkdistancenode(root->right, target, k);
	if(dr!=-1)
	{
		if(dr+1==k)
		  cout<<root->data<<endl;
		else
		  printkdistancenodedown(root->left, k-dr-2);
		return 1+dr;    
		}
		return -1;	
}
