#include <iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p;  //max heap
    p.push(3);
    p.push(5);
    p.push(9);
    p.push(6);
    p.push(8);
    p.push(20);
    p.push(10);
    p.push(12);
    p.push(18);
    p.push(100);
    while (!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    
   // Min _heap
    // priority_queue<int,vector<int>,greater<int>>p;  //max heap
    // p.push(5);
    // p.push(3);
    // p.push(9);
    // p.push(1);
    // while (!p.empty())
    // {
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
}