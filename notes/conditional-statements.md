# Conditional Statements in C++

## What it is
Conditionals let your program make decisions.
"If this is true, do this. Otherwise, do that."
Without conditionals, every program would run the same way every time.

---

## 1. if Statement
Runs a block of code only if the condition is true.
```cpp
int age = 20;

if (age >= 18) {
    cout << "You are an adult\n";
}
// if age is less than 18, nothing happens
```

---

## 2. if-else Statement
Runs one block if true, another block if false.
```cpp
int age = 15;

if (age >= 18) {
    cout << "You are an adult\n";
} else {
    cout << "You are a minor\n";
}
```

---

## 3. if-else if-else Statement
Used when you have more than 2 possible outcomes.
```cpp
int marks = 75;

if (marks >= 90) {
    cout << "Grade: A\n";
} else if (marks >= 80) {
    cout << "Grade: B\n";
} else if (marks >= 70) {
    cout << "Grade: C\n";
} else if (marks >= 60) {
    cout << "Grade: D\n";
} else {
    cout << "Grade: F\n";
}
// prints: Grade: C
```

---

## 4. Nested if
An if statement inside another if statement.
```cpp
int age = 20;
bool hasID = true;

if (age >= 18) {
    if (hasID == true) {
        cout << "Entry allowed\n";
    } else {
        cout << "No ID, entry denied\n";
    }
} else {
    cout << "Too young, entry denied\n";
}
```

---

## 5. switch Statement
Used when you are checking one variable against many fixed values.
Cleaner than writing many if-else if blocks.
```cpp
int day = 3;

switch (day) {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    default:
        cout << "Weekend\n";
}
// prints: Wednesday
```

### Why break is Important in switch
```cpp
int x = 1;

switch (x) {
    case 1:
        cout << "One\n";
        // no break here!
    case 2:
        cout << "Two\n";
        break;
    case 3:
        cout << "Three\n";
        break;
}
// prints: One
//         Two
// Without break, it falls through to the next case automatically
// Always add break at the end of every case
```

### default in switch
```cpp
int x = 10;

switch (x) {
    case 1: cout << "One\n"; break;
    case 2: cout << "Two\n"; break;
    default: cout << "Number not found\n";  // runs if no case matches
}
```

---

## 6. Ternary Operator (Shorthand if-else)
A one-line shortcut for simple if-else statements.
```cpp
// Syntax: condition ? value_if_true : value_if_false

int age = 20;
string result = (age >= 18) ? "Adult" : "Minor";
cout << result << "\n";   // prints: Adult

// Same as writing:
// if (age >= 18) result = "Adult";
// else result = "Minor";

// Find maximum of two numbers
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << "Max: " << max << "\n";   // prints: Max: 20
```

---

## Common Mistakes
```cpp
// MISTAKE 1: Using = instead of == in condition
int x = 5;
if (x = 10) { }   // ❌ WRONG — this assigns 10 to x, always true
if (x == 10) { }  // ✅ CORRECT — this checks if x equals 10

// MISTAKE 2: Missing curly braces
if (x > 0)
    cout << "Positive\n";
    cout << "This always runs\n";  // ❌ this is NOT inside the if

if (x > 0) {
    cout << "Positive\n";
    cout << "This is inside the if\n";  // ✅ both lines inside the if
}

// MISTAKE 3: Forgetting break in switch
switch (x) {
    case 1: cout << "One\n";   // ❌ missing break — falls through
    case 2: cout << "Two\n"; break;
}
```

---

## Things That Confused Me
- `=` assigns a value, `==` compares — mixing these inside if() is a silent bug
- Always use curly braces `{}` even for single line if blocks — avoids bugs
- switch only works with int and char — not strings or doubles
- `break` in switch is mandatory — without it, all cases below also run
- Ternary operator is just a shortcut — use it only for simple one-line conditions

## Quick Reference
| Statement | Use When |
|-----------|---------|
| if | One condition to check |
| if-else | Two possible outcomes |
| if-else if-else | Three or more outcomes |
| switch | One variable, many fixed values |
| ternary ? : | Simple one-line if-else |

## My Practice Code
See practice/conditionals.cpp