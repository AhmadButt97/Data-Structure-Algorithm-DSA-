#include<iostream>
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
void preorder(Node *root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if(root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
