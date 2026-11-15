#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
    }

};
class linkedlist
{
    public:
    Node *head;
    linkedlist()
    {
        head=NULL;
    }
    void insertathead(int element)
    {
        if(head==NULL)
        {
            head=new Node(element);
            head->next=head;
        }
        else
        {
            Node *temp=new Node(element);
            temp->next=head;
            head=temp;
        }
    }
    void insertattail(int value)
    {
        if(head==NULL)
        {
            head=new Node(value);
            head->next=head;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            Node *tail=new Node(value);
            temp->next=tail;
            tail->next=head;
        }

    }
    void display()
    {
        Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  // Stop when we reach the head again
    cout << endl;
    }
 bool isCircular() 
    {
        Node *temp=head->next;
         if (head == nullptr) return false;
        // if(head->next==NULL) return false;
        while(temp!=NULL && temp!=head)
        {
            temp=temp->next;
        }
        if(temp==head)
        {
            return true;
        }
        return false;
    }
};
int main()
{    linkedlist l1;
    l1.insertathead(8);
    l1.insertattail(7);
    l1.insertattail(8);
    l1.insertattail(9);
    l1.display();
    cout<<endl;
    if(l1.isCircular())
    {
        cout<<"circular";
    }
    else{
        cout<<" not circular";
    }
}