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
    noofelements=0;
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
  int top()
  {
    return data[noofelements-1];
  }
  int pop()
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
  bool empty()
  {
    if(noofelements==0)
    {
        return true;
    }
    return false;
  }
};
void fillstack(stack &st,int *array,int size,int i=0)
{
    if(i>=size)
    {
        return ;
    }
    st.push(array[i]);
    fillstack(st,array,size,i+1);
}
bool palindrome(stack &st,int *array,int size,int i=0)
{
    if(st.empty())
    {
        return true;
    }
    if(i==size)
    {
        return true;
    }
    else if(array[i]==st.top())
    {
        st.pop();
        return palindrome(st,array, size, i+1);
    }
    return false;
}
int main()
{    
    stack st(5);
    int array[]={1,2,3,2,1};
    fillstack(st,array,5);
    if(palindrome(st,array,5))
      {
        cout<<"Palindrome"<<endl;
      }
      else
      {
        cout<<"Not Palindrome"<<endl;

      }
    return 0;
}