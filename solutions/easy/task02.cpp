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
    cout << "Test 1: " << max3(1, 2, 3) << " (expected 3)" << endl;
    cout << "Test 2: " << max3(5, 5, 2) << " (expected 5)" << endl;
    cout << "Test 3: " << max3(-1, -2, -3) << " (expected -1)" << endl;

    long long a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    long long result = max3(a, b, c);
    cout << "Largest number is: " << result << endl;

    return 0;
}