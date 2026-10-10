#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, rem;
    cout << "Enter a Number: ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum ;
         for (int i = 1; i <= n; i++)
    {
        if (n % 1 == 0)
            sum++;
        
        if (sum > 2)
        
            cout << "composite";
        
        else
        
            cout << "Not composite" ;
        }
        return 0;
    
  {  cout << sum << endl;
    return 0;1;
}
}
}