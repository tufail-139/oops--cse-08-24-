#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, smallest, largest;
    double sum = 0, sumSquares = 0;

    cout << "Enter " << n << " numbers:\n";
    cin >> num;
    smallest = largest = num;
    sum = num;
    sumSquares = num * num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
        sumSquares += num * num;
    }

    double average = sum / n;
    double stdDev = sqrt((sumSquares / n) - (average * average));

    cout << "Range = " << (largest - smallest) << endl;
    cout << "Standard Deviation = " << stdDev << endl;

    return 0;
}