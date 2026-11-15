#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int size;
    int front;
    int rear;
    int *data;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
        size = 3;
        data = new int[size];
    }
    CircularQueue(int s)
    {
        front = -1;
        rear = -1;
        size = s;
        data = new int[size];
    }
    bool enqueue(int element)
    {
        if (front == -1 && rear == -1)
        {
            data[0] = element;
            front = 0;
            rear = 1;
            return true;
        }
        data[rear] = element;
        if (front == rear)
        {
            front = (front + 1) % size;
        }
        rear = (rear + 1) % size;
        return true;
    }
    int dequeue()
    {
        if (front == -1 && rear == -1)
        {
            return -1;
        }
        int x = data[front];
        front = (front + 1) % size;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        return x;
    }
    // int totalElements()
    // {
    //     int y = front + 1;
    //     return y;
    // }
    void display()
    {
        if(front==-1)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout << "Circular Queue" << " : ";
        int i = front;
        while (i != rear)
        {
            cout << data[i] << " ";
            i=(i+1)%size;
        }
        cout << endl;
    }
    // int totalElements()
    // {
    //     int counter = 0;
    //     int i = front;
    //     while (i != rear)
    //     {
    //         counter++;
    //         i=(i+1)%size;
    //     }
    //     return counter;
    // }
    int totalElements()
    {
        if (front == -1)
        {
            return 0;
        }
        if (rear >= front)
        {
            return rear - front;
        }
        else
        {
            return size - (front - rear);
        }
    }
    ~CircularQueue()
    {
        if (data != NULL)
        {
            delete[] data;
            data = NULL;
        }
    }
};

int main()
{
    CircularQueue *q = new CircularQueue(3);
    cout << q->enqueue(5) << endl;
    cout << q->enqueue(10) << endl;
    cout << q->enqueue(15) << endl;
    cout << q->enqueue(20) << endl;
    cout << q->enqueue(25) << endl;
    cout << q->dequeue() << endl;
    cout << q->dequeue() << endl;
    cout << q->enqueue(30) << endl;
    cout << q->totalElements() << endl;
    q->display();
    return 0;
}