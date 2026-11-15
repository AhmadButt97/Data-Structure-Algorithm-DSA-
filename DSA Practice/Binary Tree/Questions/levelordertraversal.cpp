#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node  //time complexety O(n)
{
    public:
    int data;
    Node *left , *right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
Node * BinaryTree()
{
    public:
    vector <int> levelorder(Node *root)
    {
        queue<Node *>q;
        q.push(root);
        vector<int>ans;
        Node *temp;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        return ans;
    }
};