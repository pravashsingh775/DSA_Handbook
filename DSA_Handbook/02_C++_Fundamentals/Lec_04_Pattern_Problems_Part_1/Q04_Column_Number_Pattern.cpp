// Q04. Print Column Number Pattern
// Pattern
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// Concept: Column-Based Pattern
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
            cout << j << " ";
        }
        cout << endl;
    }
}