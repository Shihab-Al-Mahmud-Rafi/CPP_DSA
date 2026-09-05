#include <iostream>
#include <algorithm>//modern way to ascending an array
using namespace std;

int main() {
    int arr[] = {45, 12, 78, 4, 89, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); 

    // The array is now: 4 12 32 45 78 89
    return 0;
}