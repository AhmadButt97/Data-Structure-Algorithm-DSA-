#include <iostream>
using namespace std;
class collection
{
private:
  int size;
  int noofelement;
  int *data;

public:
  collection()
  {
    size = 0;
    noofelement = 0;
  }
  collection(int s)
  {
    size = s;
    data = new int[size];
  }
  void resize()
  {
    int newsize = size + 5;
    int *data2 = new int[newsize];
    for (int i = 0; i < noofelement; i++)
    {
      data2[i] = data[i];
    }
    delete[] data;
    data = data2;
    size = newsize;
  }
  void add(int element)
  {
    if (noofelement < size)
    {
      data[noofelement] = element;
      noofelement++;
    }
    else
    {
      resize();
      data[noofelement] = element;
      noofelement++;
    }
  }

  bool Delete(int element)
  {
    // Allocate temp for one less than current count
    int *temp = new int[noofelement];
    int j = 0;          // Index for temp array
    bool found = false; // Flag to check if the element was found

    // Iterate only up to noofelement
    for (int i = 0; i < noofelement; i++)
    {
      if (data[i] != element)
      {
        temp[j] = data[i]; // Copy elements that are not the target
        j++;
      }
      else
      {
        found = true; // Element found, set flag
      }
    }

    if (found)
    {
      //        delete[] data; // Free old memory
      //        data = new int[j]; // Allocate new memory for the reduced size
      //        for (int i = 0; i < j; i++) {
      //            data[i] = temp[i]; // Copy remaining elements to data
      //        }
      //        noofelement = j; // Update noofelement to reflect the new count
      noofelement--;
    }

    delete[] data; // Free temp memory
    data = temp;
    return found; // Return true if the element was found and deleted
  }
  bool search(int element)
  {
    for (int i = 0; i < noofelement; i++)
    {
      if (data[i] == element)
      {
        return true;
      }
    }
    return false;
  }
  void display()
  {
    cout << "Array is ";
    for (int i = 0; i < noofelement; i++)
    {
      cout << data[i] << "  ";
    }
  }
};
int main()
{
  collection *c = new collection(3);
  c->add(10);
  c->add(20);
  c->add(30);
  c->add(40);
  c->add(50);
  c->add(60);
  c->add(70);
  c->add(80);
  c->display();
  cout << endl;
  cout << c->Delete(10) << endl;
  cout << c->Delete(70) << endl;
  cout << c->Delete(30) << endl;
  cout << c->search(80) << endl;
  c->display();
}