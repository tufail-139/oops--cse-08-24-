#include <iostream>
using namespace std;

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}
void substring(char str[], int start, int len) {
    int i;
    for (i = 0; i < len; i++) {
        cout << str[start + i];
    }
    cout << endl;
}

void concatenate(char str1[], char str2[]) {
    char result[200];
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0'; 

    cout << "Concatenated string: " << result << endl;
}
int frequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int main() {
    char str1[100], str2[100], ch;
    int choice, start, len;

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Length of string\n";
        cout << "2. Reverse the string\n";
        cout << "3. Substring\n";
        cout << "4. Concatenate with another string\n";
        cout << "5. Frequency of a character\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length: " << stringLength(str1) << endl;
                break;

            case 2:
                cout << "Reversed string: ";
                reverseString(str1);
                break;

            case 3:
                cout << "Enter start position (0-based): ";
                cin >> start;
                cout << "Enter length of substring: ";
                cin >> len;
                cout << "Substring: ";
                substring(str1, start, len);
                break;

            case 4:
                cout << "Enter another string to concatenate: ";
                cin.ignore(); 
                cin.getline(str2, 100);
                concatenate(str1, str2);
                break;

            case 5:
                cout << "Enter character to find frequency: ";
                cin >> ch;
                cout << "Frequency of '" << ch << "': " << frequency(str1, ch) << endl;
                break;

            case 6:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
