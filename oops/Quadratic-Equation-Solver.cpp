#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    
    (a == 0) ? cout << "This is not a quadratic equation.\n" :
    {
        float discriminant = b * b - 4 * a * c;
        float root1, root2;

    
        if (discriminant > 0) {
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct.\n";
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } else if (discriminant == 0) {
            
            root1 = -b / (2 * a);
            cout << "Roots are real and equal.\n";
            cout << "Root = " << root1 << endl;
        } else {
            
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are imaginary (complex).\n";
            cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
            cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
        }
    };

    return 0;
}
