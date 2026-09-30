#include <iostream>
using namespace std;
int main()
{
    int ans=0,rem,n;
    cout << "Enter a Number: ";
    cin >> n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;
    }
    cout << "Reversed Number: " << ans << endl;
    return 0;
}