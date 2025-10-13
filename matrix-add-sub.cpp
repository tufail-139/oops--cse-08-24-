#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10], B[10][10], Sum[10][10], Diff[10][10];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> B[i][j];

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Diff[i][j] = A[i][j] - B[i][j];
        }

    cout << "Matrix Addition:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << Sum[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix Subtraction:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << Diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}