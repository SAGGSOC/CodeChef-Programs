struct node* constructtree(int pre[], int size)
{
	Stack<Node *> st;
	struct node* root= newnode(pre[0]);
	st.push(root);
	int i;
	node* temp;
	for(i=1;i<size;i++)
	{
		temp=NULL;
		while(!isEmpty(stack)&&pre[i]>st.top()->data)
		 temp=st.pop();
		if(temp!=NULL)
		{
			temp->right=newnode(pre[i]);
			st.push(temp->right);
		 }
		else
		{
			st.top->left=newnode(pre[i]);
			st.push(st.top->left);
		  }  
	}
	retur root;
}
