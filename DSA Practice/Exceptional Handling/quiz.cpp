#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            cout << "A" << endl;
            throw 'A';
            cout << "B" << endl;
        }
        catch (char x)
        {
            cout << "C: " << x << endl;
            throw;
            cout << "D: " << x << endl;
        }
    }
    catch (int x)
    {
        cout << "E :" << x << endl;
    }
    catch (char x)
    {
        cout << "F :" << x << endl;
        int i = 5 / 0;
        cout << "G :" << x << endl;
    }
    catch (...)
    {
        cout << "H" << endl;
    }
    cout << "I" << endl;
    return 0;
}