#include <iostream>
using namespace std;

void inOrder(int tree[], int size, int index) {
    if (index >= size || tree[index] == -1) return; // -1 indicates a NULL node
    inOrder(tree, size, 2 * index + 1); // Visit left child
    cout << tree[index] << " ";        // Visit current node
    inOrder(tree, size, 2 * index + 2); // Visit right child
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7}; // Complete binary tree
    int size = sizeof(tree) / sizeof(tree[0]);
    inOrder(tree, size, 0);
    return 0;
}


void postOrder(int tree[], int size, int index) {
    if (index >= size || tree[index] == -1) return;
    postOrder(tree, size, 2 * index + 1); // Visit left child
    postOrder(tree, size, 2 * index + 2); // Visit right child
    cout << tree[index] << " ";          // Visit current node
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(tree) / sizeof(tree[0]);
    postOrder(tree, size, 0);
    return 0;
}


void preOrder(int tree[], int size, int index) {
    if (index >= size || tree[index] == -1) return;
    cout << tree[index] << " ";        // Visit current node
    preOrder(tree, size, 2 * index + 1); // Visit left child
    preOrder(tree, size, 2 * index + 2); // Visit right child
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(tree) / sizeof(tree[0]);
    preOrder(tree, size, 0);
    return 0;
}
