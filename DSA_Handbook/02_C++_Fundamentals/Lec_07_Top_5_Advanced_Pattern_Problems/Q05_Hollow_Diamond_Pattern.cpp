// Hollow Diamond
#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 1;
    cout << "Enter a value of row: ";
    cin >> row;
    cout << "Enter a value of col: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}