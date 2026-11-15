class Solution {
  public:
    vector<int> leftView(Node *root) {
        if(root==NULL)
        {
            return {};
        }
        queue<Node *>q;
        vector <int>ans;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            ans.push_back(q.front()->data);
            while(n--)
            {
                Node *temp=q.front();
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
        }
        return ans;
    }
};
//other method 
void Lview(Node * root,int level,vector<int>&ans)
{
    if(!root)
    {
        return ;
    }
    if(level==ans.size())
    {
        ans.push_back(root->data);
    }
    Lview(root->left,level+1,ans);
    Lview(root->right,level+1,ans)
}
 vector<int> leftView(Node *root) {
        if(root==NULL)
        {
            return {};
        }
        vector<int>ans;
        Lview(root,0,ans)
        return ans;
 }
