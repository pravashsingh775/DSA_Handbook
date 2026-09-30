# include <iostream>
using namespace std;
int main()
{
    int num, count=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        count+=i;
    }
    cout<<"Sum of first "<<num<<" natural numbers is: "<<count <<endl;
    }
