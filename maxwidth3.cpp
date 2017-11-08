int maxWidth(struct node *root)
{
	if(root==NULL)
	  return 0;
	int res=0;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int cnt=q.size();
		result = max(cnt,result);
		while(count--)
		{
			Node *temp = q.front();
			q.pop();
			if(temp->left!=NULL)
			 q.push(temp->left);
			if(temp->right!=NULL)
			 q.push(temp->right) 
		}
	  }  
	  return result;
}
