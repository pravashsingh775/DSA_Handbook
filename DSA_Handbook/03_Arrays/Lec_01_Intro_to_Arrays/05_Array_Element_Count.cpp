# include <iostream>
using namespace std;
int main()

{
    int arr [5] = {10, 20, 30, 40, 50}; // Array Declaration and Initialization
    int count = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of elements in the array: " << count << endl;
    return 0;
}