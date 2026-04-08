#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i == 1)
        {
            cout << "1\n";
        }
        else if (i == 2)
        {
            cout << "2\n";
        }
        else if (i == 3)
        {
            cout << "3\n";
        }
        else if (i == 4)
        {
            cout << "4\n";
        }
        else if (i == 5)
        {
            cout << "5\n";
        }
        else if (i == 6)
        {
            cout << "6\n";
        }
        else if (i == 7)
        {
            cout << "7\n";
        }
        else if (i == 8)
        {
            cout << "8\n";
        }
        else if (i == 9)
        {
            cout << "9\n";
        }
        else if (i % 2 == 0)
        {
            cout << "even\n";
        }
        else if (i % 2 != 0)
        {
            cout << "odd\n";
        }
    }
    return 0;

}