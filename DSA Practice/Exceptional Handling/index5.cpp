#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    // if(b==0)
    // {
    //     cout<<"divided by zero is not possible";
    //     return 0;
    // }
    try{
        if (b==0)
        throw "divided by zero is not possible";
        int c=a/b;  //i know this line can give us an error so enter this in try block
        cout<<"c is "<<c<<endl;
    }
    catch(const char *e)//as throw is character type so pointer will be also a char type
    {
        cout<<"Exception occured :"<<e<<endl;
    }
}