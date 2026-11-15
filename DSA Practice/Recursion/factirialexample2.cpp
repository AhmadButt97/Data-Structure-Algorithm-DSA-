#include<iostream>
using namespace std;
int factorial(int a)
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<factorial(x)<<endl;
    cout<<endl;
    cout<<factorial(y)<<endl;
    cout<<endl;
    cout<<factorial(z)<<endl;
    cout<<endl;
}