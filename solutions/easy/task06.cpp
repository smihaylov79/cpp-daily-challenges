#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    string vowels = "aeiou";
    return count(vowels.begin(), vowels.end(), c) > 0;
}

int countVowels(string text)
{
    int total = 0;

    for (char c : text)
    {
        if (isalpha(c) && isVowel(c))
        total++;
    }

    return total;
}

int countConstants(string text)
{
    int total = 0;
    for (char c : text)
    {
        c = tolower(c);
        if (isalpha(c) && isVowel(c))
            total++;
    }
    return total;
}


int main()
{
    string word;
    cin >> word;

    int vowels = countVowels(word);
    int consonants = countConstants(word);
    int letters = vowels + consonants;

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    if (letters > 0)
    {
        cout << "Vowels percentage:"
        << (vowels * 100.0 / letters) << "%" << endl;

        cout << "Consonants percentage:"
        << (consonants * 100.0 / letters) << "%" << endl;
    }

    return 0;
}
