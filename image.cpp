#include<iostream>
using namespace std;
struct node{
  int data;
  struct node* left;
  struct node* right;
};
struct node* newnode(int data)
{
    struct node* newnode =(struct node*)sizeof(struct node);
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
}
void insert(node *root,int a1,int a2,char lr)
{
    if(root==NULL)
     return;
    if(root->data==a1){
        switch(lr)
        {
        case 'L':root->left=newnode(a2);
        break;
        case 'R':root->right=newnode(a2);
        break;
        }
    } 
    else
    {
        insert(root->left,a1,a2,lr);
        insert(root->right,a1,a2,lr);
    }
}
void inorder(struct node* root)
{
    if(root==NULL)
     return;
     inorder(root->left);
     cout<<root->data;
     inorder(root->right);
     
}
long long int sum=0;
void getSum(struct node* r1,struct node* r2)
{
    if(r1==NULL||r2==NULL)
     return;
    sum=sum+r1->data*r2->data;
    getSum(r1->left,r2->right);
    getSum(r1->right,r2->left);
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int m=n;
	    struct node* root1=NULL;
	    while(n-->0)
	    {
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=newnode(a1);
				switch(lr){
					case 'L':root1->left=newnode(a2);
					break;
					case 'R':root1->right=newnode(a2);
					break;
				}
			}
				else{
				insert(root1,a1,a2,lr);
			}
	    }
	    getSum(root1,root1);
	    if(root1!=NULL)
	    {
	        sum  =(sum+ root1->data*root1->data);
	    }
	    cout<<(sum/2)%1000000007<<endl;
	    sum=0;
	}
	//code
	return 0;
}

