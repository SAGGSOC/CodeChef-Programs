Node* makeTree(int in[], int pre[], int n)
{
    if(n == 0)
        return NULL;
    
    Node *root = new Node;
    root->data = pre[0];
    
    if(n == 1)
    {
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    
    int i = 0;
    while(in[i] != pre[0])
    {
        i++;
    }
    
    root->left = makeTree(in, pre+1, i);
    root->right = makeTree(in+i+1, pre+i+1, n-i-1);
    
    return root;
    
    
}

Node* buildTree(int in[],int pre[], int inStart, int inEnd)
{
    return makeTree(in, pre, inEnd+1);
}
