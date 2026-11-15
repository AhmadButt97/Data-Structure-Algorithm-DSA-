#include <iostream>
using namespace std;
void print(int n)
{
    if(n>0)
    {
    print(n-1);
    cout<< n<<" ";
    }
    return ;
// if(n>0)
// {
//     cout<<n<<" ";
//     print(n-1);
// }
// return ;
}
int main()
{
    print(5);
}