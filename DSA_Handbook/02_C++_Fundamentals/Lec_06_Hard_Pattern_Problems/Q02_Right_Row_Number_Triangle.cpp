/*
Question 02: Right-Aligned Row Number Triangle

Pattern:

        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/
# include <iostream>
using namespace std;
int main ()
{
  int row,col;
  cout << "Enter number of rows: ";
  cin>> row;
  cout << "Enter the value of col: ";
  cin >> col;
  for(int i =1; i<= row; i++)
  {
    for(int j=1; j<=row-i; j++)
    {
      cout << "  ";
    }
    for(int k=1; k<=i; k++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}