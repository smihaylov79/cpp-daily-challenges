#include <iostream>
#include <limits>

using namespace std;

unsigned long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    unsigned long long temp = factorial_recursive(n - 1);

    if (temp == 0)
        return 0;

    if (temp > numeric_limits<unsigned long long>::max() / n)
    {
        cout << "\n⚠ Overflow detected! The result is too large for unsigned long long.\n";
        return 0;
    }

    return n * temp;
}

int main()
{
    cout << "=============================\n";
    cout << "      Factorial Calculator\n";
    cout << "=============================\n\n";

    cout << "Enter a non-negative integer (0 or greater): ";

    int n;

    if (!(cin >> n))
    {
        cout << "\n❌ Invalid input! Please enter a whole number.\n";
        return 0;
    }

    if (n < 0)
    {
        cout << "\n❌ Factorial is not defined for negative numbers.\n";
        return 0;
    }

    if (n > 20)
    {
        cout << "\n⚠ Warning: Values greater than 20 will cause overflow for unsigned long long.\n";
    }

    unsigned long long result = factorial_recursive(n);

    if (result != 0)
    {
        cout << "\n✅ " << n << "! = " << result << endl;
    }

    cout << "\nProgram finished successfully.\n";
    return 0;
}