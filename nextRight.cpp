node* nextRight(node *root,int k)
{
	if(root==NULL)
	 return 0;
	queue<node *> qn;
	queue<int> q1;
	int level=0;
	qn.push(root);
	q1.push(level);
	while(qn.size())
	{
		node *node = qn.front();
		level = q1.front();
		qn.pop();
		q1.pop();
	 } 
	if(node->key==k)
	{
		if(q1.size()==0||q1.front()!=level)
		 return NULL;
		return qn.front(); 
	 } 
	if(node->left!=NULL)
	{
		qn.push(node->left);
		q1.push(level+1);
	 } 
}
return NULL;
