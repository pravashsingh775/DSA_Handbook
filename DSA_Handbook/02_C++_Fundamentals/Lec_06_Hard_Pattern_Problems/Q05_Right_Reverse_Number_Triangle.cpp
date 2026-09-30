/* Question 05: Right-Aligned Reverse Number Triangle
Pattern:
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
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
    for(int k=i; k>=1; k--)
    {
      cout << k << " ";
    }
    cout << endl;
  }
}
