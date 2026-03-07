# Basic Structure of a C++ Program

## What it is
Every C++ program follows a fixed skeleton. Before writing any logic,
you need to understand what each part of this skeleton does and why it exists.

## The Basic Structure
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
```

## What Each Line Does

### `#include <iostream>`
- This is a header file that lets you use input/output features
- `cin` (take input) and `cout` (print output) both come from here
- Without this line, your program cannot print anything

### `using namespace std;`
- `std` is a namespace — a container that holds cout, cin, endl and more
- Without this line, you would have to write `std::cout` every single time
- This line lets you write just `cout` instead

### `int main()`
- This is the main function — every C++ program must have exactly one
- Your program starts executing from here, line by line
- `int` means this function returns a whole number at the end

### `cout << "Hello World!" << endl;`
- `cout` means "print to screen"
- `<<` is the insertion operator — it sends data to cout
- `endl` moves the cursor to the next line (like pressing Enter)
- Every statement in C++ must end with a semicolon `;`

### `return 0;`
- Tells the computer the program finished successfully
- 0 means no errors. Any other number means something went wrong.

## Common Variations
```cpp
// You can print multiple things in one line
cout << "My name is " << "Sampada" << endl;

// You can use \n instead of endl (faster, same result)
cout << "Hello World!\n";

// Comments — the compiler ignores these, only for humans reading code
// This is a single line comment

/* This is a
   multi-line comment */
```

## Rules You Must Never Forget
- Every statement ends with `;` — forgetting this is the #1 beginner mistake
- `main()` must always exist — it is the entry point of every program
- C++ is case sensitive — `Cout` and `cout` are completely different
- `#include` lines go at the very top, before everything else

## Things That Confused Me
- Why `int main()` and not just `main()`? Because main returns a value (0) to the OS
- What if I forget `using namespace std;`? You get an error unless you write `std::cout`
- Why `<<` and not just `=` for cout? Because `<<` means "send this to the output stream"

## My Practice Code
See practice/hello.cpp