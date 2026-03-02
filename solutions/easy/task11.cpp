#include <iostream>
using namespace std;

double toCelsiusFromF(double f)
{
    return (f - 32) * 5.0 / 9.0;
}

double toCelsiusFromK(double k)
{
    return k - 273.15;
}

double toFahrenheitFromC(double c)
{
    return c * 9.0 / 5.0 + 32;
}

double toKelvinFromC (double c)
{
    return c + 273.15;
}

int main()
{
    double temperature;
    char unit;

    while (true)
    {
        cout << "\nEnter temperature and unit (c/f/k) or x to exit: ";
        cin >> temperature >> unit;

        if (unit == 'x')
            break;

        double c, f, k;

        if (unit == 'c')
        {
            c = temperature;
            f = toFahrenheitFromC(c);
            k = toKelvinFromC(c);
        }
        else if (unit == 'f')
        {
            c = toCelsiusFromF(temperature);
            f = temperature;
            k = toKelvinFromC(c);
        }
        else if (unit == 'k')
        {
            if (temperature < 0)
            {
                cout << "Invalid: Kelvin cannot be negative.\n";
                continue;
            }
        }
        cout << "Celsius: " << c << endl;
        cout << "Fahrenheit: " << f << endl;
        cout << "Kelvin: " << k << endl;
    }

    cout << "Program exited.\n";

    return 0;
}