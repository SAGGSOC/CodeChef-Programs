void mirror(struct node* node)
{
	if(node==NULL)
	 return;
	else
	{
		struct node* temp;
		mirror(root->left);
		mirror(root->right);
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	 } 
}
