#include <iostream>
#include <string>
using namespace std;

void printArray(const string& label, int* arr, int size) {
    cout << label << ": ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int* filterEvens(int* arr, int size, int& evenCount) {
    evenCount = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) evenCount++;
    }

    int* evens = new int[evenCount];
    int idx = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evens[idx++] = arr[i];
        }
    }
    return evens;
}

int main() {
    int n = 5;
    int* original = new int[n]{12, 7, 9, 20, 15};

    int evenCount = 0;
    int* evens = filterEvens(original, n, evenCount);

    printArray("Original", original, n);
    printArray("Evens", evens, evenCount);

    delete[] original;
    delete[] evens;
    return 0;
}