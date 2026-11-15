#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try{
    int *array=new int [100000000000000];
    cout<<"memeoy is allocated successfully"<<endl;
    delete []array;
    }
    catch(const exception &e)   //the type of error is exception so exception is a predefine class
    {
        cout<<"exception occured : "<<e.what()<<endl; //e.what() is tell what was the exception
    }

}