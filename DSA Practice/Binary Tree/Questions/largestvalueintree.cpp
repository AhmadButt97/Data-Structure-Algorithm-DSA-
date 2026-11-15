
class Solution
{
    public:
    //largest value in each level
    vector<int> largestValues(Node* root){
        if (!root) return {};
        queue<Node* >q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
        int n = q.size();
        int maxi=0;
        while(n--)
        {
            Node*temp=q.front();
            q.pop();
            maxi=max(maxi,temp->data);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        ans.push_back(maxi);
        }
        return ans;
    }
};