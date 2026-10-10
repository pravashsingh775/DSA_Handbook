#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    // Max and min value in an array
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    // second largest element

    int secondLargest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > secondLargest && arr[i] < max)
            secondLargest = arr[i];
    }
    cout << "Second largest value: " << secondLargest << endl;
}
