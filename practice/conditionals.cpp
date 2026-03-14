#include <iostream>
using namespace std;

int main() {
    // Program 1: Basic if-else
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult\n";
    } else {
        cout << "You are a minor\n";
    }

    // Program 2: Grade calculator
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90)       cout << "Grade: A\n";
    else if (marks >= 80)  cout << "Grade: B\n";
    else if (marks >= 70)  cout << "Grade: C\n";
    else if (marks >= 60)  cout << "Grade: D\n";
    else                   cout << "Grade: F\n";

    // Program 3: switch - day of week
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1: cout << "Monday\n";    break;
        case 2: cout << "Tuesday\n";   break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n";  break;
        case 5: cout << "Friday\n";    break;
        case 6: cout << "Saturday\n";  break;
        case 7: cout << "Sunday\n";    break;
        default: cout << "Invalid day\n";
    }

    // Program 4: Ternary operator
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int max = (a > b) ? a : b;
    cout << "Maximum: " << max << "\n";

    // Program 5: Even or Odd using ternary
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " is " << (n % 2 == 0 ? "Even" : "Odd") << "\n";
// yaha pr bracket use kiya since ternary is written inside cout
    return 0;
}