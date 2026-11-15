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
    int array[]={3,4,5,6};
    Node *head=NULL;
    for(int i=0;i<4;i++)
    {
    if(head==NULL) //if no linked list present 
    {
        head=new Node(array[i]);
    }
    //if linked list present then insert at begining
    else
    {
    Node *temp;
    temp=new Node(array[i]);
    temp->next=head;
    head=temp;
    }
    }
    Node *Temp=head;
    while(Temp!=NULL)
    {
        cout<<Temp->data<<" ";
        Temp=Temp->next; //output will be reverse be insertion is from starting/begining
    }
    
}