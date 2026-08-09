<div align="center">

<img src="https://capsule-render.vercel.app/api?type=blur&height=220&color=0:050505,30:2b2b2b,55:f7f7f7,100:111111&text=cses%20problem%20set&fontColor=ffffff&fontSize=42&desc=black%20and%20white%20folklore%20era%20//%20placement%20prep&descAlignY=70&descSize=15" alt="cses problem set glass banner">

<br><br>

<img src="https://img.shields.io/badge/folklore%20era-0b0b0b?style=for-the-badge&labelColor=eeeeee&color=0b0b0b" alt="folklore era">
<img src="https://img.shields.io/badge/C++20-181818?style=for-the-badge&labelColor=f6f6f6&logo=cplusplus&logoColor=111111" alt="C++20">
<img src="https://img.shields.io/badge/placed%20before%20year%20end-0b0b0b?style=for-the-badge&labelColor=eeeeee" alt="placed before year end">

<br><br>

# cses problem set

### quiet practice. clean code. glass-table focus.

<sub>placement prep, but make it black-and-white folklore.</sub>

</div>

---

<div align="center">

|  |  |
|:--|:--|
| **current arc** | placement before year end |
| **language** | C++20 |
| **judge** | CSES |
| **mood** | classy · glassy · monochrome |
| **pace** | one accepted verdict at a time |

</div>

---

## overview

This is my CSES practice journal: a clean archive of C++ solutions built for revision, interviews, and steady placement prep.

The README aesthetic is intentionally minimal: black, white, soft gray, and a glassmorphism-inspired layout that still renders cleanly on GitHub.

---

## progress

<div align="center">

<img src="https://progress-bar.dev/1/?scale=300&title=solved&width=500&color=111111&suffix=/300" alt="1 out of 300 solved">

<br><br>

### `1 / 300` solved

</div>

| section | solved | focus |
|:--|:--:|:--|
| introductory problems | `1 / 19` | implementation, simulation, basics |
| sorting and searching | `0 / 35` | greedy, binary search, two pointers |
| dynamic programming | `0 / 19` | states, transitions, recurrence |
| graph algorithms | `0 / 36` | BFS, DFS, shortest paths |
| range queries | `0 / 20` | prefix sums, Fenwick, segment tree |
| tree algorithms | `0 / 16` | binary lifting, DFS, tree DP |
| mathematics | `0 / 31` | modular arithmetic, combinatorics |
| string algorithms | `0 / 17` | hashing, KMP, suffix structures |
| geometry | `0 / 7` | points, lines, orientation |
| advanced techniques | `0 / 23` | harder patterns |

---

## structure

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

## solution format

Each solution should be small enough to revise and clear enough to trust.

```cpp
// Problem: Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
// Idea: Simulate the Collatz process until n becomes 1.
// Time: O(number of generated values)
// Space: O(1)
```

Template:

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

## solved log

| # | problem | file | status |
|:--:|:--|:--|:--:|
| 1 | Weird Algorithm | [`INTRODUCTORY PROBLEMS/Weird_Algorithm.cpp`](INTRODUCTORY%20PROBLEMS/Weird_Algorithm.cpp) | done |

---

## run locally

This workspace is configured for Homebrew GCC:

```bash
/opt/homebrew/bin/g++-15 -std=c++20 -O2 -Wall -Wextra -Wshadow Weird_Algorithm.cpp -o /tmp/weird
/tmp/weird
```

VS Code:

| action | command |
|:--|:--|
| build active file | `Cmd + Shift + B` |
| run active file | `Terminal > Run Task > C++: run active file` |
| reset IntelliSense | `Cmd + Shift + P` then `C/C++: Reset IntelliSense Database` |

---

## macOS note

This laptop is currently on **macOS 27.0 beta**. Older Command Line Tools packages for Xcode 26.x do not install on this version.

If local compilation fails with:

```text
fatal error: assert.h: No such file or directory
fatal error: wchar.h: No such file or directory
```

install **Xcode 27 beta**, then select it:

```bash
sudo xcode-select --switch /Applications/Xcode-beta.app
sudo xcodebuild -license accept
```

Until then, submitting directly on CSES or using an online compiler is completely fine. Choose `C++17` or `C++20`.

---

## filename rule

Use underscores instead of spaces:

```text
good:  Weird_Algorithm.cpp
avoid: Weird Algorithm.cpp
```

Spaces make terminal commands split filenames unless every path is quoted.

---

<div align="center">

<br>

<img src="https://readme-typing-svg.demolab.com?font=Georgia&size=20&duration=3400&pause=900&color=111111&center=true&vCenter=true&width=760&lines=this+is+me+trying%2C+but+with+code.;glass+focus%2C+quiet+discipline.;placed+before+year+end.;one+problem+at+a+time." alt="typing line">

<br><br>

<img src="https://img.shields.io/badge/author-Sonam%20Narula-111111?style=flat-square&labelColor=f5f5f5" alt="Sonam Narula">
<img src="https://img.shields.io/badge/aesthetic-black%20%2F%20white%20%2F%20glass-111111?style=flat-square&labelColor=f5f5f5" alt="black white glass aesthetic">
<img src="https://img.shields.io/badge/mission-placement%20before%20year%20end-111111?style=flat-square&labelColor=f5f5f5" alt="placement before year end">

<br><br>

<sub>soft visuals. sharp logic.</sub>

</div>
