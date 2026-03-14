# Loops in C++

## What it is
A loop repeats a block of code multiple times until a condition becomes false.
Without loops, if you wanted to print numbers 1 to 100 you would need 100 lines of code.
With a loop, you need just 3 lines.

---

## 1. for Loop
Used when you know exactly how many times you want to repeat.
```cpp
for (initialisation; condition; update) {
    // code to repeat
}
```
```cpp
// Print 1 to 5
for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
}
// Output:
// 1
// 2
// 3
// 4
// 5
```

### How it works step by step
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
}

// Step 1: int i = 1        — initialise i to 1 (runs once only)
// Step 2: is i <= 5?       — yes (1 <= 5), so enter the loop
// Step 3: print i          — prints 1
// Step 4: i++              — i becomes 2
// Step 5: is i <= 5?       — yes (2 <= 5), so continue
// Step 6: print i          — prints 2
// ... continues until i = 6
// Step N: is i <= 5?       — no (6 <= 5 is false), so exit loop
```

### Counting Backwards
```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << "\n";
}
// Output: 5 4 3 2 1
```

### Skipping Numbers
```cpp
for (int i = 0; i <= 10; i += 2) {
    cout << i << "\n";
}
// Output: 0 2 4 6 8 10 (even numbers only)
```

---

## 2. while Loop
Used when you don't know exactly how many times to repeat.
Keeps running as long as the condition is true.
```cpp
while (condition) {
    // code to repeat
}
```
```cpp
// Print 1 to 5 using while
int i = 1;
while (i <= 5) {
    cout << i << "\n";
    i++;
}
```

### Real Use Case — Keep asking until valid input
```cpp
int number;
cout << "Enter a positive number: ";
cin >> number;

while (number <= 0) {
    cout << "Invalid! Enter a positive number: ";
    cin >> number;
}
cout << "You entered: " << number << "\n";
```

---

## 3. do-while Loop
Similar to while but runs the code **at least once** before checking the condition.
```cpp
do {
    // code to repeat
} while (condition);
```
```cpp
int i = 1;
do {
    cout << i << "\n";
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
```

### Key Difference — do-while vs while
```cpp
int i = 10;

// while — checks condition first
while (i <= 5) {
    cout << i << "\n";  // never runs because 10 <= 5 is false immediately
}

// do-while — runs once first, then checks
do {
    cout << i << "\n";  // prints 10 once, then checks 10 <= 5 which is false
} while (i <= 5);
```

---

## 4. Nested Loops
A loop inside another loop. Used for patterns and 2D problems.
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << i << " " << j << "\n";
    }
}
// Every time the **outer loop runs once**, the **inner loop runs completely** from start to finish.
// Output:
// 1 1
// 1 2
// 1 3
// 2 1
// 2 2
// 2 3
// 3 1
// 3 2
// 3 3
```

### Printing a Pattern
```cpp
// Star triangle pattern
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << "\n";
}
// Output:
// *
// * *
// * * *
// * * * *
// * * * * *
```

---

## 5. Infinite Loop
A loop that never stops. Useful sometimes but usually a bug.
```cpp
// Intentional infinite loop
while (true) {
    cout << "Running forever\n";
    // need a break statement to exit
}

// Accidental infinite loop — common mistake
int i = 1;
while (i <= 5) {
    cout << i << "\n";
    // forgot i++ — i never changes so condition never becomes false
}
```

---

## for vs while vs do-while
```cpp
// Use for when you know the count
for (int i = 0; i < 10; i++) { }

// Use while when you don't know the count
while (userInput != "quit") { }

// Use do-while when you need to run at least once
do {
    // show menu to user
} while (userChoice != 0);
```

---

## Things That Confused Me
- `i++` vs `i--` — `i++` increases (counts up), `i--` decreases (counts down)
- The for loop condition uses `<` or `<=` — off by one errors are very common
  - `i < 5` runs for i = 0,1,2,3,4 (5 times)
  - `i <= 5` runs for i = 0,1,2,3,4,5 (6 times)
- while checks condition BEFORE running, do-while checks AFTER running
- Always make sure the loop variable changes — otherwise infinite loop
- Nested loops multiply — outer runs 3 times, inner runs 3 times = 9 total iterations

## Quick Reference
| Loop | Use When |
|------|---------|
| for | You know exact number of repetitions |
| while | You don't know how many times, check first |
| do-while | You don't know how many times, run at least once |
| nested | Working with patterns, grids, 2D problems |

## My Practice Code
See practice/06-loops.cpp