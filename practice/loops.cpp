#include <iostream>
using namespace std;

int main() {
    // Program 1: Print 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // Program 2: Print even numbers 1 to 20
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << "\n";

    // Program 3: Sum of numbers 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum 1 to 100: " << sum << "\n";

    // Program 4: Multiplication table
    int n;
    cout << "Enter a number for multiplication table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << "\n";
    }

    // Program 5: while — keep asking until positive number
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    while (num <= 0) {
        cout << "Invalid! Try again: ";
        cin >> num;
    }
    cout << "Valid number: " << num << "\n";

    // Program 6: do-while — simple menu
    int choice;
    do {
        cout << "\n1. Say Hello\n2. Say Bye\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) cout << "Hello!\n";
        else if (choice == 2) cout << "Bye!\n";
    } while (choice != 0);

    // Program 7: Star pattern
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}