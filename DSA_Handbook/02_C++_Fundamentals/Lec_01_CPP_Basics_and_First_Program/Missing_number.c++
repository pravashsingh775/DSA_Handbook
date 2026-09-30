#include <iostream>
using namespace std;

// Problem: Given an array containing n distinct numbers in the range [0, n],
// return the only number in the range that is missing from the array.
// Example: Array = [3, 0, 1] (n=3) -> Missing number is 2.
int main() {
    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " distinct elements from range [0, " << n << "]: ";
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    // Expected sum of numbers from 0 to n is: n * (n + 1) / 2
    int expectedSum = (n * (n + 1)) / 2;
    int missingNumber = expectedSum - actualSum;

    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}