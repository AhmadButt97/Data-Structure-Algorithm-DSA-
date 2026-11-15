    int height(struct Node* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        return (1+max(height(root->left),height(root->right)));
    }
int diameter(Node *root)
{
    if(root==nullptr)
    return 0;
    int opt1=diameter(root->left);
    int opt2=diameter(root->right);
    int opt3=1+height(root->left)+height(root->right);
    return max(op3,max(opt1,opt2));
}
