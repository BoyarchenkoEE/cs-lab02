#include <iostream>
using namespace std;
main() //
{
cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
int max=a;
if (a<b)
    b=max;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "MAX = " << max << '\n';
}
