// C++ program to check for balanced brackets.
#include <iostream>
#include<stack>
using namespace std;
bool bracketcheaker(char* arr,int size)
{
    stack<char>st;
    for(int i=0;i<size;i++)
    {
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[' )
        {
            st.push(arr[i]);
        }
        else
        {
            if(!st.empty() && 
            (st.top()=='(' && arr[i]==')') ||
             (st.top()=='{' && arr[i]=='}' )|| (st.top()=='[' && arr[i]==']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
   return st.empty();
}
int main()
{
    char array[4];
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    if(bracketcheaker(array,4))
    {
        cout<<"balanced"<<endl;
    }
    else
    {
        cout<<"Not balanced"<<endl;
    }
}