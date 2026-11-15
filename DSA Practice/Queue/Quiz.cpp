#include<iostream>
#include<queue> //libraries is always in small letters
using namespace std;
void Timecomplexity(int n)
{
    for(int i=0;i<n;i++)
    {
        int k=n;
        while(k>0)
        {
            cout<<"Hello word "<<endl;
            k-=n;
        }
        k=n*n;
    }
    cout<<"BSCS Morning ";
}
int main()
{
    Timecomplexity(5);
}