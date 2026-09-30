#include <iostream>
using namespace std;
int main ()
{
int row,col;
cout << "Enter number of rows: ";
cin>> row;
cout << "Enter the value of col: ";
cin >> col;
for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}