#include <iostream>
using namespace std;

// Problem: Bear and Big Brother (Codeforces 791A)
// Limak's weight is 'a' and Bob's weight is 'b' (a <= b).
// Each year, Limak's weight triples (a *= 3) and Bob's weight doubles (b *= 2).
// Find after how many years Limak will become strictly heavier than Bob (a > b).
int main() {
    int a, b;
    cout << "Enter Limak's weight (a) and Bob's weight (b): ";
    cin >> a >> b;

    int years = 0;

    // Simulate year by year until Limak's weight is strictly greater than Bob's
    while (a <= b) {
        a *= 3; // Limak's weight triples
        b *= 2; // Bob's weight doubles
        years++;
    }

    cout << "Years needed for Limak to become heavier: " << years << endl;
    return 0;
}
