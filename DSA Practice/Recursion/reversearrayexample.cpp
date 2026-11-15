#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[n-1-i]<<" ";
        
    }
}
int main()
{
    int array[]={1,2,3,4,5};
    reverse(array , 5);
}