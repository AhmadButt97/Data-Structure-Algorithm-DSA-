class Solution {
  public:
    void find(Node* root,vector<int>&a)
    {
        if(root==NULL )
        {
            return ;
        }
        find(root->right,a);
        a.push_back(root->data);
        find(root->left,a);  
    }
    int kthLargest(Node *root, int k) {
        vector<int>a;
        find(root,a);
        if(k>a.size())
        {
            return -1;
        }
        return a[k-1];
    }
};