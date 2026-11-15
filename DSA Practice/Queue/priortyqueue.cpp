#include <iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(0);
    cout<<q.top()<<endl;
    cout<<"size "<<q.size()<<endl;
    q.pop();
     cout<<q.top()<<endl;
    cout<<"size "<<q.size();

}