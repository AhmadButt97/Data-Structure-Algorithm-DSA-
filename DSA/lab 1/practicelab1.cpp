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
    size=0;
    noofelement=0;
  }
  collection(int s)
  {
    size=s;
    data=new int[size];
  }
  void resize()
  {
    int newsize=size+5;
    int *data2=new int[newsize];
    for(int i=0;i<noofelement;i++)
    {
        data2[i]=data[i];
    }
    delete [] data;
    data=data2;
    size=newsize;
  }
  void add(int element)
  {
    if(noofelement<size)
    {
        data[noofelement]=element;
        noofelement++;
    }
    else
    {
        resize();
        data[noofelement]=element;
        noofelement++;
    }
  }
  void display()
  {
    cout<<"Array is ";
    for(int i=0;i<noofelement;i++)
    {
      cout<<data[i]<<"  ";
    }
}
bool Delete(int element)
{ int *temp= new int[noofelement];
bool found=false;
int j=0;
   for(int i=0;i<noofelement;i++)
   {
    if(data[i]==element)
    {
      found = true;
    }
   else
   {
    temp[j]=data[i];
    j++;
   }
   }
   if(found)
   {
   	noofelement--;
	}
   delete [] data;
   data=temp;
   return found;
}
bool search(int element)
{
   for(int i=0;i<size;i++)
   {
    if(data[i]==element)
    {
      return true;
    }
   }
   return false;
}
void total()
{
	cout<<"Total no of elements are "<<noofelement<<endl;
}
~collection();
};
int main()
{
collection * c = new collection(3);
c->add(10);
c->add(20);
c->add(30);
c->add(40);
c->add(50);
c->add(60);
c->add(70);
c->add(80);
c->display();
cout<<endl;
cout<<c->Delete(10)<<endl;
cout<<c->Delete(70)<<endl;
cout<<c->Delete(30)<<endl;
cout<<c->Delete(20)<<endl;
cout<<c->Delete(50)<<endl;
cout<<c->search(80)<<endl;
c->display();
}