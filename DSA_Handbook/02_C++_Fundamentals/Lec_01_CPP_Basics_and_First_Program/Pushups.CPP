#include <iostream>
using namespace std;

// Problem: Calculate total pushups done in a month (31 days) given X pushups per day
int main() {
    int X;
    int daysInMonth = 31;

    cout << "Enter number of pushups done per day: ";
    cin >> X;

    int totalPushups = X * daysInMonth;
    cout << "Total pushups in a month: " << totalPushups << endl;

    return 0;
}
