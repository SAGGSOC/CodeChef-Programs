Node* MinFromRight(Node* root)
{
    if(root==NULL)
    return NULL;
    if(root->left==NULL && root->right==NULL)
    return root;
    
    return MinFromRight(root->right);
}
Node* deleteNode(Node* root, int x)
{
    if(root==NULL)
    return NULL;
    
    root->left=deleteNode(root->left,x);
    root->right=deleteNode(root->right,x);
    
    if(root->data>x || root->data==x)
    {
        Node* temp;
        if(root->left==NULL && root->right==NULL)
        {
        delete(root);
        return NULL;
        }
        else if(root->left)
        {
            temp=root->left;
            delete(root);
            return temp;
        }
        else if(root->right)
        {
            temp=root->right;
            delete(root);
            return temp;
        }
        else 
        {
            temp=MinFromRight(root->right);
            root->data=temp->data;
            delete(temp);
        }
    }
    
    
    return root;
}
