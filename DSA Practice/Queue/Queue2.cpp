#include<iostream>
#include<queue> //libraries is always in small letters
using namespace std;
class Queue
{
    int *data=nullptr;
    int size=0;
    int front;
    int rear; 
    public:
    Queue(int s)
    {
        size=s;
        data=new int [size];
        front=-1;
        rear=-1;
    }
    bool enqueue(int element)
    {
        if(rear==size-1)
        {
            cout<<"Queue is full "<<endl;
            return false;
        }
        else if(front==-1)
        {
            front=0;
        }
        rear++;
        data[rear]=element; // push/enqueue -> rear
        return true;
    }
    int dequeue()
    {
         if(front==-1)
        {
            return -1;
        }
        int x=data[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }
    int Front()
    {
        if(front==rear)
        {
            return -1;
        }
    else
    {
        return data[front];
    }
    }
    int totalelements()
    {
        return rear-front+1;
    }
    void display() {
        if (front == rear) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
Queue* q = new Queue (10);
cout<<q->enqueue(5) << endl;
cout << q->enqueue(10) << endl;
cout << q->enqueue(15) << endl;
cout << q->enqueue(20) << endl;
cout << q->enqueue(25) << endl;
cout << q->dequeue() << endl;
cout << q->dequeue() << endl;
cout << q->enqueue(30) << endl;
cout << q->totalelements() << endl;
q->display();
return 0;
}
