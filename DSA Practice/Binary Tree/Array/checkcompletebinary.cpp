#include <iostream>  
#include <vector>  

using namespace std;  

bool isCompleteBinaryTree(const vector<int>& arr) {  
    int n = arr.size();  
    int i = 0;  
    
    // Traverse the array until we find the first empty node  
    while (i < n && arr[i] != -1) {  
        i++;  
    }  
    
    // Check if all the remaining nodes are empty  
    while (i < n && arr[i] == -1) {  
        i++;  
    }  
    
    // If we have reached the end of the array, the tree is complete  
    return i == n;  
}  

int main() {  
    // Example usage  
    vector<int> arr = {1, 2, 3, 4, 5,6,-1};  
    if (isCompleteBinaryTree(arr)) {  
        cout << "The binary tree is complete." << endl;  
    } else {  
        cout << "The binary tree is not complete." << endl;  
    }  
    
    return 0;  
}