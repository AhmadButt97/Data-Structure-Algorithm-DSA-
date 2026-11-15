#include<iostream>
using namespace std;
class shape
{ public:
    virtual void displayarea()=0;
};
class square:public shape
{
    public:
    int x;
    square(int a)
    {
        x=a;
    }
 void  displayarea()
  {
    cout<<"Square area is "<<x*x<<endl;
  }
};
class rectangle:public shape
{
     public:
    int x,y;
   rectangle(int a,int b)
    {
        x=a;
        y=b;
    }
  void displayarea()
  {
    cout<<"rectangle area is "<<x*y<<endl;
  }
};
class triangle:public shape
{
    public:
    int x,y;
    triangle(int a,int b)
    {
        x=a;
        y=b;
    }
 void displayarea()
  {
    cout<<"triangle area is "<<(x*y)/2<<endl;
  }
};
int main()
{
  shape* s=new triangle(5,4);
  s->displayarea();
  delete s;
   s=new rectangle(5,4);
  s->displayarea();
  delete s;
    s=new square(5);
  s->displayarea();
  delete s;
  return 0;
}