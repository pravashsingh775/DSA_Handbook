# 🧱 Module 03: Arrays – Master Logic & Pattern Playbook
> **Comprehensive Logic Extraction & Problem-Solving Cheatsheet**  
> *Aligned with Rohit Negi / Coder Army Curriculum (Lectures 01 to 20)*  
> *Author: Pravash Singh*

---

## 📌 Index of Topics
1. [Array Memory Layout & Contiguous Address Formula](#1-array-memory-layout--contiguous-address-formula)
2. [Array Extremes: Min & Max Patterns (Safe Sentinels)](#2-array-extremes-min--max-patterns-safe-sentinels)
3. [Linear Search & Early Exit](#3-linear-search--early-exit)
4. [Array Reversal (Two Pointers Pattern)](#4-array-reversal-two-pointers-pattern)

---

# 1. Array Memory Layout & Contiguous Address Formula

### 🧠 Core Concept:
An array is a linear data structure holding homogenous elements in **contiguous memory blocks**.

### 📐 1D Array Address Calculation Formula:
$$\text{Address}(A[i]) = \text{Base Address} + (i \times \text{Size of DataType})$$

- **Base Address:** Memory address of the $0^{\text{th}}$ element (`&arr[0]`).
- **Index $i$:** Number of steps/offsets from the base.
- **Why 0-indexed?** Because index $0$ means offset $0 \times \text{size}$, pointing directly at the base address with zero additional overhead.

```cpp
// Size in bytes
size_t totalBytes = sizeof(arr);

// Number of elements in array
int n = sizeof(arr) / sizeof(arr[0]);

// Address calculation formula
uintptr_t simulatedAddress = baseAddress + (i * sizeof(arr[0]));
```

---

# 2. Array Extremes: Min & Max Patterns (Safe Sentinels)

### 🧠 Core Intuition:
When searching for maximum or minimum elements in an array:
- Never initialize `ans` to `0` or an arbitrary number like `999999` (breaks when array has negative numbers).
- Use standard safe sentinels from `<climits>`:
  - For **Minimum**: Initialize with `INT_MAX` (or `arr[0]`).
  - For **Maximum**: Initialize with `INT_MIN` (or `arr[0]`).

```cpp
#include <climits>

int findMin(int arr[], int n) {
    int minVal = INT_MAX; // or arr[0]
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int findMax(int arr[], int n) {
    int maxVal = INT_MIN; // or arr[0]
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
```

- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

---

# 3. Linear Search & Early Exit

### 🧠 Core Idea:
Traverse from $0$ to $N - 1$. Return the index immediately when `arr[i] == target`.

```cpp
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i; // Early exit
    }
    return -1; // Not found
}
```
- **Best Case:** $O(1)$ (Element at index 0)
- **Worst Case:** $O(N)$ (Element at last index or absent)
- **Space Complexity:** $O(1)$

---

# 4. Array Reversal (Two Pointers Pattern)

### 🧠 Core Idea:
Place `start = 0` and `end = n - 1`. Swap elements and move inward until pointers cross.

```cpp
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
```
- **Time Complexity:** $O(N/2) = O(N)$
- **Space Complexity:** $O(1)$
