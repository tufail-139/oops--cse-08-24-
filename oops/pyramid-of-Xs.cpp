#include <iostream>
using namespace std;

int main() {
    int height = 20;

    for (int i = 1; i <= height; i++) {
        for (int space = 0; space < height - i; space++)
            cout << " ";
        for (int x = 0; x < (2 * i - 1); x++)
            cout << "X";
        cout << endl;
    }

    return 0;
}