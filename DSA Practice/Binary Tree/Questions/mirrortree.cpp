class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        if(root==nullptr)
        return ;
        Node * temp=root->right;
        root->right=root->left;
        root->left=temp;
       mirror(root->left);
       mirror(root->right);
    }
};