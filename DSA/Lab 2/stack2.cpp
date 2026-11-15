#include<iostream>
using namespace std;
class Stack
{
    int noElement;
    int size;
    int *data;
    public:
        Stack()
        {
            noElement=0;
            size=0;
            
        }
        Stack(int n)
        {
            size=n;
            data= new int[size];
        }
        void resize()
        {
            int newsize=size+5;
            int *data2=new int[newsize];
            for(int i=0;i<noElement;i++)
            {
                data2[i]=data[i];
            }
            delete []data;
            data=data2;
            size=newsize;
        }
        void push(int ele)
        {
            if(noElement<size)
            {
                data[noElement]=ele;
                noElement++;
            }
            else
            {
              resize();
              data[noElement]=ele;
             noElement++;
            }
        }
        int top()
        {
            return data[noElement-1];
        }
        int pop()
        {
          int num = data[noElement-1];
           noElement--;
            return num;
}
      int totalElements()
      {
          return noElement;
      }
};
int main()
{
    Stack *c= new Stack(3);
    c->push(5);
    c->push(10);
    c->push(15);
    c->push(30);
    c->push(25);
   cout<< "top is "<<c->top()<<endl;
   cout<<"Pop is "<<c->pop()<<endl;
  cout<<"Pop is "<<c->pop()<<endl;
    cout<<"Pop is "<<c->pop()<<endl;
    cout<<"Pop is "<<c->pop()<<endl;
   // cout<<"Pop is "<<c->pop()<<endl;
   cout<< "top is "<<c->top()<<endl;

  cout<<"total elements "<<c->totalElements()<<endl;
//   cout<<c->pop()<<endl;

    return 0;
}
