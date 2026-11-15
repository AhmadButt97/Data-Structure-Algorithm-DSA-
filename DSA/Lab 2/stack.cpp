#include<iostream>
using namespace std;
class stack
{
    private:
    int size;
    int noofelements;
    char *data;
    public:
  stack(int s)
  {
    size=s;
    data=new char[size];
  }
  bool push(int element)
  {
    if(noofelements<size)
    {
        data[noofelements]=element;
        noofelements++;
        return true;
    }
    else
    {
        return false;
    }
  }
  char top()
  {
    return data[noofelements-1];
  }
  char pop()
  {
    if(noofelements>0)
    {
        int n=data[noofelements-1];
        noofelements--;
        return n;
    }
    else
    {
        return -1;
    }
  }
  int total()
  {
    return noofelements;
  }
  void display()
  {
    for(int i=0;i<noofelements;i++)
    {
        cout<<data[i]<<" ";
    }
  }
};
int main()
{
   stack *s=new stack(5);

    cout<<s->push('A')<<endl;
    cout<<s->push('h')<<endl;
    cout<<s->push('m')<<endl;
    cout<<s->push('a')<<endl;
    cout<<s->push('B')<<endl;
    cout<<"Top is "<< s->top()<<endl;
    cout<<"Pop is "<<s->pop()<<endl;
    cout<<"Pop is "<<s->pop()<<endl;
    cout<<"Pop is "<<s->pop()<<endl;
    cout<<"Pop is "<<s->pop()<<endl;
    cout<<"Pop is "<<s->pop()<<endl;
    cout<<s->push('d')<<endl;
    s->display();
}
