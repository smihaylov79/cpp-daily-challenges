#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;

    std::cout << "Enter filename: ";
    std::cin >> filename;

    std::ifstream file(filename);

    // Check if file opened successfully
    if (!file.is_open()) {
        std::cout << "Error: File not found or could not be opened.\n";
        return 1; // Exit program with error
    }

    std::string line;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    // Read file line by line
    while (std::getline(file, line)) {
        std::cout << line << std::endl; // Print line

        lineCount++;
        charCount += line.length(); // Count characters (without newline)

        // Count words
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();

    std::cout << "\n--- Statistics ---\n";
    std::cout << "Lines: " << lineCount << std::endl;
    std::cout << "Words: " << wordCount << std::endl;
    std::cout << "Characters: " << charCount << std::endl;

    return 0;
}