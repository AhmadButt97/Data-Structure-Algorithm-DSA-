#include <iostream>
using namespace std;
bool sort(int *arr,int size)
{
    int j=1;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]<arr[j])
        {
            j++;
        }
        else
        {
            return false ;
        }
    }
        return true ;
}
int main()
{
    int array[]={5,4,1,8};
    cout<< sort(array,5);
    cout<< sort(array,5);
}