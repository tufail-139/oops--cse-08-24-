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

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    cout << "Spiral order:\n";
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            cout << A[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << A[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << A[bottom][i] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << A[i][left] << " ";
            left++;
        }
    }

    cout << endl;
    return 0;
}