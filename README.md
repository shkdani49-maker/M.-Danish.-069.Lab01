# CSC-531 — Lab 01: Arrays, Address Calculations and Safe Insertion/Deletion

**Course:** CSC-531 Data Structures & Algorithms  
**Language:** C++17  
**Submission:** Individual programming laboratory  
**Source:** CSC-531 Student Laboratory Manual, Lab 01 (Week 01; Lectures 00–01)

## Learning goals

1. Distinguish an array's allocated capacity from its active logical size.
2. Calculate element locations for 1D and row-major 2D arrays.
3. Implement and test safe insertion and deletion in a fixed-capacity integer array.

## Assessed work

### Task A — Array representation and address worksheet

In `REPORT.md`, draw an indexed **8-slot array** with **logical size 4**. Identify active elements, unused slots and the next append position.

Using hypothetical addresses, calculate **A[0], A[3], and A[7]** when `B = 4000` and `w = 4`. For row-major `M[4][5]`, calculate **M[2][3]** for `B = 2000` and `w = 4`, and explain the offset.

These are conceptual address calculations; do not assume `sizeof(int) == 4` on every platform.

### Task B — Safe array functions

Implement the function contracts declared in `lab01.hpp`, in **your own code** inside `lab01.cpp`:

```cpp
bool insertAt(int a[], int& size, int cap, int pos, int x);
bool deleteAt(int a[], int& size, int pos);
```

- `insertAt`: reject invalid positions and full arrays; otherwise shift elements right, insert the value and increase logical size.
- `deleteAt`: reject invalid indices; otherwise shift elements left, decrease logical size and never read beyond the final active element.
- On a failed operation, **do not modify either logical size or array contents**.
- Do not substitute `std::vector`, `std::list`, or ready-made STL insertion/deletion algorithms for the assessed fixed-array implementation.

### Task C — Integrated menu and demonstrations

Complete `main.cpp` with a menu for **display, insert, delete and exit**. Keep `size` separate from `CAP`. Demonstrate insertion when the array is full and deletion when the array is empty, plus correct normal cases.

### Trace, tests and analysis

Complete `REPORT.md` with an annotated step-by-step trace, a test table (expected vs. actual output), worst-case time and auxiliary-space complexity for each function, one bug fixed and answers to the three reflection questions in the manual.

## Files to submit

Keep all of these in your individual Classroom 50 repository:

- `lab01.hpp` — the required function declarations (do not change signatures).
- `lab01.cpp` — your insertion and deletion implementations.
- `main.cpp` — your completed menu demonstration.
- `REPORT.md` — array/address worksheet, trace, tests, complexity and reflection.

This is the documented **multi-file folder** submission permitted by the lab manual. You do not need to rename source files to `CSC531_Lab01_RollNo_Name.cpp`; your private assignment repository links your work to your Classroom 50 roster. Enter your roll number in `REPORT.md`.

## Submit from GitHub Codespaces — easiest method

1. Accept the assignment using the instructor's **Lab 01 invitation link** (not just the organization/classroom invite).
2. Open **your own** GitHub assignment repository. Click **Code → Codespaces → Create codespace on main** (or reopen your existing Codespace).
3. Edit and save **lab01.cpp**, **main.cpp**, and **REPORT.md**. Keep the header declarations in **lab01.hpp** unchanged.
4. Check your program using the build/run commands below.
5. Open **Terminal → New Terminal** and run **one command**:

```bash
bash submit.sh
```

   Alternatively, in Codespaces use **Terminal → Run Task → Submit Lab 01**. The task and command do the same thing.

The submission helper automatically stages the three assignment files, commits changed work, pushes the `main` branch to GitHub, creates a unique `submit/*` tag, and pushes that tag to trigger Classroom 50's autograder. You do **not** need to type Git add/commit/push/tag commands separately. Confirm that it prints **SUBMISSION SENT**, then check the repository's **Actions** tab and **Releases** page for scores and feedback.

**Important:** Saving a file inside Codespaces is not a submission. The assignment is submitted only after you run `bash submit.sh` (or the Submit Lab 01 task) and it completes without errors. If the script reports an error, fix it and try again. It submits only the three named student files; ask the instructor before adding extra files or figures.

## Build and run locally

From VS Code Terminal, or any shell with `g++`:

```sh
g++ -std=c++17 -Wall -Wextra -pedantic main.cpp lab01.cpp -o main
./main
```

On Windows, if the compiler produces `main.exe`, run `main.exe` or `.\main.exe` depending on the terminal.

**Important:** Successful compilation does **not** prove correctness. Test valid operations, invalid positions, full capacity, empty lists and repeated updates.

## Grading and feedback

**Lab 01 maximum: 10 marks = 6.5 automated + 3.5 instructor-assessed.**

| Component | Marks toward final /10 | How assessed |
|---|---:|---|
| Automated C++17 build, insertion/deletion correctness, and boundary cases | 6.5 | GitHub Actions / Classroom 50 |
| REPORT.md: array diagram, memory-address calculations, traces, test evidence, and complexity | 2.0 | Instructor review |
| Code readability, four-option interactive menu, input handling, and demonstration | 1.0 | Instructor review |
| Reflection, bug explanation, and individual viva | 0.5 | Instructor review |
| **TOTAL** | **10.0** | Combined by instructor |

**Technical scoring note:** Classroom 50's built-in test scores are whole numbers, so the automated test report still shows a maximum of **65 internal points**. Divide the displayed score by 10 to obtain marks out of 6.5:

- 65/65 internally = **6.5/6.5 automated marks**.
- 52/65 internally = **5.2/6.5 automated marks**.
- Final grade out of 10 = **(automated score / 10) + instructor-assessed marks out of 3.5**.

The teacher records the 3.5 instructor marks separately and combines them with the converted automated score. Do **not** use Classroom 50's manual score override to add the manual marks: an override **replaces**, rather than adds to, the automatic result.

The automatic checks assess the required `insertAt()` and `deleteAt()` functions and compilation. The interactive menu and written work are evaluated by the instructor.

## Submission policy

Follow your teacher's Classroom 50 assignment instructions. If the assignment is configured for **tagged submission**, a normal push saves work but does not grade it. In that case, submit with the `gh student submit` command or a `submit/*` Git tag, and verify that a scoring run appears. Do not use GitHub's **Create release** button to submit.

Complete original work, disclose external/AI assistance according to course instructions, and be ready for an individual code walkthrough.
