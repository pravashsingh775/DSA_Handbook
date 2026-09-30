# include <iostream>
using namespace std;
int main ()
{
    int a, b, eq, Leq, Geq, Neq;
    cout <<"Enter the value of a: ";
    cin >> a;
    cout <<"Enter the value of b: ";
    cin >> b;
    eq= a==b;
    Leq= a >=b;
    Geq = a<=b;
    Neq = a!=b;
    cout << eq << endl;
    cout << Leq << endl;
    cout << Neq << endl;
    cout << Geq << endl;

}