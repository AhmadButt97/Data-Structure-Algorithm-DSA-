#include <iostream>
#include <stack> // Include stack header

using namespace std;

void reversestack(stack<int>& obj) { // Pass by reference to modify original stack
    stack<int> t1, t2;
    
    // Move elements from obj to t1
    while (!obj.empty()) {
        int curr = obj.top();
        obj.pop();
        t1.push(curr);
    }
    
    // Move elements from t1 to t2
    while (!t1.empty()) {
        int curr = t1.top();
        t1.pop();
        t2.push(curr);
    }
    // Move elements from t2 back to obj
    while (!t2.empty()) {
        int curr = t2.top();
        t2.pop();
        obj.push(curr);
    }
}

int main() {
    stack<int> obj; // Declare stack of int type
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    
    cout << "Original stack: ";
    for (auto temp = obj; !temp.empty(); temp.pop()) {
        cout << temp.top() << " "; // This will print the original stack
    }
    cout << endl;

    reversestack(obj);
    
    cout << "Reversed stack: ";
    while (!obj.empty()) {
        int curr = obj.top();
        obj.pop();
        cout << curr << " "; // This will print the reversed stack
    }
    
    cout << endl; // New line for better formatting
    return 0; // Return 0 to indicate successful completion
}
