#include<iostream>
#include<queue> //libraries is always in small letters
using namespace std;
int main()
{
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    cout<<"front of queue is "<<q.front()<<endl;
    cout<<"size of queue is "<< q.size()<<endl;
    q.pop();
    cout<<"size of queue is "<< q.size()<<endl;
    cout<<"back of queue is "<<q.back()<<endl;

}