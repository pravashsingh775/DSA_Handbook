#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a octal number: ";
    cin >> num;
    int  Binary = 0;
    int base = 1;
    int remainder;
    while (num > 0)
    {
        remainder = num % 2;
        num = num / 2;
        Binary = Binary + remainder * base;
        base = base * 8;
    }
    cout << Binary << endl;
    
}