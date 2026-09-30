#include <iostream>
using namespace std;
int main ()
{
int row,col;
cout << "Enter number of rows: ";
cin>> row;
cout << "Enter the value of col: ";
cin >> col;
for (char i = 'A'; i <= 'A'+ row -1; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}