// Q03. Print Row Number Pattern
// Pattern
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// Concept: Row-Based Pattern

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the value of row: ";
    cin >> row;
    cout << "Enter the value of col: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}