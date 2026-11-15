#include<iostream>
using namespace std;
int main()
{
    int ans=1;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        ans=ans*i;
    }
    cout<<ans;
}
