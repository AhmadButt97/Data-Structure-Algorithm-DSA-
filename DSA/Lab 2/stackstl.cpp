#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"Top is "<<s.top()<<endl;
    s.pop();
    cout<<"Top is "<<s.top();
}
