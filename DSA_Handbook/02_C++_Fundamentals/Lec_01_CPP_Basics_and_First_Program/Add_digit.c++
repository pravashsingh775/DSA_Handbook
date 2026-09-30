#include <iostream>
#include <cmath>
using namespace std;

// Problem: Calculate the sum of all digits of a given integer
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int originalNumber = n;
    int sum = 0;
    int temp = abs(n); // Handle negative inputs safely

    while (temp > 0) {
        int lastDigit = temp % 10; // Extract the last digit
        sum += lastDigit;          // Add to running sum
        temp /= 10;                // Remove the last digit
    }

    cout << "Sum of digits of " << originalNumber << " is: " << sum << endl;
    return 0;
}