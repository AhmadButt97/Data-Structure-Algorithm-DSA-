#include <iostream>  
using namespace std;  

class BT {  
private:  
    int size;  
    int* avail;  
    int* data;  

public:  
    // Constructor  
    BT() {  
        size = 10;  
        avail = new int[size];  
        data = new int[size];  

        for (int i = 0; i < size; i++) {  
            avail[i] = 1;  
            data[i] = -1;  
        }  
    }

    // Parameterized Constructor  
    BT(int treeSize) {  
        size = treeSize;  
        avail = new int[size];  
        data = new int[size];  

        for (int i = 0; i < size; i++) {  
            avail[i] = 1;  
            data[i] = -1;  
        }  
    }  

    // Insert Element  
    void insertElement(int element) {  
        for (int i = 0; i < size; i++) {  
            if (avail[i] == 1) {  
                data[i] = element;  
                avail[i] = 0;  
                return;  
            }  
        }  
        cout << "Tree is full." << endl;  
    }  

    // Insert Left Child  
    bool insertLeftChild(int parent, int child) {  
        int parentIndex = -1;  

        for (int i = 0; i < size; i++) {  
            if (data[i] == parent && avail[i] == 0) {  
                parentIndex = i;  
                break;  
            }  
        }  

        if (parentIndex == -1) { 
            cout << "Parent does not exist" << endl; 
            return false;  
        }  

        int leftChildIndex = 2 * parentIndex + 1;  

        if (leftChildIndex >= size || avail[leftChildIndex] == 0) { 
              cout << "Left child already exists." << endl; 
            return false;  
        }  

        data[leftChildIndex] = child;  
        avail[leftChildIndex] = 0;  

        return true;  
    }  

    // Insert Right Child  
    bool insertRightChild(int parent, int child) {  
        int parentIndex = -1;  

        for (int i = 0; i < size; i++) {  
            if (data[i] == parent && avail[i] == 0) {  
                parentIndex = i;  
                break;  
            }  
        }  

        if (parentIndex == -1) {  
            return false;  
        }  

        int rightChildIndex = 2 * parentIndex + 2;  

        if (rightChildIndex >= size || avail[rightChildIndex] == 0) {  
            return false;  
        }  

        data[rightChildIndex] = child;  
        avail[rightChildIndex] = 0;  

        return true;  
    }  

    // Delete Element  
    bool deleteElement(int element) {  
        int index = -1;  

        for (int i = 0; i < size; i++) {  
            if (data[i] == element && avail[i] == 0) {  
                index = i;  
                break;  
            }  
        }  

        if (index == -1) {  
            return false;  
        }  

        data[index] = -1;  
        avail[index] = 1;  

        return true;  
    }  

    // Delete Left Child  
    bool deleteLeftChild(int parent) {  
        int parentIndex = -1;  

        for (int i = 0; i < size; i++) {  
            if (data[i] == parent && avail[i] == 0) {  
                parentIndex = i;  
                break;  
            }  
        }  

        if (parentIndex == -1) {  
            return false;  
        }  

        int leftChildIndex = 2 * parentIndex + 1;  

        if (leftChildIndex >= size || avail[leftChildIndex] == 1) {  
            return false;  
        }  

        data[leftChildIndex] = -1;  
        avail[leftChildIndex] = 1;  

        return true;  
    }  

    // Delete Right Child  
    bool deleteRightChild(int parent) {  
        int parentIndex = -1;  

        for (int i = 0; i < size; i++) {  
            if (data[i] == parent && avail[i] == 0) {  
                parentIndex = i;  
                break;  
            }  
        }  

        if (parentIndex == -1) {  
            return false;  
        }  

        int rightChildIndex = 2 * parentIndex + 2;  

        if (rightChildIndex >= size || avail[rightChildIndex] == 1) {  
            return false;  
        }  

        data[rightChildIndex] = -1;  
        avail[rightChildIndex] = 1;  

        return true;  
    }  

    // Search Element  
    bool search(int element) {  
        for (int i = 0; i < size; i++) {  
            if (data[i] == element && avail[i] == 0) {  
                return true;  
            }  
        }  
        return false;  
    }  

    // Total Elements  
    int totalElements() {  
        int count = 0;  
        for (int i = 0; i < size; i++) {  
            if (avail[i] == 0) {  
                count++;  
            }  
        }  
        return count;  
    }  

    // Destructor  
    ~BT() {  
        delete[] avail;  
        delete[] data;  
    }  
};  

int main() {  
    BT tree;  
    tree.insertElement(10);  
    tree.insertElement(20);  
    tree.insertElement(30);  

    cout << "Total elements: " << tree.totalElements() << endl;  

    if (tree.insertLeftChild(10, 40)) {  
        cout << "Left child inserted successfully." << endl;  
    } else {  
        cout << "Failed to insert left child." << endl;  
    }  

    if (tree.insertRightChild(10, 50)) {  
        cout << "Right child inserted successfully." << endl;  
    } else {  
        cout << "Failed to insert right child." << endl;  
    }  

    if (tree.deleteElement(20)) {  
        cout << "Element deleted successfully." << endl;  
    } else {  
        cout << "Failed to delete element." << endl;  
    }  

    if (tree.deleteLeftChild(10)) {  
        cout << "Left child deleted successfully." << endl;  
    } else {  
        cout << "Failed to delete left child." << endl;  
    }  

    if (tree.deleteRightChild(10)) {  
        cout << "Right child deleted successfully." << endl;  
    } else {  
        cout << "Failed to delete right child." << endl;  
    }  

    if (tree.search(10)) {  
        cout << "Element found in the tree." << endl;  
    } else {  
        cout << "Element not found in the tree." << endl;  
    }  

    return 0;  
}