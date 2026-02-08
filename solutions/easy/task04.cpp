#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;
    double result;

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter Opration: " << endl;
    cin >> op;
    cout << "Enter second number: " << endl;
    cin >> b;

    switch (op)
    {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b == 0)
                cout << "Divisons by zero";
            else
                result = a / b;
            break;

        case '%':
            result = fmod(a, b);
            break;

        case '^':
            result = pow(a, b);
            break;

        default:
            cout << "Invalid operator";
    }

    cout << "The Result of: " << a << op << b << " = " << result << endl;
    return 0;
}