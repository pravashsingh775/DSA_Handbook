#include <iostream>
using namespace std;

int main() {
    // Demonstration of fundamental data types in C++
    int a = 10;                     // Integer (Whole number)
    float b = 20.5f;                // Floating point (Decimal number)
    double c = 30.123456789;        // Double precision float
    char d = 'A';                   // Single character
    bool e = true;                  // Boolean (true = 1, false = 0)

    cout << "Integer value: " << a << " (Size: " << sizeof(a) << " bytes)" << endl;
    cout << "Float value: " << b << " (Size: " << sizeof(b) << " bytes)" << endl;
    cout << "Double value: " << c << " (Size: " << sizeof(c) << " bytes)" << endl;
    cout << "Character value: " << d << " (Size: " << sizeof(d) << " byte)" << endl;
    cout << "Boolean value: " << e << " (Size: " << sizeof(e) << " byte)" << endl;

    return 0;
}