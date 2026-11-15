#include <iostream>
using namespace std;

void minheap(int *arr, int s) {
    // For each element, bubble up if needed
    for(int i = 1; i < s; i++) {
        int current = i;
        // Continue bubbling up while parent exists and is greater than current
        while(current > 0 && arr[(current-1)/2] > arr[current]) {
            swap(arr[(current-1)/2], arr[current]);
            current = (current-1)/2;  // Move to parent index
        }
    }
}

void print(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 7, 1, 9, 5, 2, -1, 20};
    minheap(arr, 8);
    print(arr, 8);
    return 0;
}