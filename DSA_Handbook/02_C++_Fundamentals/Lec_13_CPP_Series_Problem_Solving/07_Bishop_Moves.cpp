#include <iostream>
using namespace std;

int main()
{
    int n, m, total_moves = 0;
    cout << "Enter the Position  of the player: ";
    cin >> n >> m;
    if (n < 1 || n > 8 || m < 1 || m > 8)
    {
        cout << "Invalid Position" << endl;
        return 0;
    }
    int Upper_Right_Moves = min(n - 1, 8 - m);
    int Lower_Left_Moves = min(8 - n, m - 1);
    int Upper_Left_Moves = min(n - 1, m - 1);
    int Lower_Right_Moves = min(8 - n, 8 - m);
    total_moves = Upper_Right_Moves + Lower_Left_Moves + Upper_Left_Moves + Lower_Right_Moves;
    cout << "Total Moves: " << total_moves << endl;
}