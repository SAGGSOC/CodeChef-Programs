bool isBST(node* root, node* l= NULL,node* r=NULL)
{
	if(root==NULL)
	 return true;
	 if(l!=NULL&&root->data<l->data)
	  return false;
	 if(r!=NULL&&root->data>r->data)
	  return false;
	 return (isBST(root->left,l,root)&&(isBST(root->right,root,r);  
}
