#include <iostream>
using namespace std;
bool linearsearch(int *arr,int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        return true;
    }
    return false;
}
int main()
{
int array[]={1,2,3,5,7};
cout<<linearsearch(array,5,9);

}