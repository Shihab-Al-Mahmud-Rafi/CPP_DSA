#include <iostream>
#include <utility> // Required for std::pair
using namespace std;

// This function returns a pair: the first item is a bool, the second is an int
pair<bool, int> linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return {true, i}; // Found: returns true and the index 'i'
        }
    }
    return {false, -1}; // Not found: returns false and an invalid index
}

int main() {
    int size, key;
    cout << "Enter array size: ";
    cin >> size;
    
    int num[1000]; // Fixed safe allocation size
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    
    cout << "Enter the element to search for: ";
    cin >> key;
    
    // Call the function and catch the pair result
    pair<bool, int> result = linearSearch(num, size, key);
    
    // Check the bool part (.first) and access the index part (.second)
    if (result.first) {
        cout << "Element is here! Found at index: " << result.second << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}
