#include <iostream>
using namespace std;
bool binarysearch(int *arr,int size,int element)
{
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        int mid=i+(j-i)/2;
        {
            if(arr[mid]==element)
            {
                return true;
            }
            else if(arr[mid]<element)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<binarysearch(arr,5,8);
}