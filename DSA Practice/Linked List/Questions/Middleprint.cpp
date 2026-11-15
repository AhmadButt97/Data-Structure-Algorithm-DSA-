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
int getlength(Node * &head)
{
    Node *l=head;
    int length=0;
    while(l!=NULL)
    {
        l=l->next;
        length++;
    }
    return length;
}
int getMiddle(Node *head)
{
    Node *temp=head;
    int l=(getlength(head)/2);
    for(int i=0;i<l;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
int main() 
{

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << getMiddle(head);

    return 0;
}