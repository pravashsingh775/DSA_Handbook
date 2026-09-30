#include <iostream>
using namespace std;
int main()
{
    int row, col;
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

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        
    }
}