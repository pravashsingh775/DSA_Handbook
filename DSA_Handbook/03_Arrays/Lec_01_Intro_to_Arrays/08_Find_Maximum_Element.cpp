#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5];
    int ans = INT_MIN;
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<5; i++)
    {
        if(arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << "Maximum element in the array: " << ans << endl;
    return 0;
}
