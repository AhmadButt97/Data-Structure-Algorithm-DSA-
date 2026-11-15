#include<iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node * next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class linkedlist
{
public:
  Node* head=NULL;
  Node* t=NULL;
void insertathead(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
    }
    else
    {
        Node *temp=new Node(value);
        temp->next=head;
        head=temp;
    }
}
void insertattail(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
    }
    else
    {
        Node *tail=new Node(value);
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=tail;
        tail->next=NULL;
        t=tail;
    }
}
int deletefromhead()
{
     if(head==NULL)
    {
        return -1;
    }
    else
    {
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        int x= temp->data;
        delete temp;
        return x;
}}
int deletefromtail()
{
     if(head==NULL)
    {
        return -1;
    }
    else if (head->next==NULL)
    {
        int x= head->data;
        delete head;
        head=NULL;
        return x;
    }
    else
    {
        Node *temp=head;
        Node *pre=NULL;
        while(temp->next!=NULL)
        {
            pre=temp;
            temp=temp->next;
        }
        pre->next=NULL;
        t=pre;
        int x=temp->data;
        delete temp;
        return x;
    }
}
int totalelement()
{
    int count=0;
    Node *temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void display()
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

};
class Stack
{
    public:
    linkedlist sll;
    void push (int value)
    {
       return sll.insertattail (value);
    }
    int pop()
    {
        return sll.deletefromtail();
    }
    int totalelements()
    {
        return sll.totalelement();
    }
    void display()
    {
        sll.display();
    }
int peek()
{
    return sll.t->data;
}
};
int main()
{
        // Creating a stack
    Stack st;

    // Push elements onto the stack
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.display();
    cout<<endl;
    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;

    // removing two elemements from the top
      cout << "Removing two elements..." << endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    // Print top element of the stack
    cout << "Top element is " << st.peek() << endl;
    
    return 0;
}