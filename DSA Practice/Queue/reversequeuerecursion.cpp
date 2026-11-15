#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reversequeue(queue<int>&q)
{
    if(q.empty())
    {
        return ;
    }
        int x=q.front();
        q.pop();
        reversequeue(q);
        return q.push(x);
}
void display(queue<int> &q)
{
    while (!q.empty()) {
        cout << "elements: " << q.front() << " ";
        q.pop();
    }
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    reversequeue(q);
    display(q);
    return 0;
}