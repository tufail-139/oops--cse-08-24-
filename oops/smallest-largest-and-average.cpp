#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num, smallest, largest;
    float sum = 0;

    cout << "Enter " << n << " numbers:\n";
    cin >> num;
    smallest = largest = num;
    sum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    cout << "Average = " << sum / n << endl;

    return 0;
}