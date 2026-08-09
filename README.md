<div align="center">

<img src="https://img.shields.io/badge/C++-20-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++20">
<img src="https://img.shields.io/badge/CSES-Problem%20Set-111827?style=for-the-badge" alt="CSES Problem Set">
<img src="https://img.shields.io/badge/Status-In%20Progress-22c55e?style=for-the-badge" alt="In Progress">

<br><br>

# CSES Problem Set

### Competitive programming practice, one clean solution at a time.

<sub>Built for consistency, speed, and actually understanding the idea behind each problem.</sub>

</div>

---

## Progress

| Section | Solved | Notes |
|:--|:--:|:--|
| Introductory Problems | `1 / 19` | Warm-up implementation, math, and simulation |
| Sorting and Searching | `0 / 35` | Greedy patterns, two pointers, binary search |
| Dynamic Programming | `0 / 19` | State design and transitions |
| Graph Algorithms | `0 / 36` | BFS, DFS, shortest paths, trees, flows |
| Range Queries | `0 / 20` | Prefix sums, segment trees, Fenwick trees |
| Tree Algorithms | `0 / 16` | DFS order, binary lifting, tree DP |
| Mathematics | `0 / 31` | Number theory and combinatorics |
| String Algorithms | `0 / 17` | Hashing, KMP, suffix structures |
| Geometry | `0 / 7` | Points, lines, polygons |
| Advanced Techniques | `0 / 23` | The final boss shelf |

<div align="center">

## Overall: `1 / 300`

</div>

---

## Repository Map

```text
CSES PROBLEM SET/
├── INTRODUCTORY PROBLEMS/
│   └── Weird_Algorithm.cpp
├── .vscode/
│   ├── tasks.json
│   ├── launch.json
│   ├── settings.json
│   └── c_cpp_properties.json
├── bin/
└── README.md
```

---

## Solution Style

Each solution should be readable enough to revisit later without decoding your past self.

```cpp
// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Idea: Simulate the Collatz process until n becomes 1.
// Time: O(number of generated values)
// Space: O(1)
```

Preferred template:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve here
    return 0;
}
```

---

## Running Locally

This workspace is configured for Homebrew GCC:

```bash
/opt/homebrew/bin/g++-15 -std=c++20 -O2 -Wall -Wextra -Wshadow Weird_Algorithm.cpp -o /tmp/weird
/tmp/weird
```

From VS Code:

| Action | Command |
|:--|:--|
| Build active file | `Cmd + Shift + B` |
| Run active file | `Terminal > Run Task > C++: run active file` |
| Reset C++ IntelliSense | `Cmd + Shift + P` then `C/C++: Reset IntelliSense Database` |

---

## macOS Note

This laptop is currently on **macOS 27.0 beta**, so older Command Line Tools packages for Xcode 26.x do not install. If local compilation fails with an error like:

```text
fatal error: assert.h: No such file or directory
fatal error: wchar.h: No such file or directory
```

then the missing piece is the matching Apple SDK. Install **Xcode 27 beta** and select it:

```bash
sudo xcode-select --switch /Applications/Xcode-beta.app
sudo xcodebuild -license accept
```

Until then, using the CSES online judge or an online compiler is perfectly fine. CSES supports `C++17` and `C++20`.

---

## Naming Rules

Use underscores instead of spaces in filenames:

```text
Good: Weird_Algorithm.cpp
Avoid: Weird Algorithm.cpp
```

Spaces make terminal commands harder because every filename needs quotes.

---

## Current Solved List

| # | Problem | File | Status |
|:--:|:--|:--|:--:|
| 1 | Weird Algorithm | [`INTRODUCTORY PROBLEMS/Weird_Algorithm.cpp`](INTRODUCTORY%20PROBLEMS/Weird_Algorithm.cpp) | Done |

---

<div align="center">

<sub>Steady practice beats dramatic motivation. One accepted solution at a time.</sub>

<br><br>

<img src="https://img.shields.io/badge/Author-Sonam%20Narula-6366f1?style=flat-square" alt="Author">
<img src="https://img.shields.io/badge/Goal-END%20GOAL%202026-f97316?style=flat-square" alt="Goal">

</div>
