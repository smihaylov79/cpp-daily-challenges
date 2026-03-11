#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>

using namespace std;

double computeMin(const vector<double>& v);
double computeMax(const vector<double>& v);
double computeAverage(const vector<double>& v);
double computeMedian(vector<double> v);
double computeStandardDeviation(const vector<double>& v);
double computeSum(const vector<double>& v);

int main() {
    vector<double> numbers;
    int n;

    cout << "===== Statistics Calculator =====\n";
    cout << "How many numbers would you like to enter? ";

    // Validate n
    while (!(cin >> n) || n <= 0) {
        cout << "Please enter a valid positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nNow enter " << n << " numbers.\n";

    for (int i = 0; i < n; i++) {
        double value;
        cout << "Enter number " << i + 1 << ": ";

        while (!(cin >> value)) {
            cout << "Invalid input. Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        numbers.push_back(value);
    }

    cout << "\n===== Results =====\n";
    cout << "Minimum: " << computeMin(numbers) << endl;
    cout << "Maximum: " << computeMax(numbers) << endl;
    cout << "Average: " << computeAverage(numbers) << endl;
    cout << "Median: " << computeMedian(numbers) << endl;
    cout << "Standard Deviation: " << computeStandardDeviation(numbers) << endl;
    cout << "Sum: " << computeSum(numbers) << endl;

    return 0;
}

double computeMin(const vector<double>& v) {
    double minValue = v[0];
    for (size_t i = 1; i < v.size(); i++)
        if (v[i] < minValue)
            minValue = v[i];
    return minValue;
}

double computeMax(const vector<double>& v) {
    double maxValue = v[0];
    for (size_t i = 1; i < v.size(); i++)
        if (v[i] > maxValue)
            maxValue = v[i];
    return maxValue;
}

double computeAverage(const vector<double>& v) {
    double sum = 0.0;
    for (double value : v)
        sum += value;
    return sum / v.size();
}

double computeMedian(vector<double> v) {
    sort(v.begin(), v.end());
    size_t n = v.size();
    if (n % 2 == 1)
        return v[n / 2];
    else
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
}

double computeStandardDeviation(const vector<double>& v) {
    double mean = computeAverage(v);
    double sum = 0.0;
    for (double value : v)
        sum += pow(value - mean, 2);
    return sqrt(sum / v.size());
}

double computeSum(const vector<double>& v)
{
    double sum = 0.0;
    for (double value : v)
        sum += value;
    return sum;
}