#include <iostream>
#include <cmath>    

using namespace std;

int main() {
    float real1, imag1;
    float real2, imag2;
    float mag1, mag2;

    
    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    
    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    // Calculate magnitudes
    mag1 = sqrt(real1 * real1 + imag1 * imag1);
    mag2 = sqrt(real2 * real2 + imag2 * imag2);

    // Compare magnitudes
    if (mag1 > mag2) {
        cout << "First complex number has higher magnitude." << endl;
    } 
    else if (mag2 > mag1) {
        cout << "Second complex number has higher magnitude." << endl;
    } 
    else {
        cout << "Equal" << endl;
    }

    return 0;
}