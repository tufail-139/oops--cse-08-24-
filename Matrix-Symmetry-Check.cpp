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

    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        cout << "The matrix is symmetric.\n";
    else
        cout << "The matrix is not symmetric.\n";

    return 0;
}