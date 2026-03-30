#include <iostream>
using namespace std;

bool isEven(int x)
{
    return x % 2 == 0;
}

int main ()
{
    int x;
    if (!(cin >> x))
    {
        cout << "Invalid input";
        return 0;
    }

    if (isEven(x))
        cout << "Even";
    else
        cout << "Odd";

    cout << ", ";

    return 0;
}