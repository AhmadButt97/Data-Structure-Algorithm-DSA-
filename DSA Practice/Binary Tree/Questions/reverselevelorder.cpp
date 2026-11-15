 vector<int> reverseLevelOrder(Node *root) {
        if(root==NULL)
        return {};
        queue<Node *>q;
        stack<Node *>st;
        q.push(root);
        
        vector<int>ans;
        Node *temp;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            st.push(temp);
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
        }
         while (!st.empty()) {
            ans.push_back(st.top()->data);
            st.pop();
         }
        return ans;
    }