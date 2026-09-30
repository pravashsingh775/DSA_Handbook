#include <iostream>
using namespace std;

// Problem: Reverse a given integer (e.g. 1234 -> 4321)
int main() {
    int n;
    cout << "Enter a number to reverse: ";
    cin >> n;

    int reversedNumber = 0;
    int temp = n;

    while (temp != 0) {
        int lastDigit = temp % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
        temp /= 10;
    }

    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}