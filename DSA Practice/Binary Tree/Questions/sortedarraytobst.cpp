#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to convert sorted array to a balanced BST
Node* sortedArrayToBST(int arr[], int start, int end) {
    // Base case: when start index exceeds end index, return null
    if (start > end) {
        return nullptr;
    }

    // Find the middle index
    int mid = (start + end) / 2;

    // Create a new node with the middle element
    Node* root = new Node(arr[mid]);

    // Recursively build the left subtree with the left half of the array
    root->left = sortedArrayToBST(arr, start, mid - 1);

    // Recursively build the right subtree with the right half of the array
    root->right = sortedArrayToBST(arr, mid + 1, end);

    return root;
}

// Function for in-order traversal (to print the BST)
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    // Example sorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Convert sorted array to BST
    Node* root = sortedArrayToBST(arr, 0, n - 1);

    // Print the in-order traversal of the BST (should be sorted)
    cout << "In-order traversal of the BST: ";
    inorderTraversal(root);

    return 0;
}
