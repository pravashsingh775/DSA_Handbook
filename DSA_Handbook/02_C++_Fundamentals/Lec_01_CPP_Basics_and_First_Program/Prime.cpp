#include <iostream>
using namespace std;

// Problem: Check if a given number is Prime or Not Prime
int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;

    // Check divisibility from 2 up to n - 1
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is Not a prime number." << endl;
    }

    return 0;
}