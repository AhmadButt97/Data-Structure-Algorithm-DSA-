#include <iostream>
#include<queue>
#include<stack>
using namespace std;
void reversequeue(queue<int>&q,int k)
{
    stack<int>st;
    for(int i=1;i<=k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    int t=q.size()-k;
    while(t--)
    {
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int>Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    reversequeue(Q,4);
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
}