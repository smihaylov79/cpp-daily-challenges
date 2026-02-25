#include <iostream>
using namespace std;

long long fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;

    if (n > 92)
    {
        cout << "Overflow risk!" << endl;
    }
    else
    {
        cout << fibonacci(n);
    }
    return 0;
}

