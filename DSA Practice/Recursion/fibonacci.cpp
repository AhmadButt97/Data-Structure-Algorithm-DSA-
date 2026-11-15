#include<iostream>
using namespace std;
int fab(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }
    return fab(n-1)+fab(n-2);
}
int main()
{
    cout<<fab(1);
}