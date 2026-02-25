#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void printPrimesSieve(int x)
{
    vector<bool> prime(x + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= x; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= x; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= x; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;

    if (isPrime(x))
        cout << x << " is prime " << endl;
    else
        cout << x << " is not prime " << endl;

    cout << "Primes up to " << x << ": ";
    printPrimesSieve(x);

    return 0;
}