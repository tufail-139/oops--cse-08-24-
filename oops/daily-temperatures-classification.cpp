#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int temp, hot = 0, pleasant = 0, cold = 0;

    cout << "Enter daily high temperatures:\n";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp >= 85) hot++;
        else if (temp >= 60) pleasant++;
        else cold++;
    }

    cout << "Hot days (>=85): " << hot << endl;
    cout << "Pleasant days (60–84): " << pleasant << endl;
    cout << "Cold days (<60): " << cold << endl;

    return 0;
}