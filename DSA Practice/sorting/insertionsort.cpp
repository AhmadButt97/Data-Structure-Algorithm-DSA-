#include <iostream>
using namespace std;
void insertion(int *arr,int size)
{
    for(int i=1;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
         if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        } 
         else
            {
                break;
            }
        }
    }
}
int main()
{
    int arr[]={3,2,1,8};
    insertion(arr,4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
}