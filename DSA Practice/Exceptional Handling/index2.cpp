#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

    // try block
    try {
        int numerator = 10;
        int denominator = 0;
        int res;
        if (denominator==0)
        throw runtime_error("divisionn not possible");
        // calculate result if no exception occurs
        res = numerator / denominator;
        // printing result after division
        cout << "Result after division: " << res << endl;
    }
    // catch block to catch the thrown exception
    catch (const exception& e) {
        // print the exception
        cout << "Exception " << e.what() << endl;
    }
    catch(...) //it is a default catch block
    {
    	cout<<"Hello"<<endl;
	}

    return 0;
}