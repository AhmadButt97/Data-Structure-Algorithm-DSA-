#include <iostream>
#include <queue>
using namespace std;
void selectionsort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
    int minindex=i;
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]<arr[minindex])
        {
            minindex=j;
        }
    }
    swap(arr[minindex],arr[i]);
    }
}
int main()
{
    int arr[]={3,2,1,8};
    selectionsort(arr,4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
}

