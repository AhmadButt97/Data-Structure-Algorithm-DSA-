#include<iostream>
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
class BST
{
private:
Node * root;
public:
BST () 
{
    root=NULL;
   
}
Node* insert(Node *root,int x)
{
    if(!root)
    {
        Node* root=new Node(x);
        return root;
    }
    if(root->data>x)
    {
        root->left=insert(root->left,x);
    }
    else
    {
        root->right=insert(root->right,x);
    }
    return root;
}
void insertElement (int element) 
{
    root=insert(root,element);
}
void in_display(Node *root)
{
    if(root==NULL)
    return ;
    in_display(root->left);
    cout<<root->data<<" ";
    in_display(root->right);
}
void inorder()
{
   
    in_display(root);
}
void post_display(Node *root)
{
    if(root==NULL)
    return ;
    post_display(root->left);
    post_display(root->right);
    cout<<root->data<<" ";
}
void postorder()
{
   
    post_display(root);
}
void pre_display(Node *root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    pre_display(root->left);
    pre_display(root->right);
    
}
void preorder()
{
   
    pre_display(root);
}
bool find(Node *root,int x)
{
    if(!root)
    {
        return false;
    }
    if(root->data==x)
    return true;
    if(root->data>x)
    return find(root->left,x);
    if(root->data<x)
    return find(root->right,x);
}
bool search(int element) 
{
    return find(root,element);
}
// int total(Node* root)
// {
//     if(root==nullptr)
//     return 0;
//     return 1+total(root->left)+total(root->right);
// }
int total(Node *root,int &sum)
{
    if(!root)
    {
        return 0;
    }
    sum++;
    return total(root->left,sum)+total(root->right,sum);
}
int totalelement()
{ int sum=0;
    total(root,sum);
    return sum;
}
void levelorder()
{
    if(!root)
    return ;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<temp->data;
    if(temp->left);
    q.push(temp->left);
    if(temp->right);
    q.push(temp->right);
    }
}
Node * Delete(Node *root,int x)
{
    if(!root)
    {
        return nullptr;
    }
    if(root->data==x)
    {
        delete root;
        return NULL;
    }
    if(root->data>x)
    {
        root->left=Delete(root->left,x);
        return root;
    }
    else
    {
        root->right=Delete(root->right,x);
        return root;
    }
    //leaf Node 
    if(!root->left && !root->right)
    {
        Node * temp=root;
        delete root;
        return temp;
    }
    //one child exist
    else if(!root->left)
    {
        Node * temp=root->right;
        delete root;
        return temp;
    }
    else if(!root->right)
    {
        Node * temp=root->left;
        delete root;
        return temp;
    }
    else
    {
        Node *parent=root;
        Node *child =root->left;
        while(child->right)
        {
            parent=child;
            child=child->right;
        }
        if(parent==root)
        {
            child->right=root->right;
            delete root;
            return child;
        }
         if(parent!=root)
        {
            parent->right=child->left;
            child->right=root->right;
            child->left=root->left;
            delete root;
            return child;
        }
    }
}
void Deleteelement(int element)
{
    root=Delete(root,element);
}
};
int main()
{
BST tree;
tree.insertElement(50);
tree.insertElement(20);
tree.insertElement(10);
tree.insertElement(60);
tree.insertElement(10);
tree.insertElement(70);
tree.insertElement(55);
tree.insertElement(500);
cout<<"Inorder"<<endl;
tree.inorder();
cout<<endl;
// cout<<"Post Order"<<endl;
// tree.postorder();
// cout<<endl;
// cout<<"Pre Order"<<endl;
// tree.preorder();
// cout<<endl;
// cout<<tree.search(10);
// cout<<"total Node elements are "<<tree.totalelement();
// cout<<endl;
// tree.levelorder();
tree.Deleteelement(10);
cout<<"Inorder"<<endl;
tree.inorder();
cout<<endl;
}