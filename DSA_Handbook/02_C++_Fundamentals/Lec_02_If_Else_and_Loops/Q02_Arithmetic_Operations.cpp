# include <iostream>
using namespace std;
int main()
{
    int a, b, sum, minus, div, mod, mul;
    cout <<"Enter the value of a: ";
    cin >> a;
    cout <<"Enter the value of b: ";
    cin >> b;
    sum = a+b;
    minus = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;    
    cout << sum  <<endl << minus <<endl <<mul <<endl<< div <<endl<< mod << endl;
}