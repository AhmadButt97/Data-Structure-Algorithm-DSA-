#include<iostream>
using namespace std;
void print(int i,int a=1)
{
    if(i<a)
    {
        return ;
    }
    cout<<a<<" ";
    print(i,a+1);
    // if(i==a)
    // {
    //     cout<<a<<" ";
    //     return ;
    // }
    // cout<<a<<" ";
    // print(i,a+1);
}
void display(int n)
{
    if(n==0)
    {
        return ;
    }
    display(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
   //print(n);
   display(n);
    return 0;
}