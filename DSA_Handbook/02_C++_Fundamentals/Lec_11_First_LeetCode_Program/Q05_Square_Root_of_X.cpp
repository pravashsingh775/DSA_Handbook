#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        return 0;
    int i = 1;
    while (i <= num / i)
    {
        i++;
    }
    cout << "Square root of " << num << " is: " << i - 1 << endl;
    return 0;
}