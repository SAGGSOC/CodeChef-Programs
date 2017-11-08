void findmaxforN(node *root,int N)
{
	if(root->left==nULL&&root->right==NULL&&root->key>n)
	  return -1;
	if((root->key<=N&&root->right==NULL)||(root->key>=N&&root->right->key>N))
	  return root->key;
	if(root->key>=N)
	  return findmaxforN(root->left,N);
	else
	  return findmaxforN(root->right,N)

}
