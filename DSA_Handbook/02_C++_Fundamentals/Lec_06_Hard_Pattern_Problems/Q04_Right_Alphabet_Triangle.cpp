/*
Question 04: Right-Aligned Alphabet Triangle

Pattern:

        A
      A B
    A B C
  A B C D
A B C D E
*/

# include <iostream>
using namespace std;
int main ()
{
  int row,col;
  cout << "Enter number of rows: ";
  cin>> row;
  cout << "Enter the value of col: ";
  cin>> col;
  for(int i =0; i<= row; i++)
  {
    for(int j=1; j<=row-i; j++)
    {
      cout << "  ";
    }
    for(int k=0; k<=i; k++)
    {
      cout << char('A'+ k) << " ";
    }
    cout << endl;
  }
}