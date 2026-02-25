1) Temperature Converter 🌡️
Write a program that:
Reads a temperature
Reads a unit (C or F)
Converts between Celsius and Fahrenheit
Requirements
Use functions:
double toCelsius(double f)  
double toFahrenheit(double c)
Validate unit input
Bonus
Support Kelvin
Loop until user chooses to exit

2) Factorial Calculator
Write a program that:
Reads an integer n
Computes n! (factorial)
Requirements
Implement both iterative and recursive versions
Handle n = 0 and n = 1
Bonus
Detect overflow
Use unsigned long long

3) Palindrome Checker 🔁
Write a program that:
Reads a string
Checks if it is a palindrome
Requirements
Ignore case
Ignore spaces
Bonus
Ignore punctuation
Support Unicode (optional)

4) Basic Statistics
Write a program that:
Reads n numbers
Computes:
Minimum
Maximum
Average
Requirements
Use a vector
Use functions for each statistic
Bonus
Compute median
Compute standard deviation

5) Guess the Number Game 🎲
Write a program that:
Generates a random number 1–100
Lets the user guess until correct
Requirements
Use rand() or <random>
Tell user “higher” or “lower”
Bonus
Count attempts
Add difficulty levels

6) Word Counter
Write a program that:
Reads a full sentence
Counts:
Words
Characters (excluding spaces)
Requirements
Use string processing
Handle multiple spaces
Bonus
Count unique words
Case-insensitive

7) Matrix Addition ➕
Write a program that:
Reads two 2×2 matrices
Computes their sum
Requirements
Use 2D arrays
Use a function addMatrices(a, b, result)
Bonus
Support NxN matrices
Dynamically allocate memory

8) Simple Password Validator 🔐
Write a program that:
Reads a password
Checks if it is valid
Requirements
At least 8 characters
Contains letters and digits
Bonus
Require uppercase + lowercase
Require special characters
Show which rule failed

9) Remove Duplicates from Array
Write a program that:
Reads n integers
Removes duplicates
Prints the unique values
Requirements
Use a vector
Do NOT use std::set
Bonus
Preserve original order
Implement your own “contains” function

10) Mini Address Book 📒
Write a program that:
Stores contacts (name + phone)
Allows:
Add contact
List contacts
Search by name
Requirements
Use a struct:
cpp
struct Contact { string name; string phone; };
Use a vector
Bonus
Delete contact
Save to file
Load from file