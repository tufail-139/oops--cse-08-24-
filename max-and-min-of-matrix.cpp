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

    int maxVal = A[0][0], minVal = A[0][0];
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (A[i][j] < minVal) {
                minVal = A[i][j];
                minRow = i;
                minCol = j;
            }
        }

    cout << "Largest element: " << maxVal << " at position (" << maxRow + 1 << ", " << maxCol + 1 << ")\n";
    cout << "Smallest element: " << minVal << " at position (" << minRow + 1 << ", " << minCol + 1 << ")\n";

    return 0;
}