#include <iostream>
using namespace std;
bool linearsearch(int *arr,int size,int element,int j=0)
{
    if(j==size)
    {
        return false;
    }
    if(arr[j]==element)
    {
        return true;
    }
    return linearsearch(arr, size, element, j+1 );
}
int main()
{
int array[]={1,2,3,5,7};
cout<<linearsearch(array,5,9);

}