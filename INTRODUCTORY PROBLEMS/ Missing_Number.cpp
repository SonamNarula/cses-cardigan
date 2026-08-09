// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083
// Idea: Subtract the sum of given numbers from the expected sum 1 + 2 + ... + n.
// Time: O(n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // n is the total number of numbers
    // that should be present: 1 to n
    long long n;
    cin >> n;

    // Sum of all numbers from 1 to n
    //
    // Example:
    // n = 5
    // 1 + 2 + 3 + 4 + 5 = 15
    long long expectedSum = n * (n + 1) / 2;

    // This will store the sum of the
    // numbers that are actually given
    long long actualSum = 0;

    // We are given only n-1 numbers
    // because exactly one number is missing
    for(int i = 0; i < n - 1; i++) {

        long long x;
        cin >> x;

        // Add the current number to actualSum
        actualSum += x;
    }

    // Expected sum contains every number from 1 to n.
    // Actual sum is missing exactly one number.
    //
    // Therefore, their difference is the missing number.
    long long missing = expectedSum - actualSum;

    cout << missing << endl;

    return 0;
}


// Expected Sum
//      -
// Actual Sum
//      ↓
// Missing Number
