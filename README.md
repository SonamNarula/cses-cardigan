<div align="center">

<img src="https://capsule-render.vercel.app/api?type=venom&height=190&color=0:1f2933,45:6b705c,100:b5835a&text=CSES%20Problem%20Set&fontColor=f7f3e8&fontSize=42&desc=competitive%20programming%20notes%20from%20the%20folklore%20era&descAlignY=68&descSize=15" alt="CSES Problem Set banner">

<br>

<img src="https://img.shields.io/badge/language-C++20-6b705c?style=for-the-badge&labelColor=2b2b2b&logo=cplusplus&logoColor=f7f3e8" alt="C++20">
<img src="https://img.shields.io/badge/judge-CSES-b5835a?style=for-the-badge&labelColor=2b2b2b" alt="CSES">
<img src="https://img.shields.io/badge/goal-placed%20before%20year%20end-8d6e63?style=for-the-badge&labelColor=2b2b2b" alt="Goal: placed before year end">

<br><br>

<h3>chapter i: the problem woods</h3>

<p>
  A quiet, steady archive of CSES solutions.<br>
  One file, one idea, one accepted verdict at a time.
</p>

</div>

---

## Field Notes

> The point is not to rush through 300 problems.  
> The point is to become the kind of person who can sit with a problem, find the pattern, and write it cleanly.

This repository tracks my CSES Problem Set journey while preparing for placements before the end of the year. Each solution is meant to be short, readable, and easy to revise later.

---

## Progress Map

| Trail | Solved | What This Builds |
|:--|:--:|:--|
| Introductory Problems | `1 / 19` | implementation, simulation, number sense |
| Sorting and Searching | `0 / 35` | greedy thinking, binary search, two pointers |
| Dynamic Programming | `0 / 19` | states, transitions, recurrence discipline |
| Graph Algorithms | `0 / 36` | BFS, DFS, shortest paths, connectivity |
| Range Queries | `0 / 20` | prefix sums, Fenwick trees, segment trees |
| Tree Algorithms | `0 / 16` | rooted trees, binary lifting, tree DP |
| Mathematics | `0 / 31` | modular arithmetic, combinatorics, primes |
| String Algorithms | `0 / 17` | hashing, pattern matching, suffix structures |
| Geometry | `0 / 7` | points, lines, orientation, polygons |
| Advanced Techniques | `0 / 23` | the late-night chapter |

<div align="center">

### Overall Progress

<img src="https://progress-bar.dev/1/?scale=300&title=solved&width=420&color=8d6e63&suffix=/300" alt="1 out of 300 solved">

<br>

`1 / 300`

</div>

---

## The Bookshelf

```text
CSES PROBLEM SET/
|-- INTRODUCTORY PROBLEMS/
|   `-- Weird_Algorithm.cpp
|-- .vscode/
|   |-- tasks.json
|   |-- launch.json
|   |-- settings.json
|   `-- c_cpp_properties.json
|-- bin/
`-- README.md
```

---

## Solution Ritual

Every solution should leave behind enough context for revision season.

```cpp
// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Idea: Simulate the Collatz process until n becomes 1.
// Time: O(number of generated values)
// Space: O(1)
```

Preferred C++ template:

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

## Current Chapter

| # | Problem | File | Status |
|:--:|:--|:--|:--:|
| 1 | Weird Algorithm | [`INTRODUCTORY PROBLEMS/Weird_Algorithm.cpp`](INTRODUCTORY%20PROBLEMS/Weird_Algorithm.cpp) | Accepted-ready |

---

## Local Campfire

The workspace is configured for Homebrew GCC:

```bash
/opt/homebrew/bin/g++-15 -std=c++20 -O2 -Wall -Wextra -Wshadow Weird_Algorithm.cpp -o /tmp/weird
/tmp/weird
```

VS Code commands:

| Action | Command |
|:--|:--|
| Build active file | `Cmd + Shift + B` |
| Run active file | `Terminal > Run Task > C++: run active file` |
| Reset C++ IntelliSense | `Cmd + Shift + P` then `C/C++: Reset IntelliSense Database` |

---

## macOS 27 Beta Note

This laptop is currently on **macOS 27.0 beta**. Older Command Line Tools packages for Xcode 26.x do not install on this version.

If local compilation fails with:

```text
fatal error: assert.h: No such file or directory
fatal error: wchar.h: No such file or directory
```

the missing piece is the matching Apple SDK. Install **Xcode 27 beta**, then select it:

```bash
sudo xcode-select --switch /Applications/Xcode-beta.app
sudo xcodebuild -license accept
```

Until then, the CSES online judge or an online compiler is a perfectly valid way to keep moving. Choose `C++17` or `C++20`.

---

## Naming Spell

Use underscores instead of spaces:

```text
Good:  Weird_Algorithm.cpp
Avoid: Weird Algorithm.cpp
```

Spaces make terminal commands split filenames unless every path is quoted.

---

<div align="center">

<h3>the placement arc</h3>

<p>
  steady practice, sharper pattern recognition,<br>
  cleaner code, stronger interviews.
</p>

<img src="https://img.shields.io/badge/author-Sonam%20Narula-6b705c?style=flat-square&labelColor=2b2b2b" alt="Author">
<img src="https://img.shields.io/badge/era-folklore-b5835a?style=flat-square&labelColor=2b2b2b" alt="Folklore era">
<img src="https://img.shields.io/badge/mission-placement%20before%20year%20end-8d6e63?style=flat-square&labelColor=2b2b2b" alt="Mission: placement before year end">

</div>
