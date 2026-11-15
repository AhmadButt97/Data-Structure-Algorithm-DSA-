#include <iostream>
using namespace std;

int countLeafNodes(int tree[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        // Check if the node is valid and has no children
        if (tree[i] != -1 && (2 * i + 1 >= size || tree[2 * i + 1] == -1)
         && (2 * i + 2 >= size || tree[2 * i + 2] == -1)) 
        {
            count++;
        }
    }
    return count;
}

int main() {
    int tree[] = {1, 2, 3, 4, 5, -1, 7};
    int size = sizeof(tree) / sizeof(tree[0]);
    cout << "Number of leaf nodes: " << countLeafNodes(tree, size) << endl;
    return 0;
}
