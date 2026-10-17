# include <iostream>
using namespace std;
int main ()
{
    int arr [5] = {10, 20, 30, 40, 50}; // Array Declaration and Initialization
    int Base = 500;
    int i = 2; // Example index
    int address = Base + (i * sizeof(arr[0])); // Calculating the address of the ith element
    cout << "Size of array in bytes: " << sizeof(arr) << endl; // Displaying the size of the array in bytes
    cout << "Number of elements in the array: " << sizeof(arr)/sizeof(arr[0]) << endl; // Displaying the number of elements in the array
    cout << "Address of the ith element: " << address << endl; // Displaying the address of the ith element
    return 0;
}