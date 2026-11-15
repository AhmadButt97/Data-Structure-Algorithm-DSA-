#include <iostream>
using namespace std;
void heapify(int arr[], int index, int n)
{
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < n && arr[left] < arr[smallest])
    {
        smallest = left;
    }
    if (right < n && arr[right] < arr[smallest])
    {
        smallest = right;
    }
    if (smallest != index)
    {
        swap(arr[smallest], arr[index]);
        heapify(arr, smallest, n);
    }
}
void buildminheap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}
void print(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortArray(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,0,i);
    }
}
int main()
{
    int arr[] = {3, 5, 6, 7, 1, -1, 11};
    buildminheap(arr, 7);
    sortArray(arr,7); //in dessecending order
    print(arr, 7);
}