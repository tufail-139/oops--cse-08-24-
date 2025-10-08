#include <iostream>
using namespace std;
bool toBool(char input[]) {
    if ((input[0] == '1' && input[1] == '\0') ||
        (input[0] == 't' && input[1] == 'r' && input[2] == 'u' && input[3] == 'e' && input[4] == '\0')) {
        return true;
    }
    return false;
}
void printBool(bool val) {
    if (val)
        cout << "true";
    else
        cout << "false";
}

int main() {
    char input1[10], input2[10], op[10];
    bool a, b, result;

    cout << "Enter operator (AND, OR, NOT, XOR): ";
    cin >> op;
    for (int i = 0; op[i] != '\0'; i++) {
        if (op[i] >= 'a' && op[i] <= 'z') {
            op[i] = op[i] - 32;
        }
    }

    if (op[0] == 'N' && op[1] == 'O' && op[2] == 'T') {
        cout << "Enter value (true/false or 1/0): ";
        cin >> input1;
        a = toBool(input1);
        result = !a;
    } else {
        cout << "Enter first value (true/false or 1/0): ";
        cin >> input1;
        cout << "Enter second value (true/false or 1/0): ";
        cin >> input2;

        a = toBool(input1);
        b = toBool(input2);

        if (op[0] == 'A' && op[1] == 'N' && op[2] == 'D')
            result = a && b;
        else if (op[0] == 'O' && op[1] == 'R')
            result = a || b;
        else if (op[0] == 'X' && op[1] == 'O' && op[2] == 'R')
            result = a != b;  
        else {
            cout << "Invalid operator!" << endl;
            return 1;
        }
    }

    cout << "Result: ";
    printBool(result);
    cout << endl;

    return 0;
}
