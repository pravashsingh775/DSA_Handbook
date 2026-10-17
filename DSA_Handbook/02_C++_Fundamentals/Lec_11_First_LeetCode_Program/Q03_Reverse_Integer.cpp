# include <iostream>
using namespace std;
int main ()
{
    int num, rem;
    cout << "Enter a number: ";
    cin >> num;
    int reverse = 0;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            cout << "Overflow detected! Returning 0" << endl;
            return 0;
        }
        reverse = reverse * 10 + rem;
    }
    cout << "Reverse: " << reverse << endl;
    return 0;
}