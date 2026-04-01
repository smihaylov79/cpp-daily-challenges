#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int result;

    cout << "Enter The first number: ";
    cin >> a;

    cout << "Enter The second number: ";
    cin >> b;

    cout << "Enter The third number: ";
    cin >> c;

    result = a + b + c;
    cout << a << " + " << b << " + " << c << " = " << result << endl;

    return 0;
}