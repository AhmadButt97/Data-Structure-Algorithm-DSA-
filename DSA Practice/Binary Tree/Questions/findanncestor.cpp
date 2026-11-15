class Solution {
  public:
    // Function should return all the ancestor of the target node
   bool find(Node *root, int x, vector<int>& ans) {
    if (!root) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    if (find(root->left, x, ans) || find(root->right, x, ans)) {
        ans.push_back(root->data);  // Add the current node only if a child contains x
        return true;
    }
    return false;  // Return false if x is not found in this subtree
}
    vector<int> Ancestors(struct Node *root, int x) {
        vector<int>ans;
        if(!root)
        {
            return ans;
        }

        find(root,x,ans);
        return ans;
    }
}