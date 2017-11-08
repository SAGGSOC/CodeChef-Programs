void diagonalSumUtil(struct node* root,int vd, map<int,int> &diagonalSum)
{
}
void diagonalSum(struct node* root)
{
	map<int, int> diagonalSum;
	diagonalSumUtil(root, 0, diagonalSum);
	map<int, int>::iterator it;
	cout<<"Digonal Sum in a binary tree";
	for(it=diagonalSum.begin();it!=diagonalSum.end();it++)
	
}
void diagonalSumUtil(struct node* root,int vd, map<int, int> &diagonalSum)
{
	if(!root)
	 return;
	diagonalSum[vd]+=root->data;
	diagonalSumUtil(root->left, vd+1 ,diagonalSum);
	diagonalSumUtil(root->right, vd, digaonalSum); 
}
