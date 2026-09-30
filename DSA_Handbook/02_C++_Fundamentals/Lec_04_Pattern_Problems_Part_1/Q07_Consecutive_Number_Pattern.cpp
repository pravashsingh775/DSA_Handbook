// Q07. Print Consecutive Number Pattern
// Pattern
// 1  2  3  4  5
// 6  7  8  9  10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// Concept: Counter Pattern

#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 1;
    cout << "Enter the value of row: ";
    cin >> row;
    cout << "Enter the value of col: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {

            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}