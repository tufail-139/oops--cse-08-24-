#include <iostream>
using namespace std;

int main() {
    float marks[5];
    int failCount = 0;
    float total = 0, percentage;
d
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];

        total += marks[i];

        
        if (marks[i] < 40) {
            failCount++;
        }
    }

    
    if (failCount > 1) {
        cout << "Repeat Year" << endl;
    } else {
        
        percentage = total / 5;

        // Assign grade using nested if-else
        char grade;

        if (percentage >= 90) {
            grade = 'A';
        } else {
            if (percentage >= 75) {
                grade = 'B';
            } else {
                if (percentage >= 60) {
                    grade = 'C';
                } else {
                    if (percentage >= 40) {
                        grade = 'D';
                    } else {
                        grade = 'F';
                    }
                }
            }
        }

        
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }

    return 0;
}
