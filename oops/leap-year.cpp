#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0) {
            return true; 
        } else {
            if (year % 400 == 0) {
                return true; 
            } else {
                return false; 
            }
        }
    } else {
        return false; 
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
        cout << "Next 5 leap years are: ";
        int count = 0;
        int nextYear = year + 1;

        while (count < 5) {
            if (isLeapYear(nextYear)) {
                cout << nextYear << " ";
                count++;
            }
            nextYear++;
        }
        cout << endl;
    }

    return 0;
}
