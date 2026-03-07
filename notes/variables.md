# Variables & Data Types

## What it is
A variable is a named container that stores a value in memory.
You give it a name, a type, and a value — and the computer reserves
space in memory to hold it.

## Basic Syntax
```cpp
datatype variableName = value;

int age = 20;
float price = 99.5;
char grade = 'A';
string name = "Sampada";
bool isStudent = true;
```

## All Data Types You Need to Know

### Integer Types
```cpp
int age = 20;          // whole numbers, range: -2 billion to +2 billion
long bigNum = 100000L; // bigger whole numbers
short small = 10;      // smaller range, uses less memory
```

### Decimal Types
```cpp
float price = 9.99f;     // decimal, less precise, add 'f' at end
double pi = 3.14159265;  // decimal, more precise (use this by default)
```

### Character & String
```cpp
char letter = 'A';        // single character, always use single quotes ''
string name = "Sampada";  // multiple characters, always use double quotes ""
```

### Boolean
```cpp
bool isStudent = true;   // only two values: true or false
bool isPassed = false;   // used in conditions and loops
```

## Declaring Without a Value
```cpp
int age;        // declared but no value yet (contains garbage value)
int age = 0;    // always better to initialise with a value
```

## Changing a Variable's Value
```cpp
int score = 10;
score = 50;     // value is now 50, old value is gone
score = score + 10;  // value is now 60
```

## Constants — Values That Never Change
```cpp
const float PI = 3.14159;   // const means this value can never be changed
const int MAX = 100;
// PI = 3; would give an error — you cannot change a const
```

## Naming Rules
```cpp
int myAge = 20;      // ✅ valid
int _score = 10;     // ✅ valid, can start with underscore
int 2fast = 5;       // ❌ invalid — cannot start with a number
int my age = 5;      // ❌ invalid — no spaces allowed
int int = 5;         // ❌ invalid — cannot use reserved keywords as names
```

## Naming Conventions (Best Practice)
```cpp
int myAge = 20;         // camelCase — most common in C++
int my_age = 20;        // snake_case — also used
const int MAX_SIZE = 100; // ALL_CAPS for constants
```

## Taking Input into a Variable
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;              // cin takes input from keyboard
    cout << "Your age is: " << age << endl;
    return 0;
}
```

## Multiple Variables at Once
```cpp
int a = 1, b = 2, c = 3;   // declare multiple on one line
int x, y, z;                // declare multiple without values
```

## Things That Confused Me
- `float` needs an `f` at the end of the value: `9.99f` not `9.99`
- `char` uses single quotes `'A'` but `string` uses double quotes `"Sampada"`
- A variable without an initial value has a random garbage value — always initialise
- `const` variables must be given a value when declared, you cannot assign later
- `string` needs `#include <string>` but usually `#include <iostream>` already covers it

## Quick Reference Table
| Type | Example | Use For |
|------|---------|---------|
| int  | 20      | Whole numbers |
| double| 3.14   | Decimal numbers |
| char | 'A'     | Single character |
| string| "hello" | Text |
| bool | true    | Yes/No conditions |

## My Practice Code
See practice/variables.cpp