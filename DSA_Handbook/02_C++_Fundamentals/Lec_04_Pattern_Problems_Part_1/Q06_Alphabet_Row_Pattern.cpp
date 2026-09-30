// Q06. Print Alphabet Row Pattern
// Pattern
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E

// Concept: ASCII + Row

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the value of row: ";
    cin >> row;
    cout << "Enter the value of col: ";
    cin >> col;
    for (char i = 'A'; i <= 'A' + row - 1; i++)
    {
        for (char j = 'A'; j <= 'A' + col - 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}