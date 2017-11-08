int areMirror(node* a,node* b)
{
	if(a==NULL&&b==NULL)
	 return true;
	if(a==NULL||b==NULL)
	 return false;
	return if(a->data==b->data)&&areMirror(a->left,b->right)&&(areMirror(a->right,b->left));  
}
