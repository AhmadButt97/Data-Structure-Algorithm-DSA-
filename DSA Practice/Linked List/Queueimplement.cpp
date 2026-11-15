#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class linkedlist
{
public:
    Node *head = NULL;
    void insertathead(int value)
    {
        if (head == NULL)
        {
            head = new Node(value);
        }
        else
        {
            Node *temp = new Node(value);
            temp->next = head;
            head = temp;
        }
    }
    void insertattail(int value)
    {
        if (head == NULL)
        {
            head = new Node(value);
        }
        else
        {
            Node *tail = new Node(value);
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = tail;
            tail->next = NULL;
        }
    }
    int deletefromhead()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            int x = temp->data;
            delete temp;
            return x;
        }
    }
    int deletefromtail()
    {
        if (head == NULL)
        {
            return -1;
        }
        else if (head->next == NULL)
        {
            int x = head->data;
            delete head;
            head = NULL;
            return x;
        }
        else
        {
            Node *temp = head;
            Node *pre = NULL;
            while (temp->next != NULL)
            {
                pre = temp;
                temp = temp->next;
            }
            pre->next = NULL;
            int x = temp->data;
            delete temp;
            return x;
        }
    }
    int totalelement()
    {
        int count = 0;
        Node *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
};
class Queue
{
public:
    linkedlist sll;
    void Enqueue(int value)
    {
        return sll.insertattail(value);
    }
    int Dequeue()
    {
        return sll.deletefromhead();
    }
    int totalelements()
    {
        return sll.totalelement();
    }
    void display()
    {
        sll.display();
    }
};
int main()
{
    Queue q;
    q.Enqueue(5);
    q.Enqueue(10);
    q.Enqueue(15);
    q.Enqueue(20);
    q.Enqueue(25);
    q.display();
    cout << endl;
    // 5 10 15 20 25
    cout << q.Dequeue() << endl; // 5
    cout << q.Dequeue() << endl; // 10
    q.Enqueue(30);
    // 15 20 25 30
    cout << q.totalelements() << endl; // 4
    q.display();

    return 0;
}