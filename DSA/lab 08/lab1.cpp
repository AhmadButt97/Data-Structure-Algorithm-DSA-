#include <iostream>
using namespace std;

class BT {
private:
    int size;
    int *avail;
    int *data;
    int totalNodes;

public:
    // Constructor to initialize the data members
    BT(int s) {
        size = s;
        data = new int[size];
        avail = new int[size];
        totalNodes = 0;
        for (int i = 0; i < size; i++) {
            avail[i] = -1; // Mark all positions as available
        }
    }

    // Function to insert an element into the binary tree
    void insertElement(int element) {
        if (totalNodes < size) {
            data[totalNodes] = element;
            avail[totalNodes] = totalNodes; // Mark the position as occupied
            totalNodes++;
        } else {
            cout << "Tree is full!" << endl;
        }
    }

    // Function to insert a left child
    bool insertLeftChild(int parent, int child) {
        int parentIndex = findIndex(parent);
        if (parentIndex != -1 && (2 * parentIndex + 1) < size && avail[2 * parentIndex + 1] == -1) {
            data[2 * parentIndex + 1] = child;
            avail[2 * parentIndex + 1] = 2 * parentIndex + 1; // Mark as occupied
            return true;
        }
        return false;
    }

    // Function to insert a right child
    bool insertRightChild(int parent, int child) {
        int parentIndex = findIndex(parent);
        if (parentIndex != -1 && (2 * parentIndex + 2) < size && avail[2 * parentIndex + 2] == -1) {
            data[2 * parentIndex + 2] = child;
            avail[2 * parentIndex + 2] = 2 * parentIndex + 2; // Mark as occupied
            return true;
        }
        return false;
    }

    // Function to delete an element
    bool deleteElement(int element) {
        int index = findIndex(element);
        if (index != -1) {
            avail[index] = -1; // Mark as available
            return true;
        }
        return false;
    }

    // Function to search for an element
    bool search(int element) {
        return findIndex(element) != -1;
    }

    // Function to get the total number of nodes in the tree
    int totalElements() {
        return totalNodes;
    }

private:
    // Helper function to find the index of an element
    int findIndex(int element) {
        for (int i = 0; i < totalNodes; i++) {
            if (data[i] == element) {
                return i;
            }
        }
        return -1; // Element not found
    }

public:
    ~BT() {
        delete[] data;
        delete[] avail;
    }
};

int main() {
    BT tree(10); // Create a binary tree with a maximum of 10 nodes

    tree.insertElement(1);
    tree.insertElement(2);
    tree.insertElement(3);

    cout << "Total elements: " << tree.totalElements() << endl;

    tree.insertLeftChild(1, 4);
    tree.insertRightChild(1, 5);

    cout << "After inserting children, total elements: " << tree.totalElements() << endl;

    if (tree.search(4)) {
        cout << "Element 4 found in the tree." << endl;
    } else {
        cout << "Element 4 not found in the tree." << endl;
    }

    tree.deleteElement(3);
    
    cout << "After deleting element 3, total elements: " << tree.totalElements() << endl;

    return 0;
}
