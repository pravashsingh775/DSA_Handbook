#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int binary = 0;
    int mul = 1;
    int remainder;
    while (num > 0)
    {
        remainder = num % 2;
        num /= 2;
        binary = binary + remainder * mul;
        mul *= 10;
    }
    cout << binary << endl;
    return 0;
}
