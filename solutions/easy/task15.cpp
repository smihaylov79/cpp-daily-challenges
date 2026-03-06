#include <iostream>
#include <random>

using namespace std;

int main()
{
    // Random number setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    int secret = dist(gen);   // number the user must guess
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it." << endl << endl;

    while (guess != secret)
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (guess < secret)
        {
            cout << "Too low. Try a higher number." << endl;
        }
        else if (guess > secret)
        {
            cout << "Too high. Try a lower number." << endl;
        }
    }

    cout << endl;
    cout << "Correct! You guessed the number." << endl;
    cout << "Total attempts: " << attempts << endl;

    return 0;
}