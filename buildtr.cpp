void postorder(Node * root)
{
    if(root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node * build(int in[],int pre[], int i, int j,int *index,int n)
{
    if(*index==n)
    return NULL;
    if(i>j)
    return NULL;
    int x=pre[*index];
    Node * tmp=new Node();
    tmp->data=x;
    tmp->left=NULL;
    tmp->right=NULL;
    int l;
    //cout<<x<<endl;
    for(l=i;i<=j;l++)
    {
        if(in[l]==pre[*index])
        break;
    }
    *index=*index+1;
    tmp->left=build(in,pre,i,l-1,index,n);
    tmp->right=build(in,pre,l+1,j,index,n);
    return tmp;
}
Node* buildTree(int in[],int pre[], int inStrt, int inEnd)
{
    //cout<<inStrt<<inEnd<<endl;
    Node * tmp;
    int a=0;
    tmp=build(in,pre,inStrt,inEnd,&a,inEnd-inStrt+1);
   // postorder(tmp);
    return tmp;
}
