void addGreaterUtil(struct node *root,int *sum_ptr)
{
	if(root==NULL)
	 return;
	addGreaterUtil(root->right,sum_ptr);
	*sum_ptr = *sum_ptr + root->key;
	root->key=*sum_ptr;
	addGreaterUtil(root->left,sum_ptr); 
}
void addGreater(str)
