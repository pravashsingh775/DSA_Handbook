#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // Iterative reduction until a single digit is achieved (LeetCode 258)
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    cout << "Single digit sum: " << num << endl;
    return 0;
}