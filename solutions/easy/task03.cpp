#include <iostream>
using namespace std;

bool isEven(int x)
{
    return x % 2 == 0;
}

bool isPrime (int x)
{
    if (x <= 1)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int x;
    if (!(cin >> x))
    {
        cout << "Invalid input";
        return 0;
    }

    if (isEven(x))
        cout << "even";
    else
        cout << "odd";

    cout << ", ";

    if (isPrime(x))
        cout << "prime";
    else
        cout << "not prime";

    return 0;
}
