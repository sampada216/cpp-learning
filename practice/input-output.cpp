#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Program 1: Take basic input and print it
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << "\n";

    // Program 2: Take multiple inputs
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "First: " << a << " Second: " << b << "\n";

    // Program 3: Take full name with spaces
    cin.ignore();
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello " << fullName << "!\n";

    // Program 4: Formatted decimal output
    double price = 9.5;
    cout << "Price: " << fixed << setprecision(2) << price << "\n";

    return 0;
}