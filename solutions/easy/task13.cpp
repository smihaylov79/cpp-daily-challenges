#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string& text)
{
    int left = 0;
    int right = text.length() - 1;

    while (left <= right)
    {
        while (left < right && !isalnum((unsigned char)text[left]))
            left++;

        while (left < right && !isalnum((unsigned char)text[right]))
            right--;

        if (tolower((unsigned char)text[left]) !=
            tolower((unsigned char)text[right]))
            return false;

        left++;
        right--;
    }
    return true;
}

int main()
{
    string input;
    getline(cin, input);

    if (isPalindrome(input))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
    return 0;
}