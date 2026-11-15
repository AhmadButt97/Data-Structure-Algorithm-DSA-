#include<iostream>
using namespace std;

class Node {
private:
    int value;
    Node * next;
public:
    Node(int value){
        this->value = value;
        next = NULL;
    }
    void setValue (int value) {
		this->value = value;
	}
    void setNext (Node * next) {
		this->next = next;
	}
    int getValue () {
		return value;
	}
    Node* getNext () {
		return next;
	}
};

class SingleLinkList
{
private:
    Node * head;

public:
    SingleLinkList (){
    	head = NULL;
	}

    void insertAtTail (int element){
    	Node * n = new Node(element);
    	if(head == NULL){
    		head = n;
		}
		else{
			Node * t = head;
			while(t->getNext() != NULL)
				t = t->getNext();
			t->setNext(n);
		}
	}
	bool deleteElement(int element){
		if(head == NULL)
			return false;
		if(head->getValue() == element)
		{
			Node * t = head->getNext();
			delete head;
			head = t;
			return true;
		}
		if(head->getNext() == NULL)
			return false;
		Node * t1 = head;
		Node * t2 = head->getNext();
		while(t2 != NULL)
		{
			if(t2->getValue() == element)
			{
				t1->setNext(t2->getNext());
				delete t2;
				return true;
			}
			t1 = t2;
			t2 = t2->getNext();
		}
		return false;
	}
    int deleteFromTail () {
		if(head == NULL)
			return -1;
		if(head->getNext() == NULL)
		{
			int x = head->getValue();
			delete head;
			head = NULL;
			return x;
		}
		Node * t1 = head;
		Node * t2 = head->getNext();
		while(t2->getNext() != NULL)
		{
			t1 = t2;
			t2 = t2->getNext();
		}
		int x = t2->getValue();
		delete t2;
		t1->setNext(NULL);
		return x;
	}

    void insertAtHead (int element) {
    	Node * n = new Node(element);
		if(head == NULL)
    		head = n;
    	else{
    		n->setNext(head);
    		head = n;
		}
    }

    int deleteFromHead () {
    	if(head == NULL)
    		return -1;
    	Node * t = head;
    	head = head->getNext();
    	int x = t->getValue();
    	delete t;
    	return x;
    }

    void display () {
    	cout <<"Contents: ";
    	Node * t = head;
    	while(t != NULL)
    	{
    		cout << t->getValue() << " ";
    		t = t->getNext();
		}
		cout<<endl;
    }

    int totalElements (){
    	int count = 0;
    	Node * t = head;
    	while(t != NULL)
    	{
    		count++;
    		t = t->getNext();
		}
		return count;
    }
    ~SingleLinkList(){
    	while(deleteFromHead() != -1)
    	{
		}
	}
	 bool isCircular() 
    {
        Node *temp=head->getNext();
         if (head == nullptr) return false;
        // if(head->next==NULL) return false;
        while(temp!=NULL && temp!=head)
        {
            temp=temp->getNext();
        }
        if(temp==head)
        {
            return true;
        }
        return false;
    }
};

int main()
{
	SingleLinkList sll;
	sll.insertAtTail(10);
	sll.insertAtTail(20);
	sll.insertAtTail(30);
	sll.insertAtTail(40);
	sll.display();
	cout<<sll.deleteElement(50)<<endl;
	sll.display();
//	cout<<sll.deleteElement(10)<<endl;
//	sll.display();
//	cout<<sll.deleteElement(30)<<endl;
//	sll.display();
//	cout<<sll.deleteElement(40)<<endl;
//	sll.display();
//	cout<<sll.deleteElement(20)<<endl;
//	sll.display();
	cout << sll.deleteFromTail() << endl;
	sll.display();
//	cout << sll.deleteFromTail() << endl;
//	sll.display();
//	cout << sll.deleteFromTail() << endl;
//	sll.display();
//	cout << sll.deleteFromTail() << endl;
//	sll.display();
	sll.insertAtHead(40);
	sll.display();
	cout<<sll.deleteFromHead()<<endl;
	sll.display();
	cout<<"Total Elements: " << sll.totalElements()<<endl;
	if(sll.isCircular())
    {
        cout<<"circular";
    }
    else{
        cout<<" not circular";
    }
	return 0;
}
