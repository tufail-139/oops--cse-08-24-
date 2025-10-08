#include <iostream>
using namespace std;

int main() {
    double operand1, operand2;
    char op;
    double result;
    bool valid = true;

    
    cout << "Enter first number: ";
    cin >> operand1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> operand2;

    
    result = (op == '+') ? (operand1 + operand2) :
             (op == '-') ? (operand1 - operand2) :
             (op == '*') ? (operand1 * operand2) :
             (op == '/') ? ((operand2 != 0) ? (operand1 / operand2) : (valid = false, 0)) :
             (op == '%') ? ((operand2 != 0) ? ((int)operand1 % (int)operand2) : (valid = false, 0)) :
             (valid = false, 0);  

    
    if (valid)
        cout << "Result: " << result << endl;
    else if (op == '/' || op == '%')
        cout << "Error: Division or modulus by zero!" << endl;
    else
        cout << "Error: Invalid operator!" << endl;

    return 0;
}
