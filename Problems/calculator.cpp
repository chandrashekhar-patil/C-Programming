#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cout << "Enter the operator (+, -, *, /, %): ";
    cin >> symbol;

    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    switch (symbol)
    {
    case '+':
        cout << "Addition of the two numbers: " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction of the two numbers: " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication of the two numbers: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "Division of the two numbers: " << a / b << endl;
        } else {
            cout << "Error! Division by zero." << endl;
        }
        break;
    case '%':
        cout << "Modulus of the two numbers: " << a % b << endl;
        break;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }

    return 0;
}
