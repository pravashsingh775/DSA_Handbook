#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Not a Palindrome (Negative number)" << endl;
        return 0;
    }

    int original = num;
    int reverse = 0;
    int rem;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        // Check for 32-bit overflow before multiplying
        if (reverse > INT_MAX / 10)
        {
            cout << "Not a Palindrome (Overflow)" << endl;
            return 0;
        }
        reverse = reverse * 10 + rem;
    }

    if (original == reverse)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;
    }

    return 0;
}
