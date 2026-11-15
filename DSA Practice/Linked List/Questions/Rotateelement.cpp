#include <iostream>
#include<stack>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    Node *rotate(Node* head, int k) 
    {
        if (!head || k == 0) return head;
        Node *temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
          k = k % count;
   // if (k == 0) return head;
        Node *curr=head;
        Node *prev=NULL;
        for (int i = 0; i < k; i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        temp->next=head;
        head=curr;
        return head;
    }
    void display(Node *&head)
    {
        Node *temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Solution s;
    head=s.rotate(head,6);
    s.display(head);
}