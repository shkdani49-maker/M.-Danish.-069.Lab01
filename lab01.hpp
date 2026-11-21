#ifndef CSC531_LAB01_HPP
#define CSC531_LAB01_HPP

// The array has CAPACITY allocated slots, but only 'size' active elements.
// The input contract is that 0 <= size <= cap for insertAt.
// On invalid insertion: return false without changing size or array contents.
// On success: insert x at pos, shift existing values right, increment size.
bool insertAt(int a[], int& size, int cap, int pos, int x);

// The input contract is that size >= 0 and 'a' has at least size slots.
// On invalid deletion: return false without changing size or array contents.
// On success: remove the active element at pos, shift values left, decrement size.
bool deleteAt(int a[], int& size, int pos);

#endif  // CSC531_LAB01_HPP
