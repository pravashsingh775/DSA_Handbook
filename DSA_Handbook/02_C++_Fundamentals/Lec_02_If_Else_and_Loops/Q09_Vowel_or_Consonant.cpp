#include <iostream>
using namespace std;
int main()
{
    char charcter;
    cout << "Enter a character: ";
    cin >> charcter;
    if (charcter == 'a' || charcter == 'e' || charcter == 'i' || charcter == 'o' || charcter == 'u' || charcter == 'A' || charcter == 'E' || charcter == 'I' || charcter == 'O' || charcter == 'U')
    {
        cout << "The character is a vowel." << endl;
    }
    else
    {
        cout << "The character is a consonant." << endl;
    }
}