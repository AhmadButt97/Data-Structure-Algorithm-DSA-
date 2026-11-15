#include <iostream>
using namespace std;

int main()
{

    // nesting of try/catch
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially "<<n << endl;
            throw ; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining " << n << endl;
    }
    return 0;
}