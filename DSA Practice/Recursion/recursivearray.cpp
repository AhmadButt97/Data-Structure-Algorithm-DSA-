#include<iostream>
using namespace std;
int Maxx(int array[],int s,int &m,int a=0)
{
    if(a>=s)
    {
        return 0;
    }
    if(array[a]>m)
    {
        m=array[a];
    }
    Maxx(array,s,m,a+1);
    return m;
}
void findmax(int arr[],int size)
{
   int max=0;
   Maxx(arr, size, max);
   cout<<"maximum nuumber is "<<max;
}
int findmini(int arr[],int s,int n=0)
{
    if(n>s-1)
    {
        return 0;
    }
    return min(arr[n],findmini(arr,s,n+1));

}

int main()
{
    int n[]={1,2,3,-5,7};
    findmax(n,5);
    cout<<endl;
    cout<<findmini(n,5);
    return 0;
}