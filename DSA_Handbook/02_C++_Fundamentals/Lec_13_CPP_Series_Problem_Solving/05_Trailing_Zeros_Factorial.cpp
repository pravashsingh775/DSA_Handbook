#include <iostream>
using namespace std;
int main(){
    int n, count=0;
    cout <<"Enter a number: ";
    cin>>n;
    while(n>=5)
    {
         n=  n/5;
        count+= n;
    }
    cout <<"Number of trailing zeros in This factorial  is "<<count<<endl;
}