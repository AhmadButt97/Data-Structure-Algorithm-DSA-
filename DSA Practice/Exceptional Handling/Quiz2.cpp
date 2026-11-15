#include <iostream>
using namespace std;
int main()
{
char c = 'a';
cout << "A" << endl;
try {
cout << "B"<< endl;
if (c > 0) {
throw c;
cout << "C" << endl;
}
}
catch (char c) {
cout << "D" <<endl;
}
cout << "E" << endl;
return 0;
}