#include <iostream>
using namespace std;

void insertionsort(int *arr, int size) {
    // Insertion Sort Logic
    for (int i = 1; i < size; i++) {  // Start from the second element (index 1)
        int key = arr[i];  // The element to be inserted
        int j = i - 1;  // j will track the position of the elements to the left of the key

        // Move elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift elements to the right
            j = j - 1;  // Move to the previous element
        }
        
        // Place the key in the correct position (arr[j+1] will be the position)
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {2, 7, 5, 4};  // Sample input array
    int size = 4;

    insertionsort(arr, size);  // Call the sorting function

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Output: 2 3 4 5
    }

    return 0;
}
