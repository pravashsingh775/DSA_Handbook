#include <iostream>
using namespace std;

// Problem: Check if a number is a Composite Number
// A composite number is an integer > 1 that has more than 2 factors (not prime).
int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither Prime nor Composite." << endl;
        return 0;
    }

    int factorCount = 0;

    // Count all factors from 1 to n
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factorCount++;
        }
    }

    // A composite number has more than 2 factors (1, itself, and at least one other divisor)
    if (factorCount > 2) {
        cout << n << " is a Composite number." << endl;
    } else {
        cout << n << " is Not a composite number (It is Prime)." << endl;
    }

    return 0;
}
