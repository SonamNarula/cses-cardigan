// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Idea: Simulate the Collatz process until n becomes 1.
// Time: O(number of generated values)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    while(n != 1) {
        cout << n << " ";

        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
    }

    cout << 1 << endl;

    return 0;
}

// Start
//   ↓
// Check n
//   ↓
// Even? ───── YES → n / 2
//   │
//   NO
//   ↓
// 3n + 1
//   ↓
// Print
//   ↓
// n == 1?
//   │
//  NO ─────→ Repeat
//   │
//  YES
//   ↓
//  End
