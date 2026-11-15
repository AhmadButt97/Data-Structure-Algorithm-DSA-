#include <iostream>
using namespace std;
{

    void leaf(Node *node,int &count)
    {
        if(node->left==NULL && node->right==NULL)
        {
        count++;
        return ;
        }
        if(node->left!=NULL)
        leaf(node->left,count);
        if(node->right!=NULL)
        leaf(node->right,count);
    }
    int countLeaves(Node* root) {
        int count=0;
        leaf(root,count);
        return count;
    }
};