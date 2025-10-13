#include <iostream>
#include <algorithm>
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

    for (int i = 0; i < rows; i++)
        sort(A[i], A[i] + cols);

    cout << "Matrix after sorting each row in ascending order:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    for (int j = 0; j < cols; j++) {
        int temp[10];
        for (int i = 0; i < rows; i++)
            temp[i] = A[i][j];
        sort(temp, temp + rows);
        for (int i = 0; i < rows; i++)
            A[i][j] = temp[i];
    }

    cout << "Matrix after sorting each column in ascending order:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}