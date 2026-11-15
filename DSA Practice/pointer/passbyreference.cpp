#include<iostream>
using namespace std;
void swap(int *x , int *y) 
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
 cout<<"x is "<<x<<" "<<"y is "<<y<<endl;
}
int main()
{
   int *p1,*p2;
   int x=10;
   p1=&x;
   int y=20;
   p2=&y;
   swap(p1,p2);
   cout<<x<<" "<<y;
}