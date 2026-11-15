class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool check(Node* r1, Node* r2) {
    if (r1 == nullptr && r2 == nullptr) {
        return true;
    }
    if (r1 == nullptr || r2 == nullptr || r1->data != r2->data) {
        return false;
    }
    return check(r1->left, r2->right) && check(r1->right, r2->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    if (root==NULL)
	    {
	        return false;
	    }
	   return check(root->left,root->right);
    }
};