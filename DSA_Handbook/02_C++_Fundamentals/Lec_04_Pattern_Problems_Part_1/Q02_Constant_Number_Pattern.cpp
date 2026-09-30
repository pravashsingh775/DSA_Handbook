// Q02. Print Constant Number Pattern
// Pattern
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

// Concept: Constant Pattern

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the value of row: ";
    cin >> row;
    cout << "Enther the value of col: ";\
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "10 ";
        }
        cout << endl;
    }
    return 0;
}