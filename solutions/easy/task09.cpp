#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;

    int arr1[1000];
    int arr2[1000];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i]; // copy for second algorithm
    }

    // Measure Bubble Sort
    auto start1 = high_resolution_clock::now();
    bubbleSort(arr1, n);
    auto end1 = high_resolution_clock::now();

    // Measure Selection Sort
    auto start2 = high_resolution_clock::now();
    selectionSort(arr2, n);
    auto end2 = high_resolution_clock::now();

    auto duration1 = duration_cast<microseconds>(end1 - start1);
    auto duration2 = duration_cast<microseconds>(end2 - start2);

    // Print sorted result (from one of them)
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nBubble Sort time: " << duration1.count() << " microseconds\n";
    cout << "Selection Sort time: " << duration2.count() << " microseconds\n";

    return 0;
}
