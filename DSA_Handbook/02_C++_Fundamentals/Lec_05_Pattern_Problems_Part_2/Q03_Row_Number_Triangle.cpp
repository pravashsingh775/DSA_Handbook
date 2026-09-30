#include <iostream>
using namespace std;
int main ()
{
int row,col;
cout << "Enter number of rows: ";
cin>> row;
cout << "Enter the value of col: ";
cin >> col;
for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}