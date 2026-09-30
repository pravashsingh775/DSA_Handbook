#include <iostream>
using namespace std;

// Problem: Move all 0's to the end of the array while maintaining the relative order of non-zero elements.
// Example: Input: [0, 1, 0, 3, 12] -> Output: [1, 3, 12, 0, 0]
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Two-pointer approach: place every non-zero element at the next available position
    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
