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
    // void setvalue(int value)
    // {
    //     data=value;
    // }
    // int getvalue()
    // {
    //     return data;
    // }
    // void setnext(Node *n)
    // {
    //     next=n;        
    // }
    // Node *getnext()
    // {
    //     return next;
    // }
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
        }
        else
        {
            Node *temp=new Node(element);
            temp->next=head;
            head=temp;
        }
    }
    void insertattail(int element)
    {
        if(head==NULL)
        {
            head=new Node(element);
        }
        else
        {
            Node *tail=head;
            while(tail->next!=NULL)
            {
                tail=tail->next;
            }
            Node *temp=new Node(element);
            tail->next=temp;
            tail=temp;
        }
    }
    bool search(int element)
    {
        if(head==NULL)
        {
            return false;
        }
        // else if(head->data==element)
        //     {
        //         return true;
        //     }
        else
        {
            Node *E=head;
            while(E!=NULL)  // it will check the last node also
            {
                if(E->data==element)
                {
                    return true;
                }
                E=E->next;
            }
            return false;
        }
        return false;
    }
    
    void display()
    {
        Node *T=head;
        while(T!=NULL)
        {
            cout<<T->data<<" ";
            T=T->next;
        }
    }
    void deletefromhead()
    {
        if(head==NULL)
        {
            return ;
        }
        else
        {
            Node *N=head;// a pointer that pointing head
            head=head->next;
            delete N;
        }
    }
    void deletefromtail()
    {
        if(head==NULL)
        {
            return ;
        }
        else
        {
            Node *curr=head;
            Node *prev=NULL;
            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }
    void deleteElement(int element)
    {
        if(head==NULL)
        {
            return ;
        }
        else if (head->data == element)  // If the element to delete is the head
    {
        Node* temp = head;  // Save the current head
        head = head->next;  // Update the head to the next node
        delete temp;        // Deallocate the old head
    }
        else
        {
            Node *curr=head;
            Node *prev=NULL;
            while(curr->data != element)
            {
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            delete curr;
        }
 }
};
int main()
{
    linkedlist l1;
    l1.insertathead(2);
    l1.insertathead(4);
    l1.insertathead(8);
    l1.insertattail(7);
    l1.insertattail(8);
    l1.insertattail(9);
    l1.display();
    cout<<endl;
    cout<<l1.search(4)<<endl;
    l1.deletefromhead();
    l1.display();
     cout<<endl;
    l1.deletefromtail();
    l1.deletefromtail();
    l1.display();
     cout<<endl;
    l1.deleteElement(7);
    l1.display();
}