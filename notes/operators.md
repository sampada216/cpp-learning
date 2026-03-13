# Operators in C++

## What it is
Operators are symbols that perform operations on variables and values.
C++ has 5 types of operators you need to know.

---

## 1. Arithmetic Operators
Used for basic math calculations.
```cpp
int a = 10, b = 3;

cout << a + b << "\n";   // 13  — addition
cout << a - b << "\n";   // 7   — subtraction
cout << a * b << "\n";   // 30  — multiplication
cout << a / b << "\n";   // 3   — division (integer division, drops decimal)
cout << a % b << "\n";   // 1   — modulus (remainder after division)
```

### Integer vs Decimal Division
```cpp
int a = 10, b = 3;
cout << a / b << "\n";       // 3 — drops the decimal (integer division)

double x = 10, y = 3;
cout << x / y << "\n";       // 3.3333 — keeps decimal (double division)

// To get decimal from int division, cast one to double
cout << (double)a / b << "\n";  // 3.3333
```

### Modulus — Most Used in DSA
```cpp
cout << 10 % 3 << "\n";   // 1  (10 = 3*3 + 1, remainder is 1)
cout << 15 % 5 << "\n";   // 0  (15 = 5*3 + 0, remainder is 0)
cout << 7 % 2 << "\n";    // 1  (used to check if number is odd or even)

// Check even or odd
int n = 7;
if (n % 2 == 0) cout << "Even\n";
else cout << "Odd\n";
```

---

## 2. Assignment Operators
Used to assign or update values in variables.
```cpp
int a = 10;

a = 10;    // assign 10 to a
a += 5;    // same as a = a + 5  → a is now 15
a -= 3;    // same as a = a - 3  → a is now 12
a *= 2;    // same as a = a * 2  → a is now 24
a /= 4;    // same as a = a / 4  → a is now 6
a %= 4;    // same as a = a % 4  → a is now 2
```

---

## 3. Increment & Decrement Operators
Used to increase or decrease a value by 1.
```cpp
int a = 5;

a++;    // post-increment — use a first, then increase  → a becomes 6
++a;    // pre-increment  — increase first, then use    → a becomes 7
a--;    // post-decrement — use a first, then decrease  → a becomes 6
--a;    // pre-decrement  — decrease first, then use    → a becomes 5
```

### Pre vs Post — The Difference
```cpp
int a = 5;
cout << a++ << "\n";   // prints 5, THEN increases to 6
cout << a << "\n";     // prints 6

int b = 5;
cout << ++b << "\n";   // increases to 6 FIRST, then prints 6
cout << b << "\n";     // prints 6
```

---

## 4. Comparison Operators
Used to compare two values. Always returns true or false.
```cpp
int a = 10, b = 5;

cout << (a == b) << "\n";   // 0 (false) — is a equal to b?
cout << (a != b) << "\n";   // 1 (true)  — is a not equal to b?
cout << (a > b)  << "\n";   // 1 (true)  — is a greater than b?
cout << (a < b)  << "\n";   // 0 (false) — is a less than b?
cout << (a >= b) << "\n";   // 1 (true)  — is a greater than or equal to b?
cout << (a <= b) << "\n";   // 0 (false) — is a less than or equal to b?
```

---

## 5. Logical Operators
Used to combine multiple conditions. Returns true or false.
```cpp
int a = 10, b = 5, c = 8;

// AND — both conditions must be true
cout << (a > b && b < c) << "\n";   // 1 (true)  — 10>5 AND 5<8
cout << (a > b && b > c) << "\n";   // 0 (false) — 10>5 AND 5>8 (second is false)

// OR — at least one condition must be true
cout << (a > b || b > c) << "\n";   // 1 (true)  — 10>5 OR 5>8 (first is true)
cout << (a < b || b > c) << "\n";   // 0 (false) — both are false

// NOT — flips true to false and false to true
cout << !(a > b) << "\n";   // 0 (false) — a>b is true, NOT flips it to false
cout << !(a < b) << "\n";   // 1 (true)  — a<b is false, NOT flips it to true
```

---

## Operator Precedence (Order of Operations)
Just like math, C++ follows a specific order:
```cpp
int result = 10 + 2 * 3;    // 16, not 36 — * happens before +
int result = (10 + 2) * 3;  // 36 — brackets first

// Order (high to low):
// 1. ()  — brackets
// 2. ++, --  — increment/decrement
// 3. *, /, %  — multiplication, division, modulus
// 4. +, -  — addition, subtraction
// 5. <, >, <=, >=  — comparison
// 6. ==, !=  — equality
// 7. &&  — logical AND
// 8. ||  — logical OR
// 9. =, +=, -=  — assignment
```

---

## Things That Confused Me
- `=` is assignment (store a value), `==` is comparison (check if equal) — mixing these up is a very common bug
- Integer division drops the decimal: `10/3` gives `3` not `3.33`
- `%` only works on integers, not decimals
- `a++` and `++a` look the same but behave differently inside expressions
- `&&` means both must be true, `||` means at least one must be true

## Quick Reference Table
| Operator | Example | Meaning |
|----------|---------|---------|
| + - * / % | a + b | Arithmetic |
| = += -= *= /= | a += 5 | Assignment |
| ++ -- | a++ | Increment/Decrement |
| == != > < >= <= | a == b | Comparison |
| && \|\| ! | a && b | Logical |

## My Practice Code
See practice/operators.cpp