#include <iostream>
using namespace std;

void reversearray(int *arr, int size) {
    for (int i = 0; i < size/2; i++) 
    {
        // Swap elements
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5,6};
    reversearray(array, 6);
    return 0;
}
