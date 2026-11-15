#include<iostream>
using namespace std;
class Node      //time complexety O(n)
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
    int x;
    cin>>x;
    if(x==-1)
    {
        return nullptr;
    }
    Node *temp=new Node(x);
    //left side creation,it will create all the left side of the binary tree
    cout<<"Enter the left child of the binary tree "<<x<<" :";
    temp->left=BinaryTree();
    //right side creation, it will create all the right side of the binary tree
    cout<<"Enter the right child of the binary tree "<<x<<" :"; 
    temp->right=BinaryTree();
    return temp;// return the address to the parent node 
}
int main()
{
    cout<<"Enter the Root Node "<<endl;
    Node *root;
    root=BinaryTree();
    return 0;
}