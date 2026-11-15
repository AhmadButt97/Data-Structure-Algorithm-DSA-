#include<iostream>
using namespace std;
class stack
{
  private:
  int size;
  int noofelement;
  int *data;
  public:
  stack()
  {
    size=0;
    noofelement=0;
    data=new int[size];
  }
  stack(int s)
  {
    size=s;
  }
  void resize()
  {
    size=size+5;
  
  }
  int push(int element)
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
  int top()
  {
  	return data[noofelement-1];
  }
  int pop()
  {
  	if(noofelement>0)
  	{
  	int n=data[noofelement-1];
  	noofelement--;
  	return n;
    }
    else
    {
    	return -1;
    }
  }
  void totalelement()
  {
  	cout<<"total element of arary is "<<noofelement<<endl;
  }
  void dispaly()
  {
  	cout<<"Array is ";
  	for(int i=0;i<noofelement;i++)
  	{
  		cout<<data[i]<<" ";
	}
  }
};
int main()
{
    stack *s=new stack(3);
    s->push(5);
    s->push(10);
    s->push(15);
    s->push(20);
    s->push(25);
    s->pop();
    s->pop();
    s->push(30);
    s->top();
    s->totalelement();
    s->dispaly();
   
}