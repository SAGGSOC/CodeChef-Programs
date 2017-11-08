#include <bits/stdc++.h>
#define MAX_SIZE 100
using namespace std;
struct node
{
    int val;
    struct node *left, *right;
};
bool isPairPresent(struct node *root, int target);
struct node * NewNode(int val)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->val = val;
    tmp->right = tmp->left =NULL;
    return tmp;
}
struct node *insert(struct node *root,int a){
	if(root==NULL)
		return NewNode(a);
	if(root->val>a){
		root->left=insert(root->left,a);
	}
	if(root->val<a){
		root->right=insert(root->right,a);
	}
	return root;
}
void inorder(struct node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,target;
		cin>>n>>target;
		struct node *root =  NULL;
		while(n--){
			int a;
			cin>>a;
			if(root==NULL){
				root=NewNode(a);
			}
			else{
				insert(root,a);
			}
		}
		//inorder(root);
    cout<<isPairPresent(root, target)<<endl;
	}
    return 0;
}
