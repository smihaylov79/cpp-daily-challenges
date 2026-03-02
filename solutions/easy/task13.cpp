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
    cout << "=============================\n";
    cout << "     Palindrome Checker\n";
    cout << "=============================\n\n";

    cout << "Please enter a word or sentence.\n";
    cout << "Note: Spaces and punctuation will be ignored.\n";
    cout << "Input: ";

    string input;
    getline(cin, input);

    if (input.empty())
    {
        cout << "\nYou did not enter anything. Please try again.\n";
        return 0;
    }

    cout << "\nChecking...\n\n";

    if (isPalindrome(input))
        cout << "Result: \"" << input << "\" is a Palindrome.\n";
    else
        cout << "Result: \"" << input << "\" is NOT a Palindrome.\n";

    return 0;
}