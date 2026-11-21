# CSC-531 Lab 01 — Student Report

**Roll No.: 69
**Student name: M.Danish sheikh
**Section (A/B): B 
**GitHub username: shkdani 

## 1. Aim and input assumptions

Describe the task and state the relationship among capacity, logical size and active indices.

## 2. Task A — Array diagram and address calculations:
Draw **8 slots with logical size 4**. Label indices, active items, free slots and the next append index.

Array (8 Slots) Logical Size = 4

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7|
|10 |20 |30|40 | - | - | - | - | 

Active Items Free Slots
Active indices: 0, 1, 2, 3
Free indices: 4, 5, 6, 7
Next append index: 4

**1D address worksheet:** Given `B=4000`, `w=4`, calculate `A[0]`, `A[3]`, `A[7]`. Show steps.

**2D row-major worksheet:** Given `M[4][5]`, `B=2000`, `w=4`, calculate `M[2][3]`. Show the linear offset and explain why it is multiplied by element width.

## 3. Task B — Insertion/deletion trace

Using initial active values `[70, 80, 90, 85]`, `size=4`, `capacity=8`, trace insertion of `75` at index `2`. Show **each shift**, the new element and final logical size.

Then trace deletion of the element at **index 1** from the updated array. Describe which indices move and the resulting active values.

## 4. Task C — Menu demonstration

Describe how to use your four menu options. Show a sample run or a concise input/output log. Include one failed insertion at full capacity and one failed deletion from an empty list.

## 5. Validation test table

| Test case | Initial state / input | Expected result | Actual result | Pass/Fail |
|---|---|---|---|---|
| Insert in middle | | | | |
| Delete first | | | | |
| Delete middle | | | | |
| Delete last | | | | |
| Insert when full | | | | |
| Delete when empty | | | | |
| Invalid negative index | | | | |
| Invalid index == size | | | | |

Add other tests you used.

## 6. Complexity and limitations

Define `n` as the number of active elements before the operation and `p` as the target position. State the number of element shifts for insertion and deletion. Explain worst-case time and auxiliary-space complexity. State any assumptions and restrictions.

## 7. Reflection and viva preparation

1. How many shifts are required to insert at position `p` into an active list of `n` elements?
2. Why does insertion shift backward while deletion shifts forward?
3. Which workload favors arrays: frequent indexed access or frequent front insertion? Explain.

**One bug I encountered:**  
**How I detected it:**  
**What I changed:**  
**External/AI assistance disclosed, if applicable:**  
