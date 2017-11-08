struct node
{
	int data;
	struct node* left;
	struct node* right;
};
void printspiral(struct node* root)
{
	int h=height(root);
	int i;
	bool ltr = false;
	for(i=1; i<=h; i++)
	{
		printgivenlevel(root,i,ltr);
		ltr=!ltr;
	}
}
void printgivenlevel(struct node* root, int level, int ltr)
{
	if(root== NULL)
	  return;
	if(level == 1)
	   printf("%d ",root->data);
	else if(level>1)
	{
		if(ltr)
		{
			printgivenlevel(root->left, level-1,ltr);
			printgivenlevel(root-right, level-1, ltr);
		}
		else
		{
			printgivenlevel(root->right, level-1, ltr);
			printgivenlevel(root->left, level-1, ltr);
		}
	  }  
}
int height(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}n
