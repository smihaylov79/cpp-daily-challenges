#include <iostream>
using namespace std;

long long max3(long long a, long long b, long long c)
{
    long long max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    long long a, b, c;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;

    long long result = max3(a, b, c);
    cout << "the largest number of all three numbers is: " << result << endl;

    cout << "Test1: " << max3 (1, 2, 3) << " (expected 3)" << endl;
    cout << "Test2: " << max3 (5, 5, 2) << " (expected 5)" << endl;
    cout << "Test3: " << max3 (-1, -2, -3) << " (expected -1)" << endl;

    return 0;
}