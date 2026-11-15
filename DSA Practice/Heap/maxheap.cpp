#include <iostream>
using namespace std;
class Maxheap
{
private:
  int size;
  int noofelement;
  int *arr;

public:
  Maxheap(int s)
  {
    arr = new int[s];
    noofelement = 0;
    size = s;
  }
  // insertion in heap
  void insert(int value)
  {
    if (noofelement == size)
    {
      cout << "Heap is Full, OveFlow " << endl;
    }
    arr[noofelement] = value;
    int index = noofelement;
    noofelement++;
    while (index > 0 && arr[(index - 1) / 2] < arr[index])
    {
      swap(arr[(index - 1) / 2], arr[index]);
      index = (index - 1) / 2;
    }
    cout << arr[index] << " is inserted" << endl;
  }
  void print()
  {
    for (int i = 0; i < noofelement; i++)
    {
      cout << arr[i] << " ";
    }
  }
  void Heapify();
  void Delete()
  {
    if (noofelement == 0)
    {
      cout << "Heap Underflow" << endl;
      return;
    }
    cout << arr[0] << " Deleted from heap " << endl;
    arr[0] = arr[noofelement - 1];
    noofelement--;
    if (size == 0)
    {
      return;
    }
    Heapify(0);
  }
  // Heapify
  void Heapify(int index)
  {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < noofelement && arr[largest] < arr[left])
    {
      largest = left;
    }
    if (right < noofelement && arr[largest] < arr[right])
    {
      largest = right;
    }

    if (largest != index)
    {
      swap(arr[index], arr[largest]);
      Heapify(largest);
    }
  }
};
int main()
{
  Maxheap H1(6);
  H1.insert(3);
  H1.insert(4);
  H1.insert(6);
  H1.insert(97);
  cout << endl;
  H1.print();
  cout << endl;
  H1.Delete();
  cout << endl;
  H1.print();
}