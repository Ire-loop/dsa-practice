# Competitive Programming Archive 🚀

A curated collection of competitive programming solutions and algorithms, preserved for future reference, continuous learning, and tracking my problem-solving journey.

---

## 🌿 Branching Strategy

To keep the workspace separated and organized, this repository utilizes a **Platform-Wise Branching Strategy**. 

* **`main`**: The permanent archive. This branch holds the finalized, accepted, and organized code merged from all platforms.
* **`leetcode`**: Active workspace for LeetCode problems.
* **`codeforces`**: Active workspace for Codeforces problems.
* **`codechef` / `hackerrank`**: (Optional) Active workspaces for other platforms.

### The Workflow
1. Switch to the specific platform branch (e.g., `git checkout leetcode`).
2. Solve problems, commit, and push changes to that branch.
3. Periodically raise a **Pull Request (PR)** to merge the platform branch into `main` to update the master archive.

---

## 📂 Repository Structure

Inside each platform branch, files are organized by **Topic** or **Contest/Difficulty** to ensure quick navigation:

```text
├── LeetCode/ (On 'leetcode' branch)
│   ├── Arrays/
│   │   └── 0001-two-sum.cpp
│   └── Graphs/
│       └── 0200-number-of-islands.cpp
│
├── Codeforces/ (On 'codeforces' branch)
│   ├── Div2-A/
│   │   └── 123A-problem-name.cpp
│   └── Topic-Wise/
│       └── Segment-Trees/
│
├── Templates/ (On 'main' branch)
│   ├── fast_io.cpp
│   └── graph_algorithms.cpp
└── README.md