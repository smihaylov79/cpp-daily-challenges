#include <iostream>
#include <sstream>
#include <limits>
#include <cctype>
#include <iomanip>
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

double toKelvinFromC(double c)
{
    return c + 273.15;
}

int main()
{
    cout << "=====================================\n";
    cout << "     Temperature Converter Program   \n";
    cout << "=====================================\n";
    cout << "Example input: 25 c\n";
    cout << "Type x to exit.\n";

    while (true)
    {
        cout << "\nEnter temperature and unit: ";

        string input;
        getline(cin, input);

        if (input == "x" || input == "X")
            break;

        stringstream ss(input);
        double temperature;
        char unit;

        if (!(ss >> temperature >> unit))
        {
            cout << "Invalid input. Please enter like: 25 c\n";
            continue;
        }

        unit = tolower(unit);

        double c = 0, f = 0, k = 0;

        if (unit == 'c')
        {
            c = temperature;
            f = toFahrenheitFromC(c);
            k = toKelvinFromC(c);
        }
        else if (unit == 'f')
        {
            f = temperature;
            c = toCelsiusFromF(f);
            k = toKelvinFromC(c);
        }
        else if (unit == 'k')
        {
            if (temperature < 0)
            {
                cout << "Invalid: Kelvin cannot be negative.\n";
                continue;
            }

            k = temperature;
            c = toCelsiusFromK(k);
            f = toFahrenheitFromC(c);
        }
        else
        {
            cout << "Unknown unit. Use c, f, or k.\n";
            continue;
        }

        cout << fixed << setprecision(2);
        cout << "\nConverted Temperatures:\n";
        cout << "Celsius:    " << c << " °C\n";
        cout << "Fahrenheit: " << f << " °F\n";
        cout << "Kelvin:     " << k << " K\n";
    }

    cout << "\nProgram exited safely.\n";
    return 0;
}