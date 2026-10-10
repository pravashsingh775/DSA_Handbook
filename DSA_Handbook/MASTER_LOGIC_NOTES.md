# 🏆 DSA Handbook – Master Logic & Pattern Bible
> **All Unique Problem Logics, Mathematical Formulas, Interview Tricks & Complexities**  
> *Lectures 01 to 161 (18 Modules) | Aligned with Rohit Negi / Coder Army*  
> *Author: Pravash Singh*

---

## 🗺️ Roadmap & Module Navigation

| Module # | Module Title | Status | Master Notes Document |
| :---: | :--- | :---: | :--- |
| **02** | **C++ Fundamentals** | ✅ **Completed** | [📖 Module 02 Logic Notes](./02_C++_Fundamentals/MODULE_02_LOGIC_NOTES.md) |
| **03** | **Arrays** | ⏳ *Next Up* | *Coming soon upon module completion* |
| **04** | **Strings** | ⏳ *Pending* | *Coming soon* |
| **05** | **Pointers** | ⏳ *Pending* | *Coming soon* |
| **06** | **Recursion** | ⏳ *Pending* | *Coming soon* |
| **07** | **OOP in C++** | ⏳ *Pending* | *Coming soon* |
| **08** | **Linked List** | ⏳ *Pending* | *Coming soon* |
| **09** | **Stacks** | ⏳ *Pending* | *Coming soon* |
| **10** | **Queues** | ⏳ *Pending* | *Coming soon* |
| **11** | **Trees & BST** | ⏳ *Pending* | *Coming soon* |
| **12** | **C++ STL** | ⏳ *Pending* | *Coming soon* |
| **13** | **Heaps & Priority Queues**| ⏳ *Pending* | *Coming soon* |
| **14** | **Sliding Window & Two Pointers** | ⏳ *Pending* | *Coming soon* |
| **15** | **Graphs** | ⏳ *Pending* | *Coming soon* |
| **16** | **Backtracking** | ⏳ *Pending* | *Coming soon* |
| **17** | **Greedy Algorithms** | ⏳ *Pending* | *Coming soon* |
| **18** | **Hashing** | ⏳ *Pending* | *Coming soon* |
| **19** | **Dynamic Programming** | ⏳ *Pending* | *Coming soon* |

---

## ⚡ Quick Access: Module 02 Core Logics Summary

Check the full deep-dive document here: **[Module 02 Logic Notes](./02_C++_Fundamentals/MODULE_02_LOGIC_NOTES.md)**

### Key Highlights from Module 02:
1. **Digital Root (Add Digits - LC 258):** $O(1)$ Math formula `1 + (num - 1) % 9`
2. **Reverse Integer (LC 7):** Pre-multiplication overflow guard `ans > INT_MAX / 10 || ans < INT_MIN / 10`
3. **Palindrome Number (LC 9):** Half-number reversal `x <= rev` avoiding integer overflow
4. **Power of Two (LC 231):** Bitwise single set-bit trick `n > 0 && (n & (n - 1)) == 0`
5. **Square Root (LC 69):** Binary search on answer avoiding multiplication overflow `mid <= x / mid`
6. **Trailing Zeros in Factorial (LC 172):** Legendre's formula counting factors of 5 $\lfloor N/5 \rfloor + \lfloor N/25 \rfloor + \dots$
7. **Prime Test Optimization:** Checking divisors up to $\sqrt{N}$ using the $6k \pm 1$ rule
8. **GCD & LCM:** Euclidean Algorithm $\gcd(a, b) = \gcd(b, a \pmod b)$
9. **Nim Game (LC 292):** Game theory modular congruence `n % 4 != 0`
10. **Bitwise Case Conversion:** ASCII Bit 5 flipping `ch ^ 32`
