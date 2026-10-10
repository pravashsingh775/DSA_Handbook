#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}