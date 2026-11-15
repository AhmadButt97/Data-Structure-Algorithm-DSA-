 void insert(Node* root,vector<int>&ans,int &index){
        if(root==NULL){
            return;
        }
        insert(root->left,ans,index);
        root->data=ans[index];
        index++;
        insert(root->right,ans,index);
        
    }
    void solve(Node* root,vector<int> & ans){
        if(root==NULL){
            return;
            
        }
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
        
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>ans;
        solve(root,ans);
        int index=0;
        sort(ans.begin(),ans.end());
        insert(root,ans,index);
        
        return root;
       
    }