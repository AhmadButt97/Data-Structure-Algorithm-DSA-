#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    Node *head;
    head=new Node(4);//node is created
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    //insertion in linkedlist
   // head=NULL;
    if(head==NULL)
    {
        head=new Node(28);
    }
    else
    {
    Node *temp;
    temp=new Node(20);
    temp->next=head;
    head=temp;
    }
    cout<<head->data;
}