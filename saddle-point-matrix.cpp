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

    bool found = false;

    for (int i = 0; i < rows; i++) {
        int rowMin = A[i][0];
        int colIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (A[i][j] < rowMin) {
                rowMin = A[i][j];
                colIndex = j;
            }
        }

        bool isSaddle = true;
        for (int k = 0; k < rows; k++) {
            if (A[k][colIndex] > rowMin) {
                isSaddle = false;
                break;
            }
        }

        if (isSaddle) {
            cout << "Saddle point: " << rowMin << " at position (" << i + 1 << ", " << colIndex + 1 << ")\n";
            found = true;
        }
    }

    if (!found)
        cout << "No saddle point found.\n";

    return 0;
}