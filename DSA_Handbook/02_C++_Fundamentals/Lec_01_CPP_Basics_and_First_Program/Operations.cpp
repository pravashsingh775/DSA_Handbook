#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Basic arithmetic operations
    cout << "Addition (a + b)       = " << a + b << endl;
    cout << "Subtraction (a - b)    = " << a - b << endl;
    cout << "Multiplication (a * b) = " << a * b << endl;
    
    if (b != 0) {
        cout << "Division (a / b)       = " << a / b << endl;
        cout << "Remainder (a % b)      = " << a % b << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
