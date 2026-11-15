#include<iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node * next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev=NULL;
    }
};
class doubleLinkList
{
public:
    Node * head;
    doubleLinkList ()
    {
    	head = NULL;
	}
void insertAtHead(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
    }
    else
    {
        Node *n=new Node(value);
        head->prev=n;
        n->next=head;
        head=n;

    }
}
void insertAtTail(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
    }
    else
    {
        Node *tail=new Node(value);
        Node *t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=tail;
        tail->prev=t;
        tail->next=NULL;
    }
}
void display()
{
    Node*n = head;
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int deletefromhead()
{
    if(head->next==NULL)
    {
        head=NULL;
        return 0;
    }
    else
    {
        Node *h=head;
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        int x= h->data;
        delete h;
        return x;
    }
}
int deletefromtail()
{
     if(head->next==NULL)
    {
        head=NULL;
        return 0;
    }
    else
    {
        Node *h=head;
        while(h->next!=NULL)
        {
            h=h->next;
        }
        h->prev->next=NULL;
        int x= h->data;
        delete h;
        return x;
    }
}
int totalelement()
{
    int i=1;
    Node *E=head;
    while(E->next!=NULL)
    {
        E=E->next;
        i++;
    }
    return i;
    
}
};
int main()
{
    doubleLinkList list;
	list.insertAtTail(40);
list.insertAtTail(50);
list.insertAtTail(60);
list.insertAtHead(10);
list.insertAtHead(20);
list.insertAtHead(30);
cout << "Total Elements: " << list.totalelement() << endl;
list.display();
cout<<endl;
cout << list.deletefromtail() <<endl;
cout << list.deletefromhead() <<endl;
cout << "Total Elements: " << list.totalelement() << endl;
}