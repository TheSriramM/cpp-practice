#include <iostream>
using namespace std;

int main() {
    double a,b;
    char op;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        default:
            cout << "Please enter one of the correct operators (+, -, *, /) and try again.";
    }
}