#include <iostream>
using namespace std;

int findParent(int tree[], int size, int index) {
    if (index <= 0 || index >= size) return -1; // Root or invalid index
    return tree[(index - 1) / 2]; // Parent is at (i-1)/2
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(tree) / sizeof(tree[0]);

    int index = 4; // Example: Find parent of node at index 4
    int parent = findParent(tree, size, index);

    if (parent == -1)
        cout << "The node has no parent or invalid index." << endl;
    else
        cout << "The parent of node " << tree[index] << " is " << parent << endl;

    return 0;
}
