// CSES Problem Set
//                 Missing Number
// Task
// Submit
// Results
// Statistics
// Tests

// addEventListener("DOMContentLoaded", function (e) {
//     const mathElements = document.getElementsByClassName("math");
//     const macros = {};
//     for (let element of mathElements) {
//         katex.render(element.textContent, element, {
//             displayMode: element.classList.contains("math-display"),
//             throwOnError: false,
//             globalGroup: true,
//             macros,
//         });
//     }
// });


// .katex .base:last-child {
//     display: inline;
// }


// Time limit: 1.00 s
// Memory limit: 512 MB

// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints

// 2 \le n \le 2 \cdot 10^5

// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4




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