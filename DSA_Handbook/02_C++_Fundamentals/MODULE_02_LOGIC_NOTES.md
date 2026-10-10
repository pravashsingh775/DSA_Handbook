# 🧠 Module 02: C++ Fundamentals – Master Logic & Pattern Playbook
> **Comprehensive Logic Extraction & Problem-Solving Cheatsheet**  
> *Aligned with Rohit Negi / Coder Army Curriculum (Lectures 01 to 13)*  
> *Author: Pravash Singh*

---

## 📌 Index of Logic Categories
1. [Core Number Theory & LeetCode Mathematical Tricks](#1-core-number-theory--leetcode-mathematical-tricks)
   - [Add Digits (Digital Root)](#-1-add-digits-digital-root---leetcode-258)
   - [Reverse Integer with Overflow Protection](#-2-reverse-integer-with-overflow-guard---leetcode-7)
   - [Palindrome Number (Half-Reverse Optimization)](#-3-palindrome-number-half-reverse-optimization---leetcode-9)
   - [Power of Two (Bit Manipulation)](#-4-power-of-two-bitwise-trick---leetcode-231)
   - [Square Root of X (Integer Binary Search)](#-5-square-root-of-x---leetcode-69)
   - [Complement of Base 10 Integer](#-6-complement-of-base-10-integer---leetcode-1009)
   - [Trailing Zeros in Factorial (Legendre's Formula)](#-7-trailing-zeros-in-factorial---leetcode-172)
   - [Prime Number Primality Test ($\sqrt{N}$ & $6k \pm 1$)](#-8-prime-number-test-optimization)
   - [Armstrong / Narcissistic Number](#-9-armstrong-number-logic)
   - [Greatest Common Divisor (Euclidean Algorithm) & LCM](#-10-gcd-and-lcm-euclidean-algorithm)
   - [Leap Year Complete Gregorian Rule](#-11-leap-year-gregorian-condition)
   - [Nim Game (Game Theory)](#-12-nim-game-pattern---leetcode-292)
   - [Bishop Moves on Chessboard (8x8 Boundary Minima)](#-13-bishop-moves-on-8x8-chessboard)
2. [Number System & Base Conversions](#2-number-system--base-conversions)
   - [Decimal to Any Base $B$](#-decimal-to-base-b-encoding)
   - [Any Base $B$ to Decimal](#-base-b-to-decimal-decoding)
3. [Bitwise Operator Mechanics & Hacks](#3-bitwise-operator-mechanics--hacks)
   - [ASCII Case Conversion via Bit 5](#-ascii-case-conversion-via-bit-5)
   - [Check Odd/Even](#-even--odd-via-lsb)
   - [XOR Swap](#-swap-without-temporary-variable)
4. [Pattern Printing Universal Mental Framework](#4-pattern-printing-universal-mental-framework)
   - [The 3-Loop Mental Model](#-the-3-loop-universal-model)
   - [Symmetric Split Rule (Butterfly & Hollow Diamond)](#-symmetric-split-rule)
   - [Palindrome Pyramids](#-palindrome-pyramid-formula)

---

# 1. Core Number Theory & LeetCode Mathematical Tricks

---

### 💡 1. Add Digits (Digital Root) - *LeetCode 258*
*Problem:* Add all digits of a number repeatedly until only a single digit remains (e.g., $38 \to 3 + 8 = 11 \to 1 + 1 = 2$).

#### 🔹 Approach A: Iterative Loop $O(\log_{10} N)$
```cpp
int addDigitsLoop(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
```

#### ⚡ Approach B: The $O(1)$ Math Trick (Congruence Modulo 9)
In decimal arithmetic, every number is congruent to the sum of its digits modulo 9 ($N \equiv \sum \text{digits} \pmod 9$):
$$\text{Digital Root} = \begin{cases} 0 & \text{if } N = 0 \\ 9 & \text{if } N \pmod 9 = 0 \\ N \pmod 9 & \text{otherwise} \end{cases}$$
**Unified One-Liner Formula:**
$$\text{Digital Root} = 1 + (N - 1) \% 9 \quad (\text{for } N > 0)$$

```cpp
int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}
```
- **Time Complexity:** $O(1)$
- **Space Complexity:** $O(1)$
- **Interview Trap:** Don't forget the base case when `num == 0`!

---

### 💡 2. Reverse Integer with Overflow Guard - *LeetCode 7*
*Problem:* Reverse digits of 32-bit signed integer. If reversing causes the value to go outside $[-2^{31}, 2^{31} - 1]$, return `0`.

#### 🧠 Core Intuition & The Overflow Trap:
Standard digit extraction is:
$$\text{ans} = (\text{ans} \times 10) + (n \pmod{10})$$
**The Danger:** Multiplying `ans * 10` can immediately overflow a 32-bit signed integer before we can even check it!

#### 🛡️ Safe Boundary Condition Check:
Before executing `ans = ans * 10 + digit`, check:
```cpp
if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return 0;
if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return 0;
```
*(Since a 32-bit integer ending in digit > 7 cannot be formed by reversing a valid input, simply checking `ans > INT_MAX / 10 || ans < INT_MIN / 10` is sufficient).*

```cpp
int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int digit = x % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) return 0;
        ans = (ans * 10) + digit;
        x /= 10;
    }
    return ans;
}
```
- **Time Complexity:** $O(\log_{10} |x|) \approx 10 \text{ iterations max}$
- **Space Complexity:** $O(1)$

---

### 💡 3. Palindrome Number (Half-Reverse Optimization) - *LeetCode 9*
*Problem:* Check if integer $x$ reads the same backward as forward without converting to string.

#### 🧠 Traps & Insights:
1. All negative numbers are **NOT** palindromes (e.g. `-121` reversed is `121-`).
2. Any number ending in `0` (except `0` itself) cannot be a palindrome (e.g. `10` reversed is `01 = 1`).
3. Reversing the entire number risks 32-bit overflow.

#### ⚡ Master Trick: Reverse Only Half the Number!
Stop when the reversed second half becomes greater than or equal to the remaining first half (`x <= reversedNum`):

```cpp
bool isPalindrome(int x) {
    // Negative numbers or non-zero numbers ending in 0 cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }

    // For even digits: x == rev (e.g., 1221 -> x=12, rev=12)
    // For odd digits:  x == rev / 10 (e.g., 12321 -> x=12, rev=123)
    return (x == rev || x == rev / 10);
}
```
- **Time Complexity:** $O(\log_{10} x / 2)$ — Twice as fast!
- **Space Complexity:** $O(1)$

---

### 💡 4. Power of Two (Bitwise Trick) - *LeetCode 231*
*Problem:* Determine if integer $n$ is a power of two ($n = 2^k$).

#### 🧠 Binary Representation Insight:
In binary, any power of two has **exactly one set bit (`1`)**:
- $1 = 0001_2$
- $2 = 0010_2$
- $4 = 0100_2$
- $8 = 1000_2$

When you subtract 1 (`n - 1`), the single set bit becomes `0` and all trailing zeros become `1`s:
- $8 = 1000_2$
- $7 = 0111_2$
- $8 \ \& \ 7 = 1000_2 \ \& \ 0111_2 = 0000_2$

#### ⚡ Master Formula:
```cpp
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
```
- **Time Complexity:** $O(1)$
- **Space Complexity:** $O(1)$
- **Edge Case:** $n \le 0$ must return `false`.

---

### 💡 5. Square Root of X - *LeetCode 69*
*Problem:* Compute $\lfloor \sqrt{x} \rfloor$ for non-negative integer $x$.

#### 🧠 Binary Search on Answer Range $[1, x]$:
Instead of linear loop $O(\sqrt{x})$, use Binary Search in $O(\log x)$.
**Overflow Trap:** Computing `mid * mid` can easily overflow a standard 32-bit integer when `mid = 10^5` ($10^{10} > 2 \times 10^9$).
**Fix:** Instead of `mid * mid <= x`, write `mid <= x / mid`.

```cpp
int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    int left = 1, right = x, ans = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid <= x / mid) {
            ans = mid;         // Possible answer, explore larger
            left = mid + 1;
        } else {
            right = mid - 1;   // mid is too large
        }
    }
    return ans;
}
```
- **Time Complexity:** $O(\log x)$
- **Space Complexity:** $O(1)$

---

### 💡 6. Complement of Base 10 Integer - *LeetCode 1009*
*Problem:* Flip all bits in the binary representation of $N$ (e.g. $5 = 101_2 \to 010_2 = 2$).

#### 🧠 Bitmask XOR Method:
If $N = 5 = 101_2$, we need a mask of all `1`s with the same bit-length: $\text{mask} = 111_2 = 7$.
Then:
$$N \oplus \text{mask} = 101_2 \oplus 111_2 = 010_2 = 2$$

```cpp
int bitwiseComplement(int n) {
    if (n == 0) return 1; // Edge case
    int mask = 0;
    int temp = n;
    while (temp > 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }
    return n ^ mask; // or (~n) & mask
}
```
- **Time Complexity:** $O(\log_2 n)$
- **Space Complexity:** $O(1)$

---

### 💡 7. Trailing Zeros in Factorial - *LeetCode 172*
*Problem:* Count trailing zeros in $N!$ without calculating the massive factorial.

#### 🧠 Legendre's Formula Intuition:
A trailing zero is produced by a factor of $10 = 2 \times 5$.
In any factorial $N!$, factors of $2$ are vastly more plentiful than factors of $5$. Therefore, the count of trailing zeros is determined exclusively by the number of factors of $5$ in $N!$:
$$\text{Trailing Zeros} = \left\lfloor \frac{N}{5} \right\rfloor + \left\lfloor \frac{N}{25} \right\rfloor + \left\lfloor \frac{N}{125} \right\rfloor + \dots$$

```cpp
int trailingZeroes(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
```
- **Time Complexity:** $O(\log_5 N)$
- **Space Complexity:** $O(1)$

---

### 💡 8. Prime Number Test Optimization
*Problem:* Determine if integer $N > 1$ is prime.

#### 🧠 Evolution of Primality Testing:
1. **Brute Force:** Loop `2` to `N - 1` $\to O(N)$
2. **Square Root Property:** If $N$ has a divisor greater than $\sqrt{N}$, its paired divisor must be smaller than $\sqrt{N}$. Hence, check only up to $\sqrt{N}$ $\to O(\sqrt{N})$.
3. **$6k \pm 1$ Rule:** All primes $> 3$ can be expressed in the form $6k \pm 1$. Test divisibility by 2 and 3, then increment by 6:

```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check numbers of form 6k - 1 and 6k + 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
```
- **Time Complexity:** $O(\sqrt{N} / 3) \approx O(\sqrt{N})$
- **Space Complexity:** $O(1)$

---

### 💡 9. Armstrong Number Logic
*Problem:* A number is an Armstrong (narcissistic) number of order $k$ if the sum of its digits raised to power $k$ equals the number itself (e.g. $153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153$).

#### 🧠 Two-Pass Strategy:
1. **Pass 1:** Count the number of digits $k$.
2. **Pass 2:** Extract each digit, compute $\text{digit}^k$, sum them up, and compare with original number.

```cpp
bool isArmstrong(int n) {
    int temp = n, k = 0;
    while (temp > 0) {
        k++;
        temp /= 10;
    }

    temp = n;
    long long sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        long long power = 1;
        for (int i = 0; i < k; i++) power *= rem;
        sum += power;
        temp /= 10;
    }
    return sum == n;
}
```

---

### 💡 10. GCD and LCM (Euclidean Algorithm)
*Problem:* Find Greatest Common Divisor and Least Common Multiple of $a$ and $b$.

#### 🧠 Euclidean Division Property:
$$\gcd(a, b) = \gcd(b, a \pmod b) \quad \text{with base case } \gcd(a, 0) = a$$
$$\text{LCM}(a, b) = \frac{a \times b}{\gcd(a, b)}$$

```cpp
int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

long long lcm(int a, int b) {
    return ((long long)a * b) / gcd(a, b);
}
```
- **Time Complexity:** $O(\log(\min(a, b)))$
- **Space Complexity:** $O(1)$

---

### 💡 11. Leap Year Gregorian Condition
*Problem:* Check if year is a leap year.

#### 🧠 Rule:
1. Century years must be divisible by 400.
2. Non-century years must be divisible by 4 and NOT by 100.

```cpp
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
```

---

### 💡 12. Nim Game Pattern - *LeetCode 292*
*Problem:* There is a heap of $n$ stones. You and a friend alternate turns removing 1, 2, or 3 stones. The one who removes the last stone wins. You go first.

#### 🧠 Game Theory Analysis:
- $n = 1, 2, 3 \to$ You win immediately (take all).
- $n = 4 \to$ Whatever you take (1, 2, or 3), your friend can take the remaining and win. You lose!
- $n = 5, 6, 7 \to$ You can remove 1, 2, or 3 to leave exactly 4 for your opponent. You win!
- $n = 8 \to$ Whatever you do, your opponent can force you to face 4. You lose!

**Theorem:** First player loses if and only if $n$ is a multiple of 4.
```cpp
bool canWinNim(int n) {
    return (n % 4 != 0);
}
```
- **Time Complexity:** $O(1)$

---

### 💡 13. Bishop Moves on 8x8 Chessboard
*Problem:* Given row $r \in [1, 8]$ and column $c \in [1, 8]$, count total squares a bishop can attack in all 4 diagonals.

#### 🧠 4-Way Boundary Minima:
1. **Top-Left Diagonal:** Can move $\min(r - 1, c - 1)$ steps.
2. **Top-Right Diagonal:** Can move $\min(r - 1, 8 - c)$ steps.
3. **Bottom-Left Diagonal:** Can move $\min(8 - r, c - 1)$ steps.
4. **Bottom-Right Diagonal:** Can move $\min(8 - r, 8 - c)$ steps.

```cpp
int totalBishopMoves(int r, int c) {
    if (r < 1 || r > 8 || c < 1 || c > 8) return 0;
    return min(r - 1, c - 1) + 
           min(r - 1, 8 - c) + 
           min(8 - r, c - 1) + 
           min(8 - r, 8 - c);
}
```

---

# 2. Number System & Base Conversions

---

### 🔄 Decimal to Base-$B$ Encoding
Divide repeatedly by base $B$, accumulate remainders multiplied by place value ($10^k$):

$$\text{ans} = \text{ans} + (\text{num} \pmod B) \times \text{multiplier}; \quad \text{multiplier} \times= 10; \quad \text{num} /= B;$$

```cpp
int decimalToBaseB(int num, int B) {
    int ans = 0, mul = 1;
    while (num > 0) {
        int rem = num % B;
        num /= B;
        ans += rem * mul;
        mul *= 10;
    }
    return ans;
}
```

### 🔄 Base-$B$ to Decimal Decoding
Extract digits repeatedly modulo 10, accumulate multiplied by powers of $B$:

$$\text{ans} = \text{ans} + (\text{num} \pmod{10}) \times \text{multiplier}; \quad \text{multiplier} \times= B; \quad \text{num} /= 10;$$

```cpp
int baseBToDecimal(int num, int B) {
    int ans = 0, mul = 1;
    while (num > 0) {
        int rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= B;
    }
    return ans;
}
```

---

# 3. Bitwise Operator Mechanics & Hacks

---

### ⚡ ASCII Case Conversion via Bit 5
In ASCII, uppercase and lowercase characters differ only at the 6th bit (weight 32, $2^5 = 00100000_2$):
- `'A' = 65 = 01000001_2`
- `'a' = 97 = 01100001_2`

| Operation | Syntax | Effect |
| :--- | :--- | :--- |
| **To Lowercase** | `ch \| 32` or `ch \| ' '` | Sets bit 5 to `1` |
| **To Uppercase** | `ch & ~32` or `ch & '_'` | Clears bit 5 to `0` |
| **Toggle Case** | `ch ^ 32` | Flips case |

### ⚡ Even / Odd via LSB
```cpp
bool isEven(int n) { return (n & 1) == 0; }
bool isOdd(int n)  { return (n & 1) == 1; }
```

### ⚡ Swap Without Temporary Variable
```cpp
void xorSwap(int &a, int &b) {
    if (&a != &b) { // Prevent self-aliasing zeroing
        a ^= b;
        b ^= a;
        a ^= b;
    }
}
```

---

# 4. Pattern Printing Universal Mental Framework

---

### 📐 The 3-Loop Universal Model
Every 2D pattern conforms to a standard triple-stage coordinate map:
```cpp
for (int i = 1; i <= n; i++) {           // Loop 1: Row iterator
    for (int j = 1; j <= spaces; j++) {  // Loop 2: Leading spaces
        cout << " ";
    }
    for (int k = 1; k <= items; k++) {   // Loop 3: Characters/Stars/Numbers
        cout << "*";
    }
    cout << "\n";
}
```

### 📐 Symmetric Split Rule (Butterfly & Hollow Diamond)
For two-sided symmetric shapes of size $N$, split the problem into:
1. **Upper Half:** Rows $1$ to $N$.
2. **Lower Half:** Rows $N - 1$ down to $1$ (mirror image of upper half).

### 📐 Palindrome Pyramid Formula
For row $i$, the items consist of:
1. **Ascending Part:** $1$ to $i$ (or $A$ to $A + i - 1$).
2. **Descending Part:** $i - 1$ down to $1$.
```cpp
// Spaces: n - i
for (int j = 1; j <= n - i; j++) cout << "  ";
// Ascending:
for (int j = 1; j <= i; j++) cout << j << " ";
// Descending:
for (int j = i - 1; j >= 1; j--) cout << j << " ";
```

---

## 🎯 Quick Revision Formula Card for Interviews

| Problem / Logic | Formula / Core Trick | Time | Space |
| :--- | :--- | :---: | :---: |
| **Add Digits** | `num == 0 ? 0 : 1 + (num - 1) % 9` | $O(1)$ | $O(1)$ |
| **Power of Two** | `n > 0 && (n & (n - 1)) == 0` | $O(1)$ | $O(1)$ |
| **Reverse Safe** | `if (ans > INT_MAX/10 \|\| ans < INT_MIN/10) return 0;` | $O(\log n)$ | $O(1)$ |
| **Palindrome** | Stop when `x <= rev`; check `x == rev \|\| x == rev/10` | $O(\log n)$ | $O(1)$ |
| **Sqrt(x)** | Binary search with `mid <= x / mid` | $O(\log x)$ | $O(1)$ |
| **Trailing Zeros** | `while (n >= 5) { n /= 5; count += n; }` | $O(\log_5 n)$ | $O(1)$ |
| **Prime Check** | Check up to `i * i <= n` using step `i += 6` | $O(\sqrt{n})$ | $O(1)$ |
| **GCD** | `while (b) { int r = a % b; a = b; b = r; }` | $O(\log(\min(a,b)))$ | $O(1)$ |
| **Nim Game** | `return n % 4 != 0;` | $O(1)$ | $O(1)$ |
| **Bishop Moves** | $\sum \min(\text{dist to vertical border}, \text{dist to horizontal border})$ | $O(1)$ | $O(1)$ |
| **Case Flip** | `ch ^ 32` | $O(1)$ | $O(1)$ |
