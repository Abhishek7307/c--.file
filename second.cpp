#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;  // Exit program
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 0;  // Exit program
    }

    cout << "Result: " << result << endl;

    return 0;
}   