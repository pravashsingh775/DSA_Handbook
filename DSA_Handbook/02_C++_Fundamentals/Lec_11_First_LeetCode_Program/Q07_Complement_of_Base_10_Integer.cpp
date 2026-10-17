#include <iostream>
using namespace std;

// LeetCode 1009: Complement of Base 10 Integer
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Complement: 1" << endl;
        return 0;
    }

    int temp = n;
    int mask = 0;

    // Build mask of all 1s corresponding to bit-length of n
    while (temp > 0)
    {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }

    int complement = n ^ mask;
    cout << "Complement: " << complement << endl;
    return 0;
}
