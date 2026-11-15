#include<iostream>
using namespace std;
void reachhome(int scr,int dest)
{
    cout<<"steps "<<scr<<" destination "<<dest<<endl;
    if(scr==dest)
    {
        cout<<"Reached at home"<<endl;
        return ;
    }
    else
    {
        scr++;
        return reachhome(scr,dest);
    }
}
int main()
{
    reachhome(0,10);
}