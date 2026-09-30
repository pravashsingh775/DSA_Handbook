#include <iostream>
#include <climits>
using namespace std;

// Problem: Array operations - Traversal, Finding Maximum, Minimum, and Second Largest element
int main() {
    int arr[] = {10, 45, 23, 89, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 1. Finding Maximum and Minimum elements
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    // 2. Finding Second Largest element
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > secondLargest && arr[i] < maxVal) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != INT_MIN) {
        cout << "Second Largest element: " << secondLargest << endl;
    } else {
        cout << "No second largest element exists." << endl;
    }

    return 0;
}
