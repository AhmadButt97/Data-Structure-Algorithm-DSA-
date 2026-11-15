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
void insertathead(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
        head->next=head;
        head->prev=head;
    }
    else
    {
        Node *n=new Node(value);
        Node * temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        head->prev=n;
        n->next=head;
        n->prev=temp;
        temp->next=n;
        head=n;
    }
}
void insertattail(int value)
{
    if(head==NULL)
    {
        head=new Node(value);
        head->next=head;
        head->prev=head;
    }
    else
    {
        Node *tail=new Node(value);
        Node *t=head;
        while(t->next!=head)
        {
            t=t->next;
        }
        t->next=tail;
        tail->prev=t;
        tail->next=head;
        head->prev=tail;
    }
}
void display()
{
    if (head == NULL) return;
    Node *t = head;
    do {
        cout << t->data << " ";
        t = t->next;
    } while (t != head);
    cout << endl;
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
        Node *h = head;
    int x = h->data;
    Node *last = head;
    while (last->next != head) 
    {
        last = last->next;
    }
    head = head->next;
    head->prev = last;
    last->next = head;
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
    else if (head->next == head)  // Only one node
    {
        int x = head->data;
        delete head;
        head = NULL;
        return x;
    }
    else
    {
        Node *h=head;
        while(h->next!=head)
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
    doubleLinkList sll;
	sll.insertattail(10);
	// sll.insertattail(20);
	// sll.insertattail(30);
	sll.insertathead(4);
    sll.insertathead(3);
    sll.insertathead(2);
    sll.insertathead(1);
	sll.display();
    cout<<endl;
    cout<<sll.deletefromhead()<<endl;
    // cout<<sll.deletefromhead()<<endl;
    // cout<<sll.deletefromhead()<<endl;
    cout<<sll.deletefromhead()<<endl;
    // cout<<sll.deletefromtail()<<endl;
    // cout<<sll.deletefromtail()<<endl;
    // cout<<sll.deletefromtail()<<endl;
    cout<<sll.deletefromtail()<<endl;
    sll.display();
    cout<<endl;
    cout<<sll.totalelement();
    sll.display();
}