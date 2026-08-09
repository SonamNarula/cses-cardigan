<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&height=210&color=0:2f2f2f,45:7b7468,100:d8cfc0&text=cses%20problem%20set&fontColor=f8f5ef&fontSize=44&desc=placement%20prep%20in%20my%20folklore%20era&descAlignY=68&descSize=16" alt="cses problem set banner">

<br>

<img src="https://img.shields.io/badge/era-folklore-d8cfc0?style=for-the-badge&labelColor=2f2f2f" alt="folklore era">
<img src="https://img.shields.io/badge/language-C++20-7b7468?style=for-the-badge&labelColor=2f2f2f&logo=cplusplus&logoColor=f8f5ef" alt="C++20">
<img src="https://img.shields.io/badge/goal-placed%20before%20year%20end-a68a64?style=for-the-badge&labelColor=2f2f2f" alt="placed before year end">

<br><br>

<h3>meet me behind the problems</h3>

<p>
  a soft little archive of CSES solutions,<br>
  written between persistence, pattern recognition, and placement prep.
</p>

<sub>one accepted verdict at a time.</sub>

</div>

---

## cardigan notes

This repository is my CSES practice journal while I prepare to get placed before the year ends.

The mood is folklore. The method is discipline.

Each solution should be:

| keep it | meaning |
|:--|:--|
| clean | easy to read during revision |
| direct | no unnecessary overengineering |
| explained | idea, complexity, and link included |
| consistent | same style across problems |

---

## august progress

<div align="center">

<img src="https://progress-bar.dev/1/?scale=300&title=solved&width=460&color=a68a64&suffix=/300" alt="1 out of 300 solved">

<br><br>

### `1 / 300` problems solved

</div>

| track | solved | what it teaches |
|:--|:--:|:--|
| introductory problems | `1 / 19` | implementation, simulation, number sense |
| sorting and searching | `0 / 35` | greedy choices, binary search, two pointers |
| dynamic programming | `0 / 19` | states, transitions, recurrence discipline |
| graph algorithms | `0 / 36` | BFS, DFS, shortest paths, connectivity |
| range queries | `0 / 20` | prefix sums, Fenwick trees, segment trees |
| tree algorithms | `0 / 16` | rooted trees, binary lifting, tree DP |
| mathematics | `0 / 31` | modular arithmetic, combinatorics, primes |
| string algorithms | `0 / 17` | hashing, KMP, suffix structures |
| geometry | `0 / 7` | points, lines, orientation, polygons |
| advanced techniques | `0 / 23` | the final chapter |

---

## the lakes

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

## invisible string

Every solution should leave a thread back to the original problem and the idea used to solve it.

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

## mirrorball log

| # | problem | file | status |
|:--:|:--|:--|:--:|
| 1 | Weird Algorithm | [`INTRODUCTORY PROBLEMS/Weird_Algorithm.cpp`](INTRODUCTORY%20PROBLEMS/Weird_Algorithm.cpp) | accepted-ready |

---

## exile from local compiler issues

The workspace is configured for Homebrew GCC:

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

## this is me trying, macOS edition

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

Until then, submitting directly on CSES or using an online compiler is completely fine. Choose `C++17` or `C++20`.

---

## seven filename rules

Use underscores instead of spaces:

```text
good:  Weird_Algorithm.cpp
avoid: Weird Algorithm.cpp
```

Spaces make terminal commands split filenames unless every path is quoted.

---

<div align="center">

<h3>the placement arc</h3>

<p>
  not a sprint, not a breakdown,<br>
  just showing up until the patterns start showing back.
</p>

<img src="https://img.shields.io/badge/author-Sonam%20Narula-d8cfc0?style=flat-square&labelColor=2f2f2f" alt="Sonam Narula">
<img src="https://img.shields.io/badge/soundtrack-folklore-7b7468?style=flat-square&labelColor=2f2f2f" alt="folklore">
<img src="https://img.shields.io/badge/mission-placement%20before%20year%20end-a68a64?style=flat-square&labelColor=2f2f2f" alt="placement before year end">

</div>
