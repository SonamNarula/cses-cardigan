#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // current = length of the current consecutive repetition
    int current = 1;

    // longest = maximum repetition found so far
    int longest = 1;

    // Start from index 1 because we compare
    // s[i] with the previous character s[i - 1]
    for(int i = 1; i < s.size(); i++) {

        // If current character is same as previous character,
        // the current repetition continues
        if(s[i] == s[i - 1]) {
            current++;
        }

        // If characters are different,
        // the previous repetition has ended
        // and a new repetition starts
        else {
            current = 1;
        }

        // Keep track of the longest repetition seen so far
        longest = max(longest, current);
    }

    cout << longest << endl;

    return 0;
}