/*
Question 03: Right-Aligned Ascending Number Triangle

Pattern:

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

# include <iostream>
using namespace std;
int main ()
{
  int row,col, count=1;
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
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}