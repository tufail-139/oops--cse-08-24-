#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    double temp, sum = 0;
    cout << "Enter temperatures:\n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
    }

    cout << "Average temperature = " << (sum / n) << endl;

    return 0;
}