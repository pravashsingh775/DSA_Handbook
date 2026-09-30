#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 2)
    {
        cout << "The number is not prime." << endl;
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is composite." << endl;
    }

    return 0;
}