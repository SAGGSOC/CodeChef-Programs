int treePathsSumUtil(struct node *root,int val)
{
	if(root==NULL)
	 return 0;
	val = (val*10+root->data);
	if(root->left==NULL && root->right==NULL)
	  return val;
	return treePathsSumutil(tree->left,val)+treePathsSumUtil(tree->right,val);
}
int treePathsSum(struct node *root)
{
    return treePathsSumUtil(root, 0);
}
