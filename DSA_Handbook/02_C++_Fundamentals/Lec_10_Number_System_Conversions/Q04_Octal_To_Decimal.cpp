#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a octal number: ";
    cin >> num;
    int decimal = 0;
    int base = 1;
    int remainder;
    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;
        decimal = decimal + remainder * base;
        base = base * 8;
    }
    cout << decimal << endl;
    
}