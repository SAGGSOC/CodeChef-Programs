#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
};
Node *newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    return (temp);
}
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=newNode(a2);
			break;
			case 'R':root->right=newNode(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
bool isIsomorphic(Node *root1,Node *root2);
int main(){
		int t;
		cin>>t;
		while(t-->0){
			int n;
			cin>>n;
			int m=n;
			Node *root1=NULL;
			Node *root2=NULL;
			while(n-->0){
				int a1,a2;
				cin>>a1>>a2;
				cout<<"a1: "<<a1<<"a2: "<<a2;
				char lr;
				scanf(" %c",&lr);
				cout<<"lr:"<<lr;
				if(root1==NULL){
					root1=newNode(a1);
					switch(lr){
						case 'L':root1->left=newNode(a2);
						break;
						case 'R':root1->right=newNode(a2);
						break;
					}
				}
				else{
					insert(root1,a1,a2,lr);
				}
			}
			while(m-->0){
				int a1,a2;
				cin>>a1>>a2;
				char lr;
				scanf(" %c",&lr);
				if(root2==NULL){
					root2=newNode(a1);
					switch(lr){
						case 'L':root2->left=newNode(a2);
						break;
						case 'R':root2->right=newNode(a2);
						break;
					}
				}
				else{
					insert(root2,a1,a2,lr);
				}
			}
			/*inorder(root1);
			cout<<endl;
			inorder(root2);*/
			if(isIsomorphic(root1,root2)){
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}

bool isIsomorphic(Node *n1,Node *n2)
{
    if (n1 == NULL && n2 == NULL)
    return true;
 
 // Exactly one of the n1 and n2 is NULL, trees not isomorphic
 if (n1 == NULL || n2 == NULL)
    return false;
 
 if (n1->data != n2->data)
    return false;
 
 // There are two possible cases for n1 and n2 to be isomorphic
 // Case 1: The subtrees rooted at these nodes have NOT been "Flipped".
 // Both of these subtrees have to be isomorphic, hence the &&
 // Case 2: The subtrees rooted at these nodes have been "Flipped"
 return
 (isIsomorphic(n1->left,n2->left) && isIsomorphic(n1->right,n2->right))||
 (isIsomorphic(n1->left,n2->right) && isIsomorphic(n1->right,n2->left));
}	
