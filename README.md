# Competitive Programming & DSA Archive 🚀

A curated collection of problem-solving solutions, preserved for continuous learning, revision, and tracking my DSA journey. The goal of this repository is not just to archive working code, but to document the evolution of my thought process—including failed attempts, brute-force ideas, and optimal solutions.

---

## 🔄 Weekly Workflow & Git Strategy

To keep the repository organized and active, solutions are managed using a **Platform & Time-Based Branching Strategy**.

### 1. Branching & PR Conventions
* **Branch Naming**: Each platform and week gets its own branch: `<platform-name>-week-<number>` (e.g., `leetcode-week-01`).
* **Pull Requests**: Open a PR for the branch immediately upon creation. 
  * **PR Name**: Use the branch name along with the active date range (e.g., `leetcode-week-01 [Oct 12 - Oct 18]`).
  * **Weekly Merge**: Keep the PR open for the week to continuously push solutions. Merge it into `main` at the end of the week, then spin up a new branch/PR for the next cycle.
  * **PR Description**: Highlight difficult problems, include problem links, file paths to your solutions, and attach whiteboard/sketch images to visually document your revision notes.

### 2. Commit Message Guidelines
* **Title**: Use the current problem set (e.g., `Commit Problem Set 1`).
* **Description**: Use the body of the commit message to write specific notes, gotchas, or quick thoughts related to the questions solved in that commit.

---

## 📂 Repository Structure

Each platform branch maintains its own distinct folder structure to avoid merge conflicts:

```text
├── LeetCode/             # Managed in 'leetcode-week-X' branches
│   ├── Arrays/
│   │   └── 0001-two-sum.cpp
│   └── Graphs/
├── Codeforces/           # Managed in 'codeforces-week-X' branches
│   ├── Div2-A/
│   └── Topic-Wise/
└── README.md