 #include<iostream>
using namespace std;
 struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
   int getKthFromLast(Node *head, int k) {
        Node *temp=head;
        Node *h=head;
        int count=0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        if(k>count)
        {
            return -1;
        }
        int a=count - k;
        for(int i=0;i<a;i++)
        {
            h=h->next;
        }
        return h->data;
    }