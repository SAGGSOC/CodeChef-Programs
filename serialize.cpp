#include <stdio.h>
#define marker -1
struct node{
	int key;
	struct Node* left, *right;
};
void serialize(node *root,FILE *fp)
{
	if(root==NULL)
	{
		fprintf(fp,"%d",MARKER);
		return;
	}
	fprintf(fp, "%d",root->key);
	serialize(root->left,fp);
	serialize(root->right,fp);
}
void deserialize(node *&root, FILE *fp)
{
	int val;
	if(!fscanf(fp,"%d",&val)||val==marker)
	  return;
 
    
    root = newNode(val);
    deSerialize(root->left, fp);
    deSerialize(root->right, fp);
}
int main()
{
	struct Node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
    
    FILE *fp = fopen("tree.txt","w");
    if(fp==NULL)
    {
    	puts("Could not open file");
    	return 0;
	}
	serialize(root,fp);
	fclose(fp);
	Node* root1 = NULL;
	fp = fopen("tree.txt", "r");
    deSerialize(root1, fp);
 
    printf("Inorder Traversal of the tree constructed from file:\n");
    inorder(root1);
	return 0; 
}
