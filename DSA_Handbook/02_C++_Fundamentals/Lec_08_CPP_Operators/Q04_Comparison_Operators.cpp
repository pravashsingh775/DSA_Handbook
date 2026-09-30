// comparison operators
#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // precedence and associativity
    cout << "a == b && a > b: " << (a == b && a > b) << endl;
}