class Solution
{
public:
    int find(Node *root,int &sum)
    {
        if(root==NULL)
        return 0;
        sum=max(sum,root->data);
        if(root->left);
        find(root->left,sum);
        if(root->right)
        find(root->right,sum);
        return sum;
    }
    int findminimum(Node *root,int &sum)
    {
        if(root==NULL)
        return 0;
        sum=min(sum,root->data);
        if(root->left);
        findminimum(root->left,sum);
        if(root->right)
        findminimum(root->right,sum);
        return sum;
    }
    int findMax(Node *root)
    {
        int sum=root->data;
        find(root,sum);
        return sum;
    }
    int findMin(Node *root)
    {     int sum=root->data;
        findminimum(root,sum);
        return sum;
    }
};