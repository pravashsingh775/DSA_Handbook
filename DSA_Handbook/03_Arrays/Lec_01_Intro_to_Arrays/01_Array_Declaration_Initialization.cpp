# include <iostream>
using namespace std;
int main()
{
    // Array Declaration
    int arr[5]; // Declaring an array of size 5
    
    // Array Initialization
    arr[0] = 10; // Initializing first element
    arr[1] = 20; // Initializing second element
    arr[2] = 30; // Initializing third element
    arr[3] = 40; // Initializing fourth element
    arr[4] = 50; // Initializing fifth element

    // Displaying the array elements
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}