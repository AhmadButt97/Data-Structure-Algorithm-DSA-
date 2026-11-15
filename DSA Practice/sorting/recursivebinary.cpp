#include <iostream>
using namespace std;
bool binarysearch(int *arr,int size,int element,int i=0,int j=0)
{
    j=size-1;
    if(i>j)
    {
        return false;
    }
    int mid=i+(j-i)/2;
    if(arr[mid]==element)
    {
        return true;
    }
    else if(arr[mid]<element)
    {
        return binarysearch(arr,size,element,mid+1,j);
    }
    else
    {
        return binarysearch(arr,size,element,i,mid-1);
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<binarysearch(arr,5,4)<<endl;
}