#include <iostream>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

    void printList(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr) // Loop until temp reaches nullptr
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(Node *&head)
{
    stack<int>st;
     Node *temp=head;
    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
// Given the head of a list, reverse the list and return the
// head of reversed list
Node* reverseList(Node* head) {
    
      // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

      // Traverse all the nodes of Linked List
    while (curr != nullptr) {
      
        // Store next
        next = curr->next;
      
        // Reverse current node's next pointer
        curr->next = prev;
      
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
      head=prev;
      // Return the head of reversed linked list
    return head;
}
Node* recursion(Node* curr, Node* prev = nullptr) {    
    if (curr == nullptr) {
        return prev;  // Base case: prev is the new head when curr is null
    }
    Node* future = curr->next;   // Store the next node
    curr->next = prev;           // Reverse the current node's link
    return recursion(future, curr);  // Recursive call with next node
}
Node* reverseLinkedList(Node* head) {
    recursion(head, nullptr);
}
int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);


    cout << "\nReversed by stack:";
    reverse(head);
    cout<<endl;
    // cout<<"reverse by linked list " ;
    // head=reverseList(head);
    // printList(head);
    // cout<<endl;
    cout<<"reverse by Recursion" ;
    head=recursion(head);
    cout<<endl;
    printList(head);

    return 0;
}