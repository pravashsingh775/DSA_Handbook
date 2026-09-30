#include <iostream>
using namespace std;

int main()
{
    int num;
    int first = 0, second = 1, next;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}