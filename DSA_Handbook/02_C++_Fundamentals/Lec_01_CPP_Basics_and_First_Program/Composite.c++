
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % 1 == 0)
        
            count++;
        }
        if (count > 2)
        {
            cout << "composite";
        }
        else
        {
            cout << "Not composite";
        }
        return 0;
    }

