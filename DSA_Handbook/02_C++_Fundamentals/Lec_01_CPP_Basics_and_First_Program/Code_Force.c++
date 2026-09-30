#include <iostream>
using namespace std;

// Codeforces 617A - Elephant
// An elephant can take steps of length 1, 2, 3, 4, or 5.
// Find the minimum number of steps to reach friend's house at coordinate x.
int main() {
    int x;
    cout << "Enter friend's house coordinate (x): ";
    cin >> x;

    // To minimize steps, always take the maximum step size (5)
    int steps = x / 5;

    // If there is any remaining distance (< 5), one additional step is needed
    if (x % 5 != 0) {
        steps++;
    }

    cout << "Minimum steps needed: " << steps << endl;
    return 0;
}