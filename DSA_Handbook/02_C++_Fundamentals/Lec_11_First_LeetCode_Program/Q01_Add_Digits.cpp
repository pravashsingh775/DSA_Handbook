#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num < 0){
    int sum = 0;
    int remainder;   
    
    {
        remainder = num % 10;
        num = num / 10;
        sum = sum + remainder;
    }
    cout << sum << endl;
}
}
