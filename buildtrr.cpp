#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node* left;
  Node* right;
};
Node* newNode(int data)
{
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
Node *buildTree(int a[],int b[],int str,int end);
int preIndex=0;
void printPostOrder(Node *root){
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		preIndex=0;
		Node *root=NULL;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		root=buildTree(a,b,0,n-1);
		printPostOrder(root);
		cout<<endl;
	}
}
Node *find(int a[],int b[],int l,int h,int n,int *j)
{
    
    if(l>h || l<0 || h>n) return NULL;
    else
    {
        Node *temp=new Node();
        temp->data=b[*j];
        temp->left=NULL;
        temp->right=NULL;
        int i;
        for(i=l;i<=h;i++)
        if(a[i]==b[*j])
		 break;
        (*j)++;
        temp->left=find(a,b,l,i-1,n,j);
        temp->right=find(a,b,i+1,h,n,j);
        return temp;
    }
}
Node* buildTree(int in[],int pre[], int inStrt, int inEnd)
{
    int n=0;
    Node *temp=find(in,pre,inStrt,inEnd,inEnd,&n);
    return temp;
}
