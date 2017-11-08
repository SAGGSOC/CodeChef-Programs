#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode (int data)
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
struct node* constructtree(int pre[],int size)
{
	int preindex=0;
	return contructtreeutil(pre,&preindex,0,size-1,size);
}
struct node* constructtreeutil(int pre[],int *preindex,int low,int high,int size)
{
	if(*preindex >= size || low>high)
	  return NULL;
	struct node* root = newnode[pre[*preindex++]];
	 if(low==high)
	 { 
	   return root;
	   }  
	 int i;
	 for(i=low;i<=high;i++)
	 {
	 	if(pre[i]>root->data)
	 	 break;
	 }
	 root->left= constructtreeutil(pre,preindex,*preindex-1,size);
	 root->right=constructtreeutil(pre,preindex,i,high,size);
	 
	 return root;
	   
}
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}
 
// Driver program to test above functions
int main ()
{
    int pre[] = {10, 5, 1, 7, 40, 50};
    int size = sizeof( pre ) / sizeof( pre[0] );
 
    struct node *root = constructTree(pre, size);
 
    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);
 
    return 0;
}
