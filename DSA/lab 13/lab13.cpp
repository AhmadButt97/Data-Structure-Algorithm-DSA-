#include <iostream>
using namespace std;

// A utility function to get the maximum value in the array
int getMax(int data[], int size) {
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

// A function to do counting sort of data[] according to the digit represented by exp
void countingSort(int data[], int size, int exp) {
    int output[size]; // output array
    int count[10] = {0};

    // Store count of occurrences
    for (int i = 0; i < size; i++) {
        count[(data[i] / exp) % 10]++;
    }

    // Change count[i] so that count[i] now contains actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[(data[i] / exp) % 10] - 1] = data[i];
        count[(data[i] / exp) % 10]--;
    }

    // Copy the output array to data[], so that data[] now contains sorted numbers according to current digit
    for (int i = 0; i < size; i++) {
        data[i] = output[i];
    }
}

// The main function to implement Radix Sort
void RadixSort(int data[], int size) {
    int max = getMax(data, size);

    // Do counting sort for every digit. Instead of passing digit number, exp is passed.
    // exp is 10^i where i is the current digit number
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(data, size, exp);
    }
}

// Function to display the array
void displayArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Original array: \n";
    displayArray(data, size);

    RadixSort(data, size);

    cout << "Sorted array: \n";
    displayArray(data, size);

    return 0;
}