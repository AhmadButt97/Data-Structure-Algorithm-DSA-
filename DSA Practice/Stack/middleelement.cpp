#include <iostream>
#include <stack>

using namespace std;

void deleteMiddle(stack<int>& s) {
    int n = s.size();
    if (n == 0) return;

    int midIndex = n / 2; // Find the middle index
    stack<int> tempStack;

    // Move elements to tempStack until we reach the middle element
    for (int i = 0; i < midIndex; ++i) {
        tempStack.push(s.top());
        s.pop();
    }

    // Remove the middle element
    if (!s.empty()) {
        s.pop();
    }

    // Restore the original stack from tempStack
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

// Example usage
int main() {
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    // myStack.push(5);
    // myStack.push(6);
    // myStack.push(7);

    deleteMiddle(myStack);

    // Display the modified stack
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    
    return 0;
}
