
// Q05. Print Descending Number Pattern
// Pattern
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// Concept: Reverse Column Loop

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
        for (int j = 5; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}