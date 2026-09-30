#include <iostream>
using namespace std;
int main()
{
    int row, col, count = 1;
    cout << "Enter a value of row: ";
    cin >> row;
    cout << "Enter a value of col: ";
    cin >> col;
    for (int i = row; i >=1; i--)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2*i-1 ; j++)
        {
            cout << "*";
        }
    cout << endl;
    }
}