#include <iostream>
using namespace std;

class BinaryTree {
private:
    int arr[20];  // Fixed size array for simplicity
    
public:
    // Constructor
    BinaryTree() {
        // Initialize array with -1 to indicate empty spaces
        for(int i = 0; i < 20; i++) {
            arr[i] = -1;
        }
    }
    
    // Insert element at given position
    void insert(int position, int value) {
        if(position >= 20) {
            cout << "Position out of bounds" << endl;
            return;
        }
        arr[position] = value;
    }
    
    // Insert left child
    void insertLeft(int parent, int value) {
        int left = 2 * parent + 1;
        if(left >= 20) {
            cout << "Left child position out of bounds" << endl;
            return;
        }
        arr[left] = value;
    }
    
    // Insert right child
    void insertRight(int parent, int value) {
        int right = 2 * parent + 2;
        if(right >= 20) {
            cout << "Right child position out of bounds" << endl;
            return;
        }
        arr[right] = value;
    }
    
    // Display the tree
    void display() {
        cout << "\nTree elements: " << endl;
        for(int i = 0; i < 20; i++) {
            if(arr[i] != -1) {
                cout << "Position " << i << ": " << arr[i] << endl;
            }
        }
    }
};

int main() {
    BinaryTree tree;
    
    // Insert root
    tree.insert(0, 50);
    
    // Insert children of root
    tree.insertLeft(0, 30);    // Left child of 50
    tree.insertRight(0, 70);   // Right child of 50
    
    // Insert children of 30
    tree.insertLeft(1, 20);    // Left child of 30
    tree.insertRight(1, 40);   // Right child of 40
    
    // Display the tree
    tree.display();
    
    return 0;
}