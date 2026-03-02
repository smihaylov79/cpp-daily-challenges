#include <iostream>
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
        cout << "Overflow detected!" << endl;
        return 0;
    }

    return n * temp;
}

int main()
{
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    unsigned long long result = factorial_recursive(n);

    if (result != 0)
        cout << result << endl;
    return 0;
}