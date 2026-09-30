#include <iostream>
using namespace std;

// Problem: Given an integer array, return true if any value appears at least twice in the array.
// Example: [1, 2, 3, 1] -> Duplicate found
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool hasDuplicate = false;

    // Check each pair of elements to find duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = true;
                break;
            }
        }
        if (hasDuplicate) {
            break;
        }
    }

    if (hasDuplicate) {
        cout << "Duplicate value found in the array." << endl;
    } else {
        cout << "No duplicate value found (All elements are unique)." << endl;
    }

    return 0;
}
