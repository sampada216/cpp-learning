# Input & Output (cin and cout)

## What it is
Input means taking data FROM the user into your program.
Output means sending data FROM your program TO the screen.
In C++, `cout` handles output and `cin` handles input.

## Basic Output — cout
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
```

## The `<<` Operator
```cpp
// << means "send this to the output"
cout << "Hello";               // prints: Hello
cout << 42;                    // prints: 42
cout << 3.14;                  // prints: 3.14

// Chain multiple things together
cout << "My age is " << 20 << endl;   // prints: My age is 20
```

## New Line — endl vs \n
```cpp
cout << "Line 1" << endl;   // moves to next line, slower
cout << "Line 2" << "\n";   // moves to next line, faster
cout << "Line 3\n";         // same as above, most common style

// endl also flushes the output buffer — use \n by default
// only use endl when you specifically need to flush
```

## Output Examples
```cpp
int age = 20;
string name = "Sampada";
double price = 99.5;

cout << "Name: " << name << "\n";       // prints: Name: Sampada
cout << "Age: " << age << "\n";         // prints: Age: 20
cout << "Price: " << price << "\n";     // prints: Price: 99.5

// Printing a blank line
cout << "\n";
cout << endl;
```

## Basic Input — cin
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;                          // takes input from keyboard
    cout << "You entered: " << age << "\n";
    return 0;
}
```

## The `>>` Operator
```cpp
// >> means "take from input and store here"
int age;
cin >> age;          // waits for user to type a number and press Enter

double price;
cin >> price;        // works for decimals too

char grade;
cin >> grade;        // works for single characters too
```

## Taking Multiple Inputs
```cpp
int a, b;
cin >> a >> b;       // user types two numbers separated by space

// Example: user types "10 20" and hits Enter
// a = 10, b = 20
```

## Full Input/Output Example
```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "! You are " << age << " years old.\n";
    return 0;
}
```

## Taking String Input With Spaces
```cpp
// cin >> stops reading at a space — so "Sampada Patil" would only store "Sampada"
string name;
cin >> name;            // ❌ only reads one word

// Use getline() to read an entire line including spaces
string fullName;
getline(cin, fullName); // ✅ reads the full line
```

## Common Mistake With getline
```cpp
int age;
cin >> age;
cin.ignore();           // MUST add this line after cin >> before getline
string name;
getline(cin, name);     // now works correctly

// Why? cin >> leaves a leftover newline in the buffer
// cin.ignore() clears it, otherwise getline reads that empty line
```

## Formatting Output
```cpp
#include <iostream>
#include <iomanip>      // needed for formatting
using namespace std;

int main() {
    double price = 9.5;
    cout << fixed << setprecision(2) << price << "\n";  // prints: 9.50
    // fixed = always show decimal point
    // setprecision(2) = show 2 decimal places
    return 0;
}
```

## Things That Confused Me
- `<<` is for cout (output), `>>` is for cin (input) — the arrows point the direction of data flow
- `endl` and `"\n"` both go to next line but `\n` is faster — prefer `\n`
- `cin >>` stops at spaces — use `getline()` for full sentence input
- Always add `cin.ignore()` between `cin >>` and `getline()` or getline reads an empty line
- You need `#include <iomanip>` for formatting like setprecision

## Quick Reference
| Code | What it Does |
|------|-------------|
| `cout << x` | Print x to screen |
| `cin >> x` | Take input into x |
| `endl` | New line + flush buffer |
| `"\n"` | New line (faster) |
| `getline(cin, x)` | Read full line with spaces |
| `cin.ignore()` | Clear leftover newline from buffer |
| `setprecision(2)` | Show 2 decimal places |

## My Practice Code
See practice/input-output.cpp