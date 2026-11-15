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
Node *insert(Node *root,int target)
{
    if(!root)
    {
        Node *temp=new Node (target);
        return temp;
    }
    if(root->data > target)
    root->left=insert(root->left,target);
    else
    root->right=insert(root->right,target);
    return root;
}
void inorder(Node *root)
{
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(int x) {
    if(!root)
    return true;
    if(root->data<x)
    {
       return find(root->right,x);
    }
    else
    {
         return find(root->left,x);
    }
    return false;
}
bool find(Node *root,int x)
{
    search (x);
}

int main()
{
    int arr[]={3,7,4,1,6,8};
    Node *root=NULL;
    for(int i=0;i<6;i++)
    root=insert(arr[i]);
    inorder(root);
    cout<<endl;
//     cout<<"deleteion"<<endl;
//     deleteNode(root,4);
//     deleteNode(root,8);
//     inorder(root);
// 
}