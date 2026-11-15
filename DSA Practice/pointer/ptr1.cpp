#include<iostream>
using namespace std;
int main()
{
    // int a=10;
    // int * ptr=&a;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    int array[]={1,2,3};
    int *ptr=&array[0];
    cout<<&array[0]<<endl;
    cout<<ptr<<endl;
    cout<<*ptr;
}