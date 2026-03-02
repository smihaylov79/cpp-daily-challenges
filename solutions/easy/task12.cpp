#include <iostream>
#include <limits>

using namespace std;

unsigned long long factorial_iterative(int n)
{
    if (n == 0 || n == 1)
        return 1;

    unsigned long long result = 1;

    for (int i = 2; i <= n; i++)
    {
        if (result > numeric_limits<unsigned long long>::max() / i)
        {
            cout << "\n⚠ Overflow detected! The result is too large for unsigned long long.\n";
            return 0;
        }

        result *= i;  // Corrected: multiplication
    }

    return result;
}

int main()
{
    cout << "=============================\n";
    cout << "   Iterative Factorial Tool\n";
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

    unsigned long long result = factorial_iterative(n);

    if (result != 0)
    {
        cout << "\n✅ " << n << "! = " << result << endl;
    }

    cout << "\nProgram finished successfully.\n";
    return 0;
}