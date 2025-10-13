#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int A[10][10];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int mainSum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        mainSum += A[i][i];
        secondarySum += A[i][n - i - 1];
    }

    cout << "Sum of main diagonal: " << mainSum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;

    return 0;
}