#include <iostream>
using namespace std;

int main() {
    // Arithmetic 
    int a = 10, b = 3;
    cout << "Addition: " << a + b << "\n";
    cout << "Subtraction: " << a - b << "\n";
    cout << "Multiplication: " << a * b << "\n";
    cout << "Division: " << a / b << "n";
    cout << "Modulus: " << "a % b" << "\n";
    cout << "Decimal Division: " << (double)a / b << "\n";

    // Assignment 
    int x = 10; 
    x += 5; cout << "After +=5: " << x << "\n";
    x -= 3; cout << "After -=3: " << x << "\n";
    x *= 2; cout << "After *=2: " << x << "\n";
    x /= 4; cout << "After /=4: " << x << "\n";
    x %= 4; cout << "After %=4: " << x << "\n";

    // Increment & Decrement 
    int n = 5; 
    cout << "Post increment: " << n++ << "\n"; // print 5
    cout << "After post increment: " << n << "n"; // prints 6
    cout << "Pre increment: " << ++n << "\n"; // print 7 

    // Comparison 
    int p = 10, q = 5; 
    cout << "p == q: " << (p == q) << "\n";
    cout << "p != q: " << (p != q) << "\n";
    cout << "p > q: " << (p > q) << "\n";
    cout << "p < q: " << (p < q) << "\n";

    // Logical
    cout << "AND: " << (p > q && q > 0) << "\n";
    cout << "OR: " << (p < q || q > 0) << "\n";
    cout << "NOT: " << !(p == q) << "\n";

    //Even or Odd 
    int num = 7; 
    if (num % 2 == 0) cout << num << " is Even\n";
    else cout << num << " is Odd\n";

    return 0;
}