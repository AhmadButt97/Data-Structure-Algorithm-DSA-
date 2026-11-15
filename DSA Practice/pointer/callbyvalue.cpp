#include<iostream>
using namespace std;
void swap(int x , int y) //these are the copies not original variables
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<"x is "<<x<<" "<<"y is "<<y<<endl;
}
int main()
{
 int x=10;
 int y=20;
 swap(x,y);
 cout<<x<<" "<<y;
}