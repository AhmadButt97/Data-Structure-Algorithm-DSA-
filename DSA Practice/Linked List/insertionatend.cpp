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
int main()
{
    int array[] = {2, 4, 6, 8};
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new Node(array[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(array[i]);
            tail->next = temp;
            tail = temp;
        }
    }
    Node *Temp = head;
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->next;
    }
}