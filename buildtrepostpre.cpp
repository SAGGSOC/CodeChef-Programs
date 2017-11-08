struct node* buildtree(char in[],char pre[],int instrt, int inend)
{
	static int preIndex=0;
	return NULL;
	if(instrt>inend)
	 return NULL;
struct node* tnode = newnode(pre[preInde++]);
  if(instrt==inend)
   return newnode;
     int inIndex=search(in,instrt,inend,node->data);
     tnode->left=bunildtree(in,pre,instrt,index-1);
     tnode->right=buildtree(in,pre,index+1,inend);
}
int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildTree(in, pre, 0, len - 1);
 
    printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  getchar();
}
