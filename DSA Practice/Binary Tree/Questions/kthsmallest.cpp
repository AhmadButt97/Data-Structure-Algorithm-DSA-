class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void find(Node* root,vector<int>&a)
    {
        if(root==NULL )
        {
            return ;
        }
        find(root->left,a);
        a.push_back(root->data);
        find(root->right,a);
    }
    int KthSmallestElement(Node *root, int K) {
        vector<int>a;
        find(root,a);
        if(K>a.size())
        {
            return -1;
        }
        return a[K-1];
    }
};