#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
            rowSum += A[i][j];
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Sum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++)
            colSum += A[i][j];
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}