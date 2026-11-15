#include<iostream>
using namespace std;

class stack {
private:
    int size;
    int noofelement;
    int *data;

public:
    stack() {
        size = 5;
        noofelement = 0;
        data = new int[size];
    }

    void push(int element) {
        if(noofelement < size) {
            data[noofelement] = element;
            noofelement++;
        } 
        else 
        {
            cout << "Overflow" << endl; // Typo: "Oveerflow" should be "Overflow"
        }
    }

    int top() {
        return data[noofelement - 1];
    }

    int pop() {
        if(noofelement > 0) {
            int n = data[noofelement - 1];
            noofelement--;
            return n;
        } else {
            return -1; // Should ideally handle underflow case more gracefully
        }
    }

    void totalelement() {
        cout << "total element of array is " << noofelement << endl; // Typo: "arary" should be "array"
    }

    void dispaly() {
        cout << "Array is ";
        for(int i = 0; i < noofelement; i++) {
            cout << data[i] << " ";
        }
        cout << endl; // Missing endl to print the output correctly
    }

    bool empty() {
        if(noofelement==0)
        {
            return false;
        }
        return true;
    }
};

void reversestack(stack &obj) {
    stack t1, t2;
    while(!obj.empty()) 
    {
        int curr = obj.top();
        obj.pop();
        t1.push(curr);
    }
    while(!t1.empty()) {
        int curr = t1.top();
        t1.pop();
        t2.push(curr);
    }
    while(!t2.empty()) {
        int curr = t2.top();
        t2.pop();
        obj.push(curr);
    }
    
}

int main() {
    stack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    reversestack(obj);
    while(!obj.empty()) {
        int curr = obj.top();
        obj.pop();
        cout << curr << " ";
    }
    cout << endl;
}
