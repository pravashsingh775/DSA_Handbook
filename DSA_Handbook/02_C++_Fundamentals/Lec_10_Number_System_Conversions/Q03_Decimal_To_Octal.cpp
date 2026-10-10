# include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<< "Enter a decimal number: ";
    cin>> num;
    int octal=0;
    int base=1;
    int remainder;
    while (num>0)
    {
        remainder=num%8;
        num=num/8;
        octal=octal+remainder*base;
        base=base*10;
    }
    cout << octal << endl;

}