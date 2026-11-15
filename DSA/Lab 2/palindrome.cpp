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
  bool palindrome(char *arr,int s)
  {
    stack  st(s);
    for(int i=0;i<s;i++)
    {
        st.push(arr[i]);
    }
   for(int i=0;i<s;i++)
    {
        if(arr[i]!=st.top())
        {
            return false;
        }

    st.pop();
}
 return true;
  }
int main()
{
   char array[]={'m','a','d','a','m'};
      if(palindrome(array , 5))
      {
        cout<<"Palindrome"<<endl;
      }
      else
      {
        cout<<"Not Palindrome"<<endl;

      }
    return 0;
}