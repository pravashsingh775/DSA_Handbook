#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Codeforces 160A - Twins
// Problem: Take the minimum number of coins whose sum is strictly greater
// than the sum of the remaining coins.
int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);
    int totalSum = 0;

    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    // Sort coins in descending order to pick the largest value coins first (Greedy approach)
    sort(coins.rbegin(), coins.rend());

    int mySum = 0;
    int coinsTaken = 0;

    for (int i = 0; i < n; i++) {
        mySum += coins[i];
        coinsTaken++;

        // If my sum is strictly greater than the remaining coins' sum
        if (mySum > totalSum - mySum) {
            break;
        }
    }

    cout << "Minimum coins needed: " << coinsTaken << endl;
    return 0;
}