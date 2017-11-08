void verticalOrder(node *root)
{
	int min=0,max=0;
	findMinMax(root, &min, &max,0);
	for(int line_no=min;lin_no<=max;line_no++)
	 {
	 	printVerticalLine(root,line_no,0);
	 	cout<<endl;
	 }
}
void findMinMax(node *node,int *min,int *max,int hd)
{
	if(node==NULL)
	return;
	if(hd<*min)
	*min = hd;
	else if(hd>*max)
	*max = hd;
	
	findMinMax(node->left,min,max,hd-1);
	findMinMax(node->right,min,max,hd+1);
}
