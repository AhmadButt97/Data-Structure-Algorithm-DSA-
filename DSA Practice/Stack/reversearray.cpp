#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    char *data;
    int size;
public:
 Stack()
 {
    size=0;
    data=nullptr;
 }
void reverse(char *arr,int s)
{
    size=s;
    data=new char [size];
    size=s;
    data[size];
    stack<char>st;
    for(int i=0;i<size;i++)
    {
        st.push(arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        data[i]=st.top();
        st.pop();
    }
    for(int i=0;i<size;i++)
    {
        cout<<data[i];
    }
}
};
int main()
{   Stack s;
    char array[]={'l','o','v','e'};
    s.reverse(array,4);

}