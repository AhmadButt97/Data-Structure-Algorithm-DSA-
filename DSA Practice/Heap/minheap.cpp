#include<iostream>
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
    arr=new int[s];
    noofelement=0;
    size=s;
  }
  //insertion in min heap
  void insert(int value)
  {
    if(noofelement==size)
    {
        cout<<"Heap is Full, OveFlow "<<endl;
        return;
    }
    arr[noofelement]=value;
    int index=noofelement;
    noofelement++;
    while(index>0 && arr[(index-1)/2]>arr[index])
    {
        swap(arr[(index-1)/2],arr[index]);
        index=(index-1)/2;
    }
    cout<<arr[index]<<" is inserted"<<endl;

  }
  void print()
  {
    for(int i=0;i<noofelement;i++)
    {
        cout<<arr[i]<<" ";
    }
  }
 void Heapify(int index){
        int smallest = index ;
        int left = 2*index +1 ; 
        int right = 2*index +2 ;


      if(left<noofelement && arr[smallest]>arr[left])
      {
            smallest= left ;
      }
      if(right<noofelement && arr[smallest]>arr[right])
      {
            smallest= right ;
      }

      if(smallest!=index)
      {
            swap(arr[index],arr[smallest]) ;
            Heapify(smallest); 
      }
}
void Delete()
{
  if(noofelement==size)
  {
    cout<<" Heap Underflow "<<endl;
  }
  arr[0]=arr[noofelement-1];
  noofelement--;
  Heapify(0);
}
};
int main()
{
    Maxheap H1(6);
    H1.insert(90);
    H1.insert(33);
    H1.insert(97);
    H1.insert(97);
    H1.insert(9);
    H1.print();
    cout<<endl;
    H1.Delete();
    cout<<endl;
    H1.print();

}