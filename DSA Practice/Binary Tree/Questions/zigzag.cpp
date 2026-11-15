    vector <int> zigZagTraversal(Node* root)
    {
    	if (!root) return {}; 

        stack<Node*> st1; // left to right
        stack<Node*> st2; // right to left
        vector<int> ans;
        st1.push(root); 
        while (!st1.empty() || !st2.empty()) {
           
            while (!st1.empty()) {
                Node* p = st1.top();
                ans.push_back(p->data);
                st1.pop();
                if (p->left) st2.push(p->left);
                if (p->right) st2.push(p->right);
            }

            while (!st2.empty()) {
                Node* p = st2.top();
                ans.push_back(p->data);
                st2.pop();
                if (p->right) st1.push(p->right);
                if (p->left) st1.push(p->left);
            }
        }
        return ans;
    }