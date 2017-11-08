void secondlargestutil(node *root,int &c)
{
	if(root==NULL||c>=2)
	 return;
	secondlargestutil(root->right,c);
	c++;
	if(c==2)
	 root->key;return;
	secondlargestutil(root->left,c); 
}
