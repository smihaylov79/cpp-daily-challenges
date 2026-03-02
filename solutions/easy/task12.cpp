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
            cout << "Overflow detected!" << endl;
            return 0;
        }

        result += i;
    }

    return result;
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

    unsigned long long result = factorial_iterative(n);
    if (result != 0)
        cout << result << endl;

    return 0;
}