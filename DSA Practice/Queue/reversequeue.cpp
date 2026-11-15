#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reversequeue(queue<int>& q) {
    stack<int> s;

    // Transfer elements from queue to stack
    while (!q.empty()) 
    {
        s.push(q.front());
        q.pop();
    }

    // Transfer elements from stack back to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    reversequeue(q);
    
    while (!q.empty()) {
        cout << "elements: " << q.front() << " ";
        q.pop();
    }
    
    return 0;
}