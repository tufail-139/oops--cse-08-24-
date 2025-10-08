#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int MAX = 100;
    char expr[MAX];
    cout << "Enter an expression (e.g., 5 + 3.2 * 2.0): ";
    cin.getline(expr, MAX);
    double numbers[20];
    char operators[20];
    int numIndex = 0, opIndex = 0;
    char temp[20];
    int t = 0;
    for (int i = 0; expr[i] != '\0'; i++) {
        if ((expr[i] >= '0' && expr[i] <= '9') || expr[i] == '.') {
            temp[t++] = expr[i];
        } else if (expr[i] == ' ' || expr[i] == '\t') {
            continue;
        } else {
            temp[t] = '\0';  
            numbers[numIndex++] = atof(temp); 
            t = 0;
            operators[opIndex++] = expr[i]; 
        }
    }
    if (t > 0) {
        temp[t] = '\0';
        numbers[numIndex++] = atof(temp);
    }

    for (int i = 0; i < opIndex; i++) {
        if (operators[i] == '*' || operators[i] == '/') {
            if (operators[i] == '*')
                numbers[i] = numbers[i] * numbers[i + 1];
            else {
                if (numbers[i + 1] == 0) {
                    cout << "Error: Division by zero!" << endl;
                    return 1;
                }
                numbers[i] = numbers[i] / numbers[i + 1];
            }
            for (int j = i + 1; j < numIndex - 1; j++) {
                numbers[j] = numbers[j + 1];
            }
            for (int j = i; j < opIndex - 1; j++) {
                operators[j] = operators[j + 1];
            }

            numIndex--;
            opIndex--;
            i--; 
        }
    }
    double result = numbers[0];
    for (int i = 0; i < opIndex; i++) {
        if (operators[i] == '+')
            result += numbers[i + 1];
        else if (operators[i] == '-')
            result -= numbers[i + 1];
    }

    cout << "Result: " << result << endl;
    return 0;
}
