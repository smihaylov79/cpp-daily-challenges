#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    string result;
    cout << "Write a word: " << endl;
    cin >> text;

    for (long i = text.length()-1; i >= 0; i--)
    {
        result += text[i];
    }

    cout << "The result is: " << result << endl;
    return 0;
}