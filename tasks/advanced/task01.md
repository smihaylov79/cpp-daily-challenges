Task 11 — Dynamic Array & Statistics

Write a program that:
Reads an integer n
Dynamically allocates an array of n integers (using new)
Reads the numbers into the array
Computes:
Minimum
Maximum
Average
Standard deviation
Requirements
Use dynamic memory (new / delete[])
Implement functions:
int findMin(int* arr, int n)
int findMax(int* arr, int n)
double average(int* arr, int n)
double stddev(int* arr, int n)
No global variables
Bonus
Replace raw pointers with std::vector<int>
Add input validation

Task 12 — Matrix Multiplication

Write a program that:
Reads dimensions of two matrices
Reads the matrix values
Multiplies them (if possible)
Prints the resulting matrix
Requirements
Use dynamic 2D arrays (pointer-to-pointer)
Implement a function:
int** multiply(int** A, int** B, int rowsA, int colsA, int colsB)
Handle incompatible dimensions gracefully
Bonus
Use std::vector<std::vector<int>> instead of raw pointers
Add a function to pretty‑print matrices
Add random matrix generation for testing

Task 13 — Simple Student Database (Structs + Sorting)

Create a small student database program.
Each student has:
name (string)
age (int)
grade (double)
The program must:
Read n students
Store them in a std::vector<Student>
Sort them by:
Grade (descending)
If equal grade → name (alphabetically)
Print the sorted list
Requirements
Define a struct:
cpp
struct Student {
std::string name;
int age;
double grade;
};
Implement a custom comparator for sorting
No global variables
Bonus
Add search by name
Add average grade calculation
Save the sorted list to a file