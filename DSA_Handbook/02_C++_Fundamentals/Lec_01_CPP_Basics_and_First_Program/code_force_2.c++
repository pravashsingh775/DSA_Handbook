#include <iostream>
#include <vector>
using namespace std;

// Codeforces 1352A - Sum of Round Numbers
// A positive integer is 'round' if it has only one non-zero digit (e.g., 4000, 800, 90, 7).
// Goal: Represent n as the sum of round numbers using the minimum number of terms.
int main() {
    int testCases;
    cout << "Enter number of test cases: ";
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> roundNumbers;
        int placeValue = 1; // 1, 10, 100, 1000, etc.

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * placeValue);
            }
            n /= 10;
            placeValue *= 10;
        }

        // Print number of round summands
        cout << roundNumbers.size() << endl;

        // Print each round number
        for (int i = 0; i < (int)roundNumbers.size(); i++) {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}