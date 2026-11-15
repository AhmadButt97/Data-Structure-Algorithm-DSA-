#include <iostream>
#include <stack>
using namespace std;

class CustomStack {
    char *data;
    int size;
public:
    CustomStack() : size(0), data(nullptr) {}
    
    void reverse(char *arr, int s) {
        size = s;
        data = new char[size];
        stack<char> st;

        // Push all elements onto the stack
        for (int i = 0; i < size; i++) {
            st.push(arr[i]);
        }

        // Pop elements from the stack to reverse them
        for (int i = 0; i < size; i++) {
            data[i] = st.top();
            st.pop();
        }

        // Print the reversed array
        for (int i = 0; i < size; i++) {
            cout << data[i];
        }
        cout << endl;

        // Clean up dynamically allocated memory
        delete[] data;
    }
};

int main() {
    CustomStack cs;
    char array[] = {'l', 'o', 'v', 'e'};
    cs.reverse(array, 4);
    return 0;
}
