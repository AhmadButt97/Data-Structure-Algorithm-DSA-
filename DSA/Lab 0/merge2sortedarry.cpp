#include <iostream>
using namespace std;
void merge(int array[],int n,int array2[],int m,int array3[])
{
    int i=0; int j=0;
    int k=0;
    while (i< n && j< m)
    {
        if(array[i]<array2[j])
        {
            array3[k]=array[i];
            k++;
            i++;
        }
        else
        {
            array3[k]=array2[j];
            k++;
            j++;
        }
    }
        while(i<n)
        {
            array3[k]=array[i];
            k++;
            i++;
        }
        while(j<m)
        {
            array3[k]=array2[j];
            k++;
            j++;
        }
}
void print(int array3[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array3[i]<<"  ";
    }
}

int main() {
    int arr1[] = {1, 3, 6, 8};
    int arr2[]={2,4,5,7};
    int arr3[8]={0};
    merge(arr1,4,arr2,4,arr3);
    print(arr3,8);
    return 0;
}