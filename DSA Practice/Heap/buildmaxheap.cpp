#include <iostream>
using namespace std;
void heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, n);
    }
}
void buildmaxheap(int arr[], int n)
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
    int arr[] = {3,5,9,6,8,20,10,12,18,9};
    buildmaxheap(arr, 10);
    // cout<<endl;
    // print(arr, 7);
    // cout<<endl;
    sortArray(arr,10); //in assending order
    cout<<endl;
    print(arr, 10);
}