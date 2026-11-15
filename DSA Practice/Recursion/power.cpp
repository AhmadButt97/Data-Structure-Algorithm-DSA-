#include<iostream>
using namespace std;
int power(int n)
{
    if(n==1)
    {
        return 2*n;
    }
    return 2*power(n-1);
}
int main()
{
    int n;
    cin>>n;
   cout<< power(n);
    return 0;
}