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
bool search(Node *root,int x)
{
    if(!root)
    {
        return false;
    }
    if(root->data==x)
    return true;
    if(root->data>x)
    return search(root->left,x);
    if(root->data<x)
    return search(root->right,x);
}
void inorder(Node *root)
{
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node *deleteNode(Node *root, int target) {
        if (root==NULL)
        return NULL;
        if(root->data > target)
        {
            root->left=deleteNode(root->left,target);
            return root;
        }
        else if(root->data < target)
        {
            root->right=deleteNode(root->right,target);
            return root;
        }
        else
        {    //leaf Node
            if(!root->right && !root->left)
            {
                delete root;
                return NULL;
            }
            //right node exit
            else if(!root->left)
            {
              Node *temp=root->right;
              delete root;
              return temp;
            }
             //left node exit
            else if(!root->right)
            {
              Node *temp=root->left;
              delete root;
              return temp;
            }
            // 2 child exits
            else if(root->left && root->right)
            {
                Node * parent=root;
                Node * child=root->left;
                while(child->right)
                {
                    parent=child;
                    child=child->right;
                }
                if(root!=parent)
                {
                    parent->right=child->left;
                    child->left=root->left;
                    child->right=root->right;
                    delete root;
                    return child;
                }
                else
                {
                    child->right=root->right;
                    delete root;
                    return child;
                }
            }
        }
    }
    
int main()
{
    int arr[]={3,7,4,1,6,8};
    Node *root=NULL;
    for(int i=0;i<6;i++)
    root=insert(root,arr[i]);
    cout<<"Search"<<endl;
    cout<<search(root,7);
    cout<<endl;
    //inorder(root);
    cout<<endl;
    cout<<"deleteion"<<endl;
   root=deleteNode(root,3);
   // deleteNode(root,8);
    inorder(root);
}