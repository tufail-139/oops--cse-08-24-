#include <iostream>
using namespace std;

int main() {
    int id, hours;
    double rate, gross, overtime, netPay, totalPay = 0;
    char more;

    do {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter hourly wage: ";
        cin >> rate;
        cout << "Enter hours worked: ";
        cin >> hours;

        overtime = (hours > 40) ? (hours - 40) * rate * 1.5 : 0;
        gross = (hours <= 40 ? hours * rate : 40 * rate) + overtime;
        netPay = gross - (gross * 0.03625);

        cout << "Employee " << id << " Net Pay = " << netPay << endl;

        totalPay += netPay;

        cout << "Add another employee? (y/n): ";
        cin >> more;
    } while (more == 'y');

    cout << "Total payroll = " << totalPay << endl;

    return 0;
}