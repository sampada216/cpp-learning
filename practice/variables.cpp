#include <iostream>
#include <string>
using namespace std;

int main() {
    // Program 1: Declare and print all data types
    int age = 20;
    double price = 99.99;
    char grade = 'A';
    string name = "Sampada";
    bool isStudent = true;

    cout << "Age: " << age << "\n";
    cout << "Price: " << price << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Name: " << name << "\n";
    cout << "Is Student: " << isStudent << "\n";

    // Program 2: Change a variable's value
    int score = 10;
    cout << "Score before: " << score << "\n";
    score = 50;
    cout << "Score after: " << score << "\n";

    // Program 3: Constants
    const float PI = 3.14159;
    const int MAX_SCORE = 100;
    cout << "PI = " << PI << "\n";
    cout << "Max Score = " << MAX_SCORE << "\n";

    // Program 4: Multiple variables at once
    int a = 1, b = 2, c = 3;
    cout << "a=" << a << " b=" << b << " c=" << c << "\n";

    return 0;
}