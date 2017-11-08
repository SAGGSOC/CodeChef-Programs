int findMaxSum(node *root)
{
	int res=INT_MIN;
	findMaxUtil(root,res);
	return res;
}
int findMaxUtil(node* root, int &res)
{
	if(root==NULL)
	  return 0;
	int l=findMaxUtil(root->left,res);
	int r=findMaxUtil(root->left,res);
	int max_single=max(max(l,r)+root->data,root->data);
	int max_top = max(res, max_top);
	return max_single;  
}
