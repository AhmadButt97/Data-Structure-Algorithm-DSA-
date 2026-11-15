#include<iostream>
using namespace std;
class Queue
{
    int *data;
    int size=0;
    int noofelement=0;
public:
Queue(int s)
{
    size=s;
    data=new int[size];
}
void enqueue(int element)
{
    if(noofelement<size)
    {
        data[noofelement]=element;
        noofelement++;
    }
    else
        cout<<"Over flow "<<endl;
}
int dequeue()
{
    int x=data[0];
    for(int i=0;i<noofelement;i++)  //its bigo is 0(n) not effective 
    {
        data[i] = data[i+1];
    }
    noofelement--;
    return x;
}
void display()
{
    for(int i=0;i<noofelement;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{ 
    Queue *q=new Queue(5);
    q->enqueue(5);
    q->enqueue(10);
    q->enqueue(15);
    q->enqueue(20);
    q->enqueue(25);
    cout<<q->dequeue()<<endl;
    cout<<q->dequeue()<<endl;
    q->enqueue(30);
    q->display();
    delete q;
} 