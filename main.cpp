#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
	     << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';

    if (a < b) {
        cout << "The smallest digit A = " << a;
    }
    else {
        cout << "The smallest digit B = " << b;
    }

    if (a > b) {
        cout << "The biggest digit À = " << a;
    }
    else {
        cout << "The biggest digit B = " << b;
    }

    return 0;
}