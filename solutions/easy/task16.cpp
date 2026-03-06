#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
    string text;

    cout << "====================================\n";
    cout << "      Sentence Analyzer Program\n";
    cout << "====================================\n\n";

    cout << "Please type a sentence and press ENTER.\n";
    cout << "Example: The quick brown fox jumps over the lazy dog\n\n";

    cout << "Your sentence: ";
    getline(cin, text);

    int words = 0;
    int characters = 0;
    bool inWord = false;

    // Count words and characters
    for (char c : text)
    {
        if (c != ' ')
            characters++;

        if (c != ' ' && !inWord)
        {
            words++;
            inWord = true;
        }

        if (c == ' ')
            inWord = false;
    }

    // Convert text to lowercase (for case-insensitive comparison)
    string lowerText = text;

    for (char &c : lowerText)
    {
        c = tolower(c);
    }

    // Extract unique words
    set<string> uniqueWords;
    stringstream ss(lowerText);
    string word;

    while (ss >> word)
    {
        uniqueWords.insert(word);
    }

    cout << "\n====================================\n";
    cout << "            Results\n";
    cout << "====================================\n";

    cout << "\nTotal words: " << words << endl;
    cout << "Characters (excluding spaces): " << characters << endl;

    cout << "\nUnique words (case-insensitive):\n";
    cout << "------------------------------------\n";

    for (const string &w : uniqueWords)
    {
        cout << "- " << w << endl;
    }

    cout << "\nProgram finished.\n";

    return 0;
}